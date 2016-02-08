/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 14:02:22 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/08 11:08:04 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		is_sorted(t_env *env)
{
	int		i;

	i = 0;
	while (i < env->sorted_size)
	{
		if (env->sorted[i] != env->stack_a[i])
			return (0);
		i++;
	}
	return (1);
}

int				main(int ac, char **av)
{
	t_env	*env;

	if (!(env = malloc(sizeof(*env))))
		return (-1);
	env->count = 0;
	parse_args(env, ac, av);
	calc_sorted(env);
	if (!is_sorted(env))
	{
		if (env->sorted_size < 300)
			env->pre_sort = 1;
		else
			env->pre_sort = PRE_SORT;
		pre_sort(env);
		sort(env);
		ft_putchar('\n');
	}
	ft_putendl("\033[0mA:");
	print_a(env);
	ft_putendl("B:");
	print_b(env);
	ft_putstr("Count number: ");
	ft_putnbr(env->count);
	ft_putchar('\n');
	return (0);
}
