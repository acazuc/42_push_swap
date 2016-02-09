/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 15:51:30 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/09 16:28:10 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		push(t_env *env, int *j)
{
	pb(env);
	(*j)++;
}

static int		has_elem_lower_than(t_env *env, int to)
{
	int		i;

	i = 0;
	while (i < env->stack_a_size)
	{
		if (env->stack_a[i] <= to)
			return (1);
		i++;
	}
	return (0);
}

void			pre_sort(t_env *env)
{
	int		to;
	int		i;
	int		j;

	i = 0;
	while (i < env->pre_sort)
	{
		to = env->sorted[(int)(env->sorted_size
				/ (double)env->pre_sort * (i + 1)) - 1];
		j = 0;
		while (has_elem_lower_than(env, to))
		{
			if (env->stack_a[env->stack_a_size - 1] <= to)
				push(env, &j);
			else
				ra(env);
		}
		i++;
	}
}
