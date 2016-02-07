/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 14:02:22 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 19:26:38 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_env	*env;

	if (!(env = malloc(sizeof(*env))))
		return (-1);
	env->count = 0;
	parse_args(env, ac, av);
	calc_sorted(env);
	pre_sort(env);
	/*int i = 0;
	while (i < 10)
	{
		int start = env->sorted_size / 10. * i;
		int end = env->sorted_size / 10. * (i + 1);
		int j = start;
		while (j < end)
		{
			if (env->stack_b[j] < start - 1000 || env->stack_b[j] > end - 1000)
			{
				ft_putstr("stack_b[");
				ft_putnbr(j);
				ft_putstr("] = ");
				ft_putnbr(env->stack_b[j]);
				ft_putstr(" < ");
				ft_putnbr(start);
				ft_putstr(" || > ");
				ft_putnbr(end);
				ft_putchar('\n');
			}
			j++;
		}
		i++;
	}*/
	sort(env);
	ft_putchar('\n');
	ft_putendl("A:");
	print_a(env);
	ft_putendl("B:");
	print_b(env);
	ft_putstr("Count number: ");
	ft_putnbr(env->count);
	return (0);
}
