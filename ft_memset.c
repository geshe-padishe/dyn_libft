/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 18:42:10 by user42            #+#    #+#             */
/*   Updated: 2020/05/28 18:42:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char *memory_area;

	memory_area = s;
	while (n-- > 0)
		*memory_area++ = c;
	return (s);
}
/*
**int main()
**{
**	char string[10] = "blablabla";
**	char string2[10] = "blablabla";
**
**	void *ptr = &string;
**	void *ptr2 = &string2;
**
**	ft_memset(ptr, 'X', 1 * sizeof(char));
**	//memset(ptr2, 'X', 0 * sizeof(char));
**	printf("\n%s", string);
**	printf("\n%s", string2);
**}
*/
