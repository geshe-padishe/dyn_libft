/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:43:21 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:43:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && --n > 0 && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
**int	main(int argc, char **argv)
**{
**	char str[] = "reawe34024356";
**	char str2[] = "\0";
**	int i = 0;
**
**	while (i < 15)
**	{
**		//printf("meme => %d\n", ft_strncmp(str, str2, i * sizeof(char)));
**		//printf("real => %d\n", strncmp(str, str2, i * sizeof(char)));
**		printf("i = %d, str = %s, str 2 = %s\n", i, str, str2);
**		printf("meme => %d\n", ft_strncmp(str, str2, i));
**		printf("real => %d\n", strncmp(str, str2, i));
**		printf("---------------\n");
**		i++;
**	}
**
**	char *s1 = "\200";
**	char *s2 = "\0";
**	if (i1 == i2)
**		printf("success");
**	printf("failure");
**}
*/
