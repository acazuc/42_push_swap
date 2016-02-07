/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 14:27:16 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 15:30:28 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

typedef struct	s_env
{
	int			*stack_a;
	int			stack_a_size;
	int			*stack_b;
	int			stack_b_size;
	int			*sorted;
	int			sorted_size;
}				t_env;

#endif
