/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 14:02:22 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/09 16:29:08 by acazuc           ###   ########.fr       */
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

static void		choose_sort(t_env *env)
{
	check_dur(env);
	if (is_sorted(env))
	{
		ft_putchar('\n');
		return ;
	}
	if (env->stack_a_size == 3)
		sort_3(env);
	else if (env->stack_a_size == 2)
		sa(env);
	else
	{
		env->pre_sort = env->sorted_size / 50;
		if (env->pre_sort <= 0)
			env->pre_sort = 1;
		if (env->pre_sort > 50)
			env->pre_sort = 50;
		pre_sort(env);
		sort(env);
	}
	ft_putchar('\n');
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
		choose_sort(env);
	ft_putendl("\033[0mA:");
	print_a(env);
	ft_putendl("B:");
	print_b(env);
	ft_putstr("Count number: ");
	ft_putnbr(env->count);
	ft_putchar('\n');
	return (0);
}
