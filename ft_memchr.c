/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:41:56 by user42            #+#    #+#             */
/*   Updated: 2020/07/29 19:32:24 by ngenadie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char*)s;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((void*)&src[i]);
		i++;
	}
	return (NULL);
}
/*
**int main(int argc, char **argv)
**{
**	char *ptr2;
**	char *ptr1;
**	int i = 0;
**
**	while (i >= -123143214)
**	{
**		ptr2 = ft_memchr(argv[1], argv[2][0], i);
**		ptr1 = memchr(argv[1], argv[2][0], i);
**		printf("%d\n", i);
**		if (ptr1 != ptr2)
**		{
**			printf("ERROR i = %d\n\n\n\n\n\n\n\n\n", i);
**			return (0);
**		}
**		i--;
**	}
**}
*/
