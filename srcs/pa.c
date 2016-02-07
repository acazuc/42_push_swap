/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:01:02 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 16:54:44 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_env *env)
{
	if (env->stack_b_size > 0)
	{
		env->count++;
		env->stack_a[env->stack_a_size] = env->stack_b[env->stack_b_size - 1];
		env->stack_a_size++;
		env->stack_b_size--;
		ft_putstr("\033[31;1mpa ");
	}
}
