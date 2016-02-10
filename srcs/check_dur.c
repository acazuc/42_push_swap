/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 15:29:37 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/10 17:18:12 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		check_first_swap(t_env *env)
{
	int		i;

	if (env->stack_a_size <= 2)
		return ;
	if (env->stack_a[0] != env->sorted[env->sorted_size - 2]
		|| env->stack_a[1] != env->sorted[env->sorted_size - 1])
		return ;
	i = 2;
	while (i < env->stack_a_size)
	{
		if (env->stack_a[i] != env->sorted[env->sorted_size - 1 - i])
			return ;
		i++;
	}
	rra(env);
	rra(env);
	sa(env);
	ra(env);
	ra(env);
}

static void		check_last_swap(t_env *env)
{
	int		i;

	if (env->stack_a_size <= 2)
		return ;
	if (env->stack_a[env->sorted_size - 1] != env->sorted[1]
			|| env->stack_a[env->sorted_size - 2]
			!= env->sorted[0])
		return ;
	i = 0;
	while (i < env->stack_a_size - 2)
	{
		if (env->stack_a[i] != env->sorted[env->sorted_size - 1 - i])
			return ;
		i++;
	}
	sa(env);
}

void			check_dur(t_env *env)
{
	check_first_swap(env);
	check_last_swap(env);
}
