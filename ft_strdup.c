/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:42:34 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:42:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	str = malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
**int main(int argc, char **argv)
**{
**	const char *s = argv[1];
**
**	printf("real => %s\n", strdup(s));
**	printf("meme => %s\n", ft_strdup(s));
**}
*/
