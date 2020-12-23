/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 23:02:51 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/11 14:47:56 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int copy[size];
	int i;
	int d;
	int j;

	i = 0;
	d = size;
	while (d > 0)
	{
		copy[i] = tab[d - 1];
		i++;
		d--;
	}
	j = 0;
	while (j < size)
	{
		tab[j] = copy[j];
		j++;
	}
}
