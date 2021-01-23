/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:41:11 by user42            #+#    #+#             */
/*   Updated: 2020/06/01 01:23:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
/*
**int main(int argc, char **argv)
**{
**	argc = 2;
**	printf("me => %d\n", ft_isalnum(argv[1][0]));
**	printf("real => %d\n", isalnum(argv[1][0]));
**}
*/
