/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:09:05 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/29 12:19:42 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int ldest;

	i = 0;
	ldest = ft_strlen(dest);
	while (src[i])
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + i] = 0;
	return (dest);
}

int		final_size(int size, char **strs, char *sep)
{
	int i;
	int fs;

	fs = 0;
	i = 0;
	while (i < size && strs[i])
	{
		fs = fs + ft_strlen(strs[i]);
		i++;
	}
	fs = fs + (size - 1) * ft_strlen(sep);
	return (fs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*answer;
	int		fs;

	if (size <= 0)
	{
		if (!(answer = malloc((sizeof(char) * 0))))
			return (NULL);
		return (answer);
	}
	fs = final_size(size, strs, sep);
	if (!(answer = malloc(sizeof(char) * (fs + 1))))
		return (NULL);
	i = 0;
	answer[0] = 0;
	while (i < size - 1 && strs[i])
	{
		answer = ft_strcat(answer, strs[i]);
		answer = ft_strcat(answer, sep);
		i++;
	}
	if (strs[size - 1])
		answer = ft_strcat(answer, strs[size - 1]);
	return (answer);
}
