/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 15:56:53 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/08 09:58:45 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_env *env)
{
	int		val1;
	int		val2;

	if (env->stack_b_size >= 2)
	{
		env->count++;
		val1 = env->stack_b[env->stack_b_size - 2];
		val2 = env->stack_b[env->stack_b_size - 1];
		env->stack_b[env->stack_b_size - 2] = val2;
		env->stack_b[env->stack_b_size - 1] = val1;
		ft_putstr("\033[34;1msb ");
	}
}
