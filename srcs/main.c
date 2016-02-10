/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 14:02:22 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/10 18:34:01 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		choose_sort(t_env *env)
{
	if (!is_sorted(env))
	{
		if (env->stack_a_size == 3)
			sort_3(env);
		else if (env->stack_a_size == 2)
			sa(env);
		else if (env->stack_a_size <= 5)
			sort_5(env);
		else
		{
			check_dur(env);
			if (!is_sorted(env))
			{
				env->pre_sort = env->sorted_size / 50;
				if (env->pre_sort < 1)
					env->pre_sort = 1;
				if (env->pre_sort > 50)
					env->pre_sort = 50;
				pre_sort(env);
				sort(env);
			}
		}
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
