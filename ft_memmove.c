/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:42:07 by user42            #+#    #+#             */
/*   Updated: 2020/06/17 18:48:01 by ngenadie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d < s)
		while (n-- > 0)
			*d++ = *s++;
	else
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n-- > 0)
			*d-- = *s--;
	}
	return (dest);
}
/*
**int main(int argc, char **argv)
**{
**	int i;
**	int j;
**	char string[15] = "012345678";
**	char string1[15] = "012345678";
**	char string2[10] = "grxgrxgrx";
**	char string3[10] = "grxgrxgrx";
**	i = atoi(argv[1]);
**	j = atoi(argv[2]);
**	void *ptr = &string[i];
**	void *ptr2 = &string[j];
**	void *ptr1 = &string1[i];
**	void *ptr3 = &string1[j];
**
**	memmove(((void *)0), ((void *)0), 4);
**	ft_memmove(((void *)0), ((void *)0), 4);
**	printf("real => %s\n", string);
**	printf("me => %s\n", string1);
**	printf("diff = %d", strcmp(string, string1));
**
**}
*/
