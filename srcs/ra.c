/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:05:49 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 16:12:55 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_env *env)
{
	int		i;
	int		tmp;

	if (env->stack_a_size > 1)
	{
		tmp = env->stack_a[env->stack_a_size - 1];
		i = env->stack_a_size - 1;
		while (i > 0)
		{
			env->stack_a[i] = env->stack_a[i - 1];
			i--;
		}
		env->stack_a[0] = tmp;
	}
}
