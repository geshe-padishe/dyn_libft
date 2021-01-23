/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:41:45 by user42            #+#    #+#             */
/*   Updated: 2021/01/23 11:07:30 by nikotikch        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		find_size(long long nb_c)
{
	int size;

	size = 0;
	if (nb_c == 0)
		return (1);
	if (nb_c < 0)
	{
		nb_c = nb_c * -1;
		size++;
	}
	while (nb_c >= 1)
	{
		size++;
		nb_c = nb_c / 10;
	}
	return (size);
}

char	*bazooka(char *str, long long nb_c, int size, int n)
{
	int	i;

	i = 0;
	if (nb_c < 0)
	{
		str[0] = '-';
		nb_c = nb_c * -1;
	}
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while (nb_c >= 1)
	{
		str[size - i - 1] = (nb_c % 10) + 48;
		nb_c = nb_c / 10;
		i++;
	}
	str[size] = '\0';
	return (str);
}

char	*ft_itoa(long long n)
{
	char	*str;
	long	nb_c;
	int		size;

	size = 0;
	nb_c = n;
	size = find_size(nb_c);
	if ((str = malloc(size + 1)) == NULL)
		return (NULL);
	return (bazooka(str, nb_c, size, n));
}
/*
**int main(int argc, char **argv)
**{
**	int i = (atoi(argv[1]));
**
**	printf("%s\n", ft_itoa(i));
**}
*/
