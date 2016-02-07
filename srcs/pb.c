/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:04:17 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 16:05:43 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_env *env)
{
	if (env->stack_a_size > 0)
	{
		env->stack_b[env->stack_b_size] = env->stack_a[env->stack_a_size - 1];
		env->stack_b_size++;
		env->stack_a_size--;
	}
}