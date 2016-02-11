/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 09:51:22 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/11 09:29:38 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_env *env)
{
	int		*sta;

	sta = env->stack_a;
	if (is_sorted(env))
		return ;
	if (sta[0] < sta[1] && sta[1] > sta[2] && sta[2] < sta[0])
	{
		rra(env);
		sa(env);
	}
	else if (sta[0] > sta[1] && sta[1] < sta[2] && sta[2] < sta[0])
		sa(env);
	else if (sta[0] < sta[1] && sta[1] > sta[2] && sta[2] > sta[0])
		rra(env);
	else if (sta[0] > sta[1] && sta[1] < sta[2] && sta[2] > sta[0])
		ra(env);
	else
	{
		sa(env);
		rra(env);
	}
}
