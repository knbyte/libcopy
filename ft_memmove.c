/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:02 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 22:30:25 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

memmove stands for "Memory Move"
The memmove function moves n bytes from the object pointed to by s2 into the
object pointed to by s1.


F u n c t i o n   P r o c e s s :

We initialise dest_ptr to the destination pointer (dest). Then we check if the
destination and source pointers are both NULL. If they are, we return NULL.

If the destination and source pointers are the same, we return the destination.

We use a while loop while decrementing n to copy n bytes from the source
string to the destination string. We use the *(char *) operator to convert
the pointer to a char and increment the pointers by 1 byte.

If the destination pointer is before the source pointer, we copy from the 
nd to the beginning to avoid overwriting the source data before it's copied.
If the destination pointer is after the source pointer, we copy from the 
beginning to the end.

Variable Setup:

    dest_ptr: This is a pointer variable (void*) initialized to hold the original destination pointer (dest). It's used to maintain the original destination for returning later.

Handling NULL Pointers:

    The function first checks for a special case where both dest and src are NULL pointers. If both are NULL, it simply returns dest (which is already NULL) to indicate an empty copy operation.

Handling Identical Pointers:

    It then checks if dest and src point to the same memory location. If they do, it means no copying is necessary, so the function returns dest (the original destination).

Overlapping Memory Regions:

    The core logic deals with situations where the memory regions might overlap (meaning dest and src point to intersecting memory blocks).

Checking Overlap Direction:

    The function compares dest and src pointers to determine the direction of overlap:
        dest > src: This indicates the destination pointer (dest) is positioned after the source pointer (src) in memory. In this case, copying backwards is necessary to avoid overwriting source data before it's copied.
        else: This covers the scenario where dest is either before src or they don't overlap. In this case, copying forwards is safe.

Looping and Copying (Backward Overlap):

    If dest > src (backward overlap):
        The function uses a while loop that decrements n before each iteration. This ensures n bytes are copied.
        Inside the loop:
            ((char *)dest)[n] = ((char *)src)[n]: This line performs the actual copy operation:
                Both dest and src are cast to char* to treat them as character pointers for byte-wise access.
                The square brackets [] with n as the index allow accessing individual bytes within the memory regions pointed to by dest and src.
                The assignment = copies the value from the source byte (src[n]) to the destination byte (dest[n]).
            The pointers are not incremented within the loop. This is because n is decremented, effectively moving backwards in memory for both dest and src.

Looping and Copying (Forward Overlap or No Overlap):

    If dest <= src (forward overlap or no overlap):
        The function uses a similar while loop with n being decremented.
        Inside the loop:
            *(char *)dest++ = *(char *)src++: This line combines the copy and pointer movement:
                Dereferencing (*) both dest and src accesses the current byte at each pointer location.
                The assignment = copies the value from the source byte to the destination byte.
                The post-increment (++) for both dest and src moves them forward by 1 byte after the copy, effectively iterating through the memory regions.

Returning the Pointer:

    After the loop completes (all n bytes are copied), the function returns dest_ptr which holds the original destination pointer (dest).
*/