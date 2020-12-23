/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 14:56:27 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/24 21:31:53 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	if (!(copy = malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*table;
	int			i;

	i = 0;
	if (!(table = malloc((ac + 1) * sizeof(*table))))
		return (NULL);
	while (i < ac)
	{
		table[i].size = ft_strlen(av[i]);
		table[i].str = av[i];
		table[i].copy = ft_strdup(av[i]);
		i++;
	}
	table[i].size = 0;
	table[i].str = 0;
	table[i].copy = 0;
	return (table);
}
