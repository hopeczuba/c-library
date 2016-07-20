/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 00:07:44 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/16 00:36:20 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int fac;

	fac = nb;
	if (nb > 1)
	{
		nb--;
		fac = fac * ft_recursive_factorial(nb);
	}
	return (fac);
	return (0);
}
