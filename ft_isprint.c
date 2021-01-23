/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:41:42 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:41:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126));
}
/*
**int main()
**{
**	int i = 0;
**	while (i < 300)
**	{
**		printf("%d is %d ", i, (ft_isprint(i) == isprint(i)));
**		printf("real is %d and I am %d\n", isprint(i), ft_isprint(i));
**		i++;
**	}
**}
*/
