/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:39:55 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 17:29:56 by acazuc           ###   ########.fr       */
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
	dir = 0;
	k = 0;
	rrb(env);
	while (i < 10)
	{
		from = env->min + (env->max - env->min) / 10. * i;
		to = env->min + (env->max - env->min) / 10. * i;
		j = 0;
		while (k < env->sorted_size / 10. * (i + 1))
		{
			if (env->stack_b[env->stack_b_size - 1] == env->sorted[k])
			{
				pa(env);
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
}
