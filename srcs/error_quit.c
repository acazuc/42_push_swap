/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_quit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:32:12 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 15:08:57 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_quit(char *error_message)
{
	ft_putstr_fd("\e[91mAn error happened: ", 2);
	ft_putendl_fd(error_message, 2);
	ft_putstr_fd("\e[0m", 2);
	exit(-1);
}
