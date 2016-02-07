/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 15:51:30 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 16:39:51 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sort(t_env *env)
{
	int		from;
	int		to;
	int		i;
	int		j;

	i = 0;
	while (i < 10)
	{
		from = env->min + (env->max - env->min) / 10. * i;
		to = env->min + (env->max - env->min) / 10. * (i + 1);
		j = 0;
		while (j <= env->stack_a_size)
		{
			if (env->stack_a[env->stack_a_size - 1] >= from
					&& env->stack_a[env->stack_a_size - 1] <= to)
				pb(env);
			else
			{
				ra(env);
				j++;
			}
		}
		i++;
	}
}
