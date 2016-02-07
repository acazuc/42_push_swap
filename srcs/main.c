/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 14:02:22 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 16:24:28 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_env	*env;

	if (!(env = malloc(sizeof(*env))))
		return (-1);
	parse_args(env, ac, av);
	calc_sorted(env);
	pre_sort(env);
	return (0);
}
