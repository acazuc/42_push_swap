/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:39:55 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/08 11:29:01 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		move(t_env *env, int dir)
{
	if (dir)
		rb(env);
	else
		rrb(env);
}

static void		offset(t_env *env, t_sort *s)
{
	move(env, s->dir);
	if (env->stack_b[env->stack_b_size - 1] < s->from
			|| env->stack_b[env->stack_b_size - 1] > s->to)
	{
		s->dir = !s->dir;
		move(env, s->dir);
	}
}

static void		place(t_env *env, t_sort *s)
{
	pa(env);
	s->j++;
	s->k++;
}

void			sort(t_env *env)
{
	t_sort	s;

	s.i = 0;
	s.k = 0;
	while (s.i < env->pre_sort)
	{
		s.dir = 0;
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
				offset(env, &s);
		}
		s.i++;
	}
	pa(env);
}
