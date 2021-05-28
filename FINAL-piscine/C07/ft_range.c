/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 11:24:38 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/24 11:47:23 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *table;
	int i;

	if (min >= max)
		return (NULL);
	table = (int *)malloc((max - min) * (sizeof(int)));
	if (table == NULL)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		table[i] = min + i;
		i++;
	}
	table[i] = 0;
	return (table);
}
