/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:42:17 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:42:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned int	ft_strlen_endl(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void			ft_putendl_fd(char *s, int fd)
{
	size_t len;

	len = ft_strlen_endl(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
/*
**int main(int argc, char **argv)
**{
**	ft_putendl_fd(argv[1], 1);
**}
*/
