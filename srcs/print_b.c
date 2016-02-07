/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 16:32:24 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 16:34:20 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_b(t_env *env)
{
	int		i;

	i = 0;
	while (i < env->stack_b_size)
	{
		ft_putnbr(env->stack_b[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}
