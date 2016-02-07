/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:31:14 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 16:33:50 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_a(t_env *env)
{
	int		i;

	i = 0;
	while (i < env->stack_a_size)
	{
		ft_putnbr(env->stack_a[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}
