/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:39:55 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/08 10:00:51 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_env *env)
{
	int		from;
	int		dir;
	int		to;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < env->pre_sort)
	{
		dir = 0;
		from = env->sorted[(int)(env->sorted_size / (double)env->pre_sort * i)];
		to = env->sorted[(int)(env->sorted_size / (double)env->pre_sort * (i + 1)) - 1];
		j = 0;
		while (j < env->sorted_size / env->pre_sort)
		{
			if (env->stack_b[env->stack_b_size - 1] == env->sorted[k])
			{
				pa(env);
				j++;
				k++;
			}
			else
			{
				if (dir)
					rb(env);
				else
					rrb(env);
				if (env->stack_b[env->stack_b_size - 1] < from
						|| env->stack_b[env->stack_b_size - 1] > to)
				{
					dir = !dir;
					if (dir)
						rb(env);
					else
						rrb(env);
				}
			}
		}
		i++;
	}
	pa(env);
}
