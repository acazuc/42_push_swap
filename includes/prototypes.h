/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 14:29:29 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 17:07:15 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "env.h"

void	parse_args(t_env *env, int ac, char **av);
void	error_quit(char *str);
void	calc_sorted(t_env *env);
void	pre_sort(t_env *env);
void	sort(t_env *env);
void	print_a(t_env *env);
void	print_b(t_env *env);
void	sa(t_env *env);
void	sb(t_env *env);
void	ss(t_env *env);
void	pa(t_env *env);
void	pb(t_env *env);
void	ra(t_env *env);
void	rb(t_env *env);
void	rr(t_env *env);
void	rra(t_env *env);
void	rrb(t_env *env);
void	rrr(t_env *env);

#endif
