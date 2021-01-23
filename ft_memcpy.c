/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:42:04 by user42            #+#    #+#             */
/*   Updated: 2020/06/17 18:49:45 by ngenadie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;

	ptr_dest = dest;
	ptr_src = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n-- > 0)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
/*
**int main(int argc, char **argv)
**{
**	char string[10] = "012345678";
**	char string1[10] = "012345678";
**	char string2[10] = "ppppppppp";
**	char string3[10] = "ppppppppp";
**	void *ptr = &string;
**	void *ptr2 = &string2;
**	void *ptr1 = &string1;
**	void *ptr3 = &string3;
**	int i = atoi(argv[1]);
**
**	ft_memcpy((void*)0, (void*)0, i);
**	memcpy(ptr1, ptr3, i);
**	printf("me => %s\n", string);
**	printf("real => %s", string1);
**}
*/
