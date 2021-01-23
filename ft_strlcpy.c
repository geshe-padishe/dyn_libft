/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:42:45 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 19:56:10 by ngenadie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t length;
	size_t i;

	if (dst == NULL)
		return (0);
	i = 0;
	length = ft_strlen((char*)src);
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (length);
}
/*
**int main(int argc, char **argv)
**{
**	int size = 0;
**	int size2 = 0;
**	int i = atoi(argv[2]);
**	int j = atoi(argv[1]);
**	char str[11] = "qqwweerrtt";
**	char str2[20] = "aazzuuggddbboovvppm\0";
**	char str1[11] = "qqwweerrtt";
**	char str3[20] = "aazzuuggddbboovvppm\0";
**	char *ptr = &str[i];
**	char *ptr2 = &str2[j];
**	char *ptr1 = &str1[i];
**	char *ptr3 = &str3[j];
**	int x = 0;
**	int y = 0;
**
**	while (y < 20 - j)
**	{
**		write(1, ptr3 + y, 1);
**		if (*(ptr3 + y) == 0)
**			write(1, "+", 1);
**		y++;
**	}
**	y = 0;
**	write(1, "\n", 1);
**	while (y < 20 - j)
**	{
**		write(1, ptr2 + y, 1);
**		if (*(ptr2 + y) == 0)
**			write(1, "+", 1);
**		y++;
**	}
**	y = 0;
**	write(1, "\n", 1);
**	while (x < 10)
**	{
**		size2 = ft_strlcpy(ptr, NULL, atoi(argv[2]));
**		size = ft_strlcpy(ptr3, ptr1, x);
**		if ((memcmp(ptr2, ptr3, 20 - j)) != 0)
**		{
**			dprintf(1, "%d", memcmp(ptr2, ptr3, 20));
**			write(1, "Wrong COPY\nmeme => ", 19);
**			while (y < 20 - j)
**			{
**				write(1, ptr3 + y, 1);
**				if (*(ptr3 + y) == 0)
**					write(1, "+", 1);
**				y++;
**			}
**			y = 0;
**			write(1, "\nreal => ", 9);
**			while (y < 20 - j)
**			{
**				write(1, ptr2 + y, 1);
**				if (*(ptr2 + y) == 0)
**					write(1, "+", 1);
**				y++;
**			}
**			dprintf(1, "\nsize is %d\n", x);
**		}
**		y = 0;
**		if (size != size2)
**		{
**			write(1, "Wrong SIZE\nmeme =>", 18);
**			while (y < 20 - j)
**			{
**				write(1, ptr3 + y, 1);
**				if (*(ptr3 + y) == 0)
**					write(1, "+", 1);
**				y++;
**			}
**			y = 0;
**			write(1, "\nreal =>", 8);
**			while (y < 20 - j)
**			{
**				write(1, ptr2 + y, 1);
**				if (*(ptr2 + y) == 0)
**					write(1, "+", 1);
**				y++;
**			}
**			dprintf(1, "\nx is %d, size is %d, size2 is %d\n", x, size ,size2);
**			y = 0;
**		}
**		strncpy(str2, "aazzuuggddbboovvppm\0", 20);
**		strncpy(str3, "aazzuuggddbboovvppm\0", 20);
**		x++;
**	}
**}
*/
