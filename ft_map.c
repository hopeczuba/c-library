/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 11:28:22 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/25 11:28:27 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *mapped;

	mapped = (int *)malloc(sizeof(*mapped) * length);
	i = 0;
	while (i < length)
	{
		mapped[i] = f(tab[i]);
		i++;
	}
	return (mapped);
}
