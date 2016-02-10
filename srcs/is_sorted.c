/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 18:01:07 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/10 18:01:27 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_env *env)
{
	int		i;

	i = 0;
	while (i < env->sorted_size)
	{
		if (env->sorted[env->sorted_size - 1 -i] != env->stack_a[i])
			return (0);
		i++;
	}
	return (1);
}
