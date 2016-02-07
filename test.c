/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 17:17:04 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/07 17:25:17 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"

static void shuffle(int *array, size_t n)
{
	if (n > 1) 
	{
		size_t i;
		for (i = 0; i < n - 1; i++) 
		{
			size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
			int t = array[j];
			array[j] = array[i];
			array[i] = t;
		}
	}
}

int	main(void)
{
	int		*nb;
	int		i;

	nb = malloc(sizeof(*nb) * 2000);
	i = -1000;
	while (i < 1000)
	{
		nb[i + 1000] = i;
		i++;
	}
	shuffle(nb, 2000);
	i = 0;
	while (i < 2000)
	{
		ft_putnbr(nb[i]);
		if (i < 1999)
			ft_putchar(' ');
		i++;
	}
	return (0);
}
