/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 15:54:13 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 15:56:42 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_env *env)
{
	int		val1;
	int		val2;

	if (env->stack_a_size >= 2)
	{
		val1 = env->stack_a[env->stack_a_size - 2];
		val2 = env->stack_a[env->stack_a_size - 1];
		env->stack_a[env->stack_a_size - 2] = val2;
		env->stack_a[env->stack_a_size - 1] = val1;
	}
}
