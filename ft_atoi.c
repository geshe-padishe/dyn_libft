/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:38:53 by user42            #+#    #+#             */
/*   Updated: 2020/06/28 20:26:13 by ngenadie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned long long int	gooba(void)
{
	unsigned long long int	nbr;
	int						i;

	i = 0;
	nbr = 1;
	while (i < 63)
	{
		nbr = nbr * 2;
		i++;
	}
	return (nbr);
}

int						gooba2(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int						ft_atoi_sign(const char *nstr)
{
	if (nstr[0] == '-')
		return (-1);
	if (nstr[0] == '+')
		return (1);
	return (0);
}

int						ft_atoi(const char *nstr)
{
	unsigned long long int	nbr;
	int						sign;

	sign = 1;
	nbr = 0;
	while ((*nstr > 8 && *nstr < 14) || *nstr == 32)
		nstr++;
	if ((sign = ft_atoi_sign(nstr)))
		nstr++;
	else
		sign = 1;
	if ((*nstr >= '0' && *nstr <= '9'))
		while (*nstr >= '0' && *nstr <= '9')
		{
			nbr = nbr * 10 + (*nstr - 48);
			if (nbr >= gooba())
				return (gooba2(sign));
			nstr++;
		}
	else
		return (0);
	return (nbr * sign);
}
/*
**int main(int argc, char **argv)
**{
**	char *str = argv[1];
**
**	argc = 0;
**	printf("meme => %d\n", ft_atoi(str));
**	printf("real => %d\n", atoi(str));
**	printf("-------\n");
**}
*/
