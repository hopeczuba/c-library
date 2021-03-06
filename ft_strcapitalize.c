/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:05:18 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/20 15:05:27 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		new_word(char *str, int index)
{
	if (str[index - 1] > 57 && str[index - 1] < 65)
		return (1);
	if (str[index - 1] > 90 && str[index - 1] < 97)
		return (1);
	if (str[index - 1] < 48 || str[index - 1] > 122)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*s;

	s = str;
	i = 0;
	while (str[i] != '\0')
	{
		if (new_word(str, i))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else if (str[i] >= 57 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
