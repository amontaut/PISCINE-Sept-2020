/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 17:07:54 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/25 11:59:37 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void					ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
}

void					ft_put_nbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		else if (nb > 9)
		{
			ft_put_nbr(nb / 10);
			ft_put_nbr(nb % 10);
		}
		else
		{
			nb = nb + '0';
			write(1, &nb, 1);
		}
	}
}

void					ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_put_nbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
