/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:42:37 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:42:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen5(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_mycopy(char *str, char const *s1, char const *s2)
{
	while (*s1)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	len = ft_strlen5(s1) + ft_strlen5(s2);
	if ((str = malloc(len + 1)) == NULL)
		return (NULL);
	ft_mycopy(str, s1, s2);
	return (str);
}
/*
**int main(int argc, char **argv)
**{
**	char *str3;
**
**	printf("%s\n", str3 = ft_strjoin(argv[1], argv[2]));
**}
*/
