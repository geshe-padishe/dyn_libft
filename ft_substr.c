/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:43:38 by user42            #+#    #+#             */
/*   Updated: 2020/07/29 19:40:58 by ngenadie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	j = 0;
	i = start;
	while (s[i] && i - start < len)
		i++;
	str = malloc(i - start + 1);
	if (str == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str[0] = 0;
		return (str);
	}
	while (i - start - j > 0 && s[start + j])
	{
		str[j] = s[start + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
**int main(int argc, char **argv)
**{
**	//DANGER LA STRING DE BASE PEUT NE PAS AVOIR DE CHARACTER A LINDEX START
**	(void)argc;
**	char *ptr;
**	char *ptr2;
**
**	printf("%s\n", ptr = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
**}
*/
