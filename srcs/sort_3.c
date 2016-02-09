/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 09:51:22 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/09 10:04:39 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_env *env)
{
	if (env->stack_a[0] < env->stack_a[1]
			&& env->stack_a[1] > env->stack_a[2]
			&& env->stack_a[2] > env->stack_a[0])
		sa(env);
	else if (env->stack_a[0] > env->stack_a[1]
			&& env->stack_a[1] > env->stack_a[2]
			&& env->stack_a[2] < env->stack_a[0])
	{
		sa(env);
		rra(env);
	}
	else if (env->stack_a[0] > env->stack_a[1]
			&& env->stack_a[1] < env->stack_a[2]
			&& env->stack_a[2] < env->stack_a[0])
		rra(env);
	else if (env->stack_a[0] < env->stack_a[1]
			&& env->stack_a[1] > env->stack_a[2]
			&& env->stack_a[2] < env->stack_a[0])
		ra(env);
	else
	{
		sa(env);
		ra(env);
	}
}
