#include "libft.h"

/*
Counts the number of words in the input string 's' based on the delimiter 'c'.
*/
static size_t count_words(char const *s, char c)
{
    size_t num_words = 0;
    size_t i = 0;

    while (s[i])
    {
        Note("Skip leading delimiter characters");
        while (s[i] && s[i] == c)
            i++;

        Note("Increment word count if a non-delimiter character is encountered");
        if (s[i])
            num_words++;

        Note("Move to the next word");
        while (s[i] && s[i] != c)
            i++;
    }

    return num_words;
}

/*
Allocates (with malloc(3)) and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. The array must end with a NULL pointer.
*/
char **ft_split(char const *s, char c)
{
    Note("Count the number of words in the input string");
    size_t num_words = count_words(s, c);

    Note("Allocate memory for the array of strings");
    char **result = (char **)ft_calloc(num_words + 1, sizeof(char *));
    if (!result)
        return NULL;

    size_t i = 0;
    size_t j = 0;
    while (s[i])
    {
        Note("Skip leading delimiter characters");
        while (s[i] && s[i] == c)
            i++;

        Note("Calculate the length of the current word");
        size_t word_len = 0;
        while (s[i + word_len] && s[i + word_len] != c)
            word_len++;

        Note("Allocate memory for the current word");
        result[j] = (char *)ft_calloc(word_len + 1, sizeof(char));
        if (!result[j])
        {
            Note("Free previously allocated memory in case of failure");
            while (j > 0)
                free(result[--j]);
            free(result);
            return NULL;
        }

        Note("Copy the current word into the array of strings");
        ft_strlcpy(result[j], s + i, word_len + 1);

        Note("Move to the next word");
        j++;
        i += word_len;
    }

    return result;
}