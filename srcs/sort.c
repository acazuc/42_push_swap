/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:39:55 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/09 09:33:46 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		set_direction(t_env *env, t_sort *s)
{
	int		i;

	i = 0;
	while (i < env->stack_b_size)
	{
		if (env->stack_b[i] == env->sorted[s->k])
		{
			if (i < env->stack_b_size / 2)
				s->dir = 0;
			else
				s->dir = 1;
		}
		i++;
	}
}

static void		move(t_env *env, t_sort *s)
{
	if (s->dir)
		rb(env);
	else
		rrb(env);
}

static void		place(t_env *env, t_sort *s)
{
	pa(env);
	s->j++;
	s->k++;
	set_direction(env, s);
}

void			sort(t_env *env)
{
	t_sort	s;

	s.i = 0;
	s.k = 0;
	while (s.i < env->pre_sort)
	{
		set_direction(env, &s);
		s.from = env->sorted[(int)(env->sorted_size
				/ (double)env->pre_sort * s.i)];
		s.to = env->sorted[(int)(env->sorted_size
				/ (double)env->pre_sort * (s.i + 1)) - 1];
		s.j = 0;
		while (s.j < env->sorted_size / env->pre_sort)
		{
			if (env->stack_b[env->stack_b_size - 1] == env->sorted[s.k])
				place(env, &s);
			else
				move(env, &s);
		}
		s.i++;
	}
	pa(env);
}
