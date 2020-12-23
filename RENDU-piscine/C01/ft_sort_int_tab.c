/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:45:14 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/10 23:40:22 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int j;
	int i;
	int higher;

	j = 0;
	i = 0;
	higher = 1;
	while (higher == 1)
	{
		i = 0;
		higher = 0;
		j++;
		while (i < size - j)
		{
			if (tab[i] > tab[i + 1])
			{
				higher = 1;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
	}
}
