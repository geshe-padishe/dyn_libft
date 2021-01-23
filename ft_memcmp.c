/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:41:59 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:42:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *ptr;
	unsigned const char *ptr2;

	ptr = s1;
	ptr2 = s2;
	while (n-- > 0)
		if (*ptr++ != *ptr2++)
		{
			return (*(ptr - 1) - *(ptr2 - 1));
		}
	return (0);
}

/*
**int main()
**{
**	char str[] = "\xff\xaa\xde\xffMACOSX\xff";
**	char str2[] = "\xff\xaa\xde\x02";
**	int i = -10;
**
**	while (i < 10)
**	{
**		if (ft_memcmp(str, str2, i) != memcmp(str, str2, i))
**		{
**			printf("%d\n",i);
**			printf("meme => %d\n", ft_memcmp(str, str2, i));
**			printf("real => %d\n", memcmp(str, str2, i));
**			printf("-----------\n");
**		}
**		i++;
**	}
**}
*/
