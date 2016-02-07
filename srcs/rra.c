/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:12:38 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 16:14:23 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_env *env)
{
	int		i;
	int		tmp;

	if (env->stack_a_size > 1)
	{
		tmp = env->stack_a[0];
		i = 0;
		while (i < env->stack_a_size - 1)
		{
			env->stack_a[i] = env->stack_a[i + 1];
			i++;
		}
		env->stack_a[env->stack_a_size - 1] = tmp;
	}
}
