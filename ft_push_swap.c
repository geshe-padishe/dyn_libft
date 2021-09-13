#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "dynarray.h"

int		ft_atoi(const char *nstr)
{
	long long int	nbr;
	int						sign;

	sign = 1;
	nbr = 0;
	if (*nstr == '-' || *nstr == '+')
	{
		if (*nstr == '-')
			sign = -1;
		nstr++;
	}
	if (*nstr >= '0' && *nstr <= '9')
	{
		while (*nstr)
		{
			if (!(*nstr >= '0' && *nstr <= '9'))
				return (0);
			nbr = nbr * 10 + (*nstr - 48);
			nstr++;
			if (nbr > 2147483647 || nbr < -2147483648)
				return (0);
		}
	}
	else
		return (0);
	return (nbr * sign);
}

int ft_sp(t_dynarray *darr)
{
	int tmp;
	int *tab;

	tab = (int *)darr->list;
	tmp = tab[0];
	tab[0] = tab[1];
	tab[1] = tmp;
	return (0);
}

int ft_rp(t_dynarray *darr)
{
	int tmp;
	int *tab;

	tab = (int *)darr->list;
	tmp = *tab;
	pop_dynarray(darr, 1, 1);
	push_dynarray(darr, &tmp, 1, 0);
	return (0);
}

int ft_parse(int argc, char **argv, t_dynarray *darr)
{
	int			i;
	int			*tab;

	i = 1;
	if (argc < 2 || !argv)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	while (i < argc)
	{
		if (!ft_atoi(argv[i]))
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	if ((init_dynarray(darr, argc - 1, 4)) == -1)
		return (-1);
	tab = (int *)darr->list;
	i = 0;
	while (i < argc - 1)
	{
		tab[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	darr->nb_cells = argc - 1;
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int *tab;

	i = 0;
	t_dynarray darr;


	if (ft_parse(argc, argv, &darr) == -1)
	{
		printf("parse error");
		return (-1);
	}
	tab = (int *)darr.list;
	while (i < darr.nb_cells)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_rp(&darr);
	i = 0;
	while (i < darr.nb_cells)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

/*
//pb pa
tab1[pos] = tab2[pos];
write(1, "pa\n", 1);
tab2[pos] = tab1[pos];
write(1, "pb\n", 1);




//sa sb
if (tab[pos] > tab[pos + 1])
{
	ft_swap(&tab[0], &tab[1])
		write(1, "sa\n", 3);
}

//ra rb rra rrb
if (pos - new_pos < 0)
{
	if (abs(pos - new_pos) > (argc - 1) / 2)
		rotate = argc - 1 - (pos - new_pos);
	else
		rotate = new_pos - pos;
}
else
{
	if (abs(pos - new_pos) > (argc - 1) / 2)
		rotate = argc - 1 - (new_pos - pos);
	else
		rotate = pos - new_pos;
}*/
