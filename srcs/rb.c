/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:09:52 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/08 11:08:13 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_env *env)
{
	int		i;
	int		tmp;

	if (env->stack_b_size > 1)
	{
		env->count++;
		tmp = env->stack_b[env->stack_b_size - 1];
		i = env->stack_b_size - 1;
		while (i > 0)
		{
			env->stack_b[i] = env->stack_b[i - 1];
			i--;
		}
		env->stack_b[0] = tmp;
		ft_putstr("\033[33;1mRB ");
	}
}
