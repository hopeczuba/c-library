/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hczuba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 19:22:58 by hczuba            #+#    #+#             */
/*   Updated: 2016/07/23 19:23:09 by hczuba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define W_SPACE (str[i] == 9 || str[i] == 10 || str[i] == 32)
#define W_SPACE_IJ (str[i + j] == 9 || str[i + j] == 10 || str[i + j] == 32)

int		ult_strlen(char *str, int word)
{
	int i;
	int w;
	int j;

	i = 0;
	w = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (w == word && !W_SPACE)
		{
			j = 0;
			while (!W_SPACE_IJ)
				j++;
//			printf("%d\n", j);
			return (j);
		}
		if (!W_SPACE)
		{
			w++;
			while (!W_SPACE)
				i++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		word_count(char *str)
{
	int i;
	int w;

	i = 0;
	w = 0;
	while (str[i] != '\0' && W_SPACE)
		i++;
	while (str[i] != '\0')
	{
		if (!W_SPACE)
		{
			while (!W_SPACE)
				i++;
			w++;
		}
		else
			i++;
	}
	return (w);
}

char	**populate_array(char *str, char **arr)
{
	int i;
	int j;
	int w;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		if (!W_SPACE)
		{
			j = 0;
			while (!W_SPACE_IJ)
			{
				arr[w][j] = str[i + j];
				j++;
			}
			arr[w][j] = '\0';
			w++;
			i += j;
		}
		i++;
	}
	arr[w] = 0;
	return (arr);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		w;
	int		i;

	w = word_count(str);
	i = 0;
	words = (char **)(malloc(sizeof(char*) * (w + 1)));
	while (i < w)
	{
		words[i] = (char *)(malloc(sizeof(char) * (ult_strlen(str, i) + 1)));
		i++;
	}
	populate_array(str, words);
	return (words);
}
