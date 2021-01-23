/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:43:26 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:43:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen3(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t b_length;
	size_t l_length;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	b_length = ft_strlen3(big);
	l_length = ft_strlen3(little);
	if (*little == 0)
		return ((char*)big);
	while (i <= b_length - l_length && i < len)
	{
		if (big[i] == little[j])
			while (i + j < len && little[j] && little[j] == big[i + j])
				j++;
		if (j == l_length)
		{
			return ((char*)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
**int main(int argc, char **argv)
**{
**	char *str = argv[1];
**	char *needle = argv[2];
**
**	printf("%s\n", ft_strnstr(str, needle, atoi(argv[3])));
**	printf("%s\n", strnstr(str, needle, atoi(argv[3])));
**}
*/
