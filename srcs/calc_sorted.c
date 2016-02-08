/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 15:23:33 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/08 11:08:40 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		dup_tab(t_env *env)
{
	int		i;

	if (!(env->sorted = malloc(sizeof(*env->sorted) * env->stack_a_size)))
		error_quit("Failed to malloc sorted tab");
	i = 0;
	while (i < env->stack_a_size)
	{
		env->sorted[i] = env->stack_a[i];
		i++;
	}
	env->sorted_size = env->stack_a_size;
}

static void		swap(int *tab, int i, int j)
{
	int		tmp;

	tmp = tab[i];
	tab[i] = tab[j];
	tab[j] = tmp;
}

static void		quick_sort(int *tab, int start, int end)
{
	int		pivot;
	int		right;
	int		left;
	int		running;

	if (end <= start)
		return ;
	pivot = tab[start];
	right = end;
	left = start;
	running = 1;
	while (running)
	{
		while (tab[right] > pivot)
			right--;
		while (tab[left] < pivot)
			left++;
		if (left < right)
			swap(tab, left, right);
		else
			running = 0;
	}
	quick_sort(tab, start, right - 1);
	quick_sort(tab, right + 1, end);
}

void			calc_sorted(t_env *env)
{
	dup_tab(env);
	quick_sort(env->sorted, 0, env->sorted_size - 1);
}
