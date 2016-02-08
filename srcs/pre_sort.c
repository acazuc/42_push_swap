/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 15:51:30 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/08 09:53:31 by acazuc           ###   ########.fr       */
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
	while (i < env->pre_sort)
	{
		from = env->sorted[(int)(env->sorted_size / (double)env->pre_sort * i)];
		to = env->sorted[(int)(env->sorted_size / (double)env->pre_sort * (i + 1)) - 1];
		j = 0;
		while (j < env->sorted_size / env->pre_sort)
		{
			if (env->stack_a[env->stack_a_size - 1] >= from
					&& env->stack_a[env->stack_a_size - 1] <= to)
			{
				pb(env);
				j++;
			}
			else
				ra(env);
		}
		i++;
	}
	pb(env);
}
