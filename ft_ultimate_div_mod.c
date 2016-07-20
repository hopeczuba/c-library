/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 15:31:21 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/15 15:31:41 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int quotient;
	int remainder;

	quotient = (*a / *b);
	remainder = (*a % *b);
	*a = quotient;
	*b = remainder;
}
