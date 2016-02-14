/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 14:30:24 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/14 08:59:34 by acazuc           ###   ########.fr       */
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
			if (av[i][j] != '-' && (av[i][j] < '0'
					|| av[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int		has_doublons(t_env *env)
{
	int		i;
	int		j;

	i = 0;
	while (i < env->stack_a_size)
	{
		j = 0;
		while (j < env->stack_a_size)
		{
			if (i != j && env->stack_a[i] == env->stack_a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static void		fill_stack(int *stack, int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		stack[ac - i - 1] = ft_atoi(av[i]);
		i++;
	}
}

static void		parse_min_max(t_env *env)
{
	int		i;

	env->min = INT_MAX;
	env->max = INT_MIN;
	i = 0;
	while (i < env->stack_a_size)
	{
		if (env->stack_a[i] < env->min)
			env->min = env->stack_a[i];
		if (env->stack_a[i] > env->max)
			env->max = env->stack_a[i];
		i++;
	}
}

void			parse_args(t_env *env, int ac, char **av)
{
	if (ac == 1)
		exit(1);
	if (!valid_args(ac, av))
		error_quit("Invalid parameters, only numbers allowed");
	if (!valid_int(ac, av))
		error_quit("Invalid parameters, only int are allowed");
	if (!(env->stack_a = malloc(sizeof(*env->stack_a) * (ac - 1))))
		error_quit("Failed to malloc stack a");
	if (!(env->stack_b = malloc(sizeof(*env->stack_b) * (ac - 1))))
		error_quit("Failed to malloc stack b");
	env->stack_a_size = ac - 1;
	env->stack_b_size = 0;
	fill_stack(env->stack_a, ac, av);
	if (has_doublons(env))
		error_quit("Invalid parameters, doublons aren't allowed");
	parse_min_max(env);
}
