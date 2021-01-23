/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:43:33 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:43:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		check_is_in(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int		ft_true_len(const char *str, const char *set)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i])
		i++;
	i--;
	while (j < i && check_is_in(str[i - j], set))
		j++;
	return (i - j + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		j;

	j = 0;
	while (check_is_in(*s1, set))
		s1++;
	len = ft_true_len(s1, set);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (j < len)
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
**int main(int argc, char **argv)
**{
**	printf("%s\n", ft_strtrim(argv[1], argv[2]));
**}
*/
