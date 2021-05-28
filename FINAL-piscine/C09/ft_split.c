/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 21:58:09 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/30 11:47:48 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		a_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*copy_word(char *str, char *charset, int i)
{
	char	*another_word;
	int		word_size;

	word_size = 0;
	while (str[i] && (a_charset(str[i], charset) == 0))
	{
		word_size++;
		i++;
	}
	if (!(another_word = malloc((word_size + 1) * sizeof(char *))))
		return (NULL);
	i = i - word_size;
	word_size = 0;
	while (str[i] && (a_charset(str[i], charset) == 0))
	{
		another_word[word_size] = str[i];
		word_size++;
		i++;
	}
	another_word[word_size] = 0;
	return (another_word);
}

int		how_many_words(char *str, char *charset)
{
	int i;
	int a_word;

	i = 0;
	a_word = 0;
	while (str[i])
	{
		while (str[i] && (a_charset(str[i], charset) == 1))
			i++;
		if (str[i] && (a_charset(str[i], charset) == 0))
			a_word++;
		while (str[i] && (a_charset(str[i], charset) == 0))
			i++;
	}
	return (a_word);
}

char	**ft_split(char *str, char *charset)
{
	int		table_size;
	char	**finale_table;
	int		i;
	int		j;

	table_size = how_many_words(str, charset);
	if (!(finale_table = malloc((table_size + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] && (a_charset(str[i], charset) == 1))
			i++;
		if (str[i] && (a_charset(str[i], charset) == 0))
		{
			finale_table[j] = copy_word(str, charset, i);
			j++;
		}
		while (str[i] && (a_charset(str[i], charset) == 0))
			i++;
	}
	finale_table[j] = 0;
	return (finale_table);
}
