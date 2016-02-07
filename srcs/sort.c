/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:39:55 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 19:28:58 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_env *env)
{
	int		from;
	int		dir;
	int		to;
	int		i;
	int		k;

	i = 0;
	k = 0;
	rrb(env);
	while (i < 10)
	{
		dir = 0;
		from = env->min + (env->max - env->min) / 10. * i;
		to = env->min + (env->max - env->min) / 10. * (i + 1);
		while (k < env->sorted_size / 10. * (i + 1))
		{
			if (env->stack_b[env->stack_b_size - 1] == env->sorted[k])
			{
				pa(env);
				if (dir)
					rb(env);
				else
					rrb(env);
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
					ft_putstr("\n\n\n");
					ft_putnbr(env->stack_a_size);
					ft_putstr("\nStack A:\n");
					print_a(env);
					ft_putstr("\nStack B:\n");
					print_b(env);
					ft_putstr("\n\n\n");
					if (dir)
						rb(env);
					else
						rrb(env);
				}
			}
		}
		ft_putendl("\n\n\nI++\n\n\n");
		i++;
	}
}
