/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 14:30:24 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 15:09:25 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		valid_args(int ac, char **av)
{
	size_t	j;
	int		i;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] != '-' && av[i][j] != '+' && (av[i][j] < '0'
					|| av[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int		has_doublons(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (i != j && !ft_strcmp(av[i], av[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	parse_args(t_env *env, int ac, char **av)
{
	if (!valid_args(ac, av))
		error_quit("Invalid parmeters, only numbers allowed");
	if (has_doublons(ac, av))
		error_quit("Invalid parameters, doublons aren't allowed");
	(void)env;
}
