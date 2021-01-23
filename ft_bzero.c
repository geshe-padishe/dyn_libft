/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:40:44 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:40:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char *ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = '\0';
}
/*
**int main()
**{
**	char string[10] = "blablabla";
**	char string2[10] = "blablabla";
**	void *ptr = &string[1];
**	void *ptr2 = &string2[1];
**
**	ft_bzero(ptr, 5);
**	bzero(ptr2, 5);
**	printf("me => %s\n", string);
**	printf("real => %s", string2);
**}
*/
