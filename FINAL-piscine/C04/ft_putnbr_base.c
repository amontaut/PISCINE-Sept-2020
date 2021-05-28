/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 13:59:54 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/17 23:23:07 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		checkbase(char *base)
{
	int i;
	int j;
	int error_base;

	i = 0;
	j = 1;
	error_base = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			error_base = 1;
		j = 1 + i;
		while (base[j])
		{
			if (base[i] == base[j])
				error_base = 1;
			j++;
		}
		i++;
	}
	return (error_base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		l;
	long	tmp;

	if (ft_strlen(base) > 1)
	{
		tmp = nbr;
		l = ft_strlen(base);
		if (checkbase(base) != 1)
		{
			if (tmp < 0)
			{
				write(1, "-", 1);
				tmp = tmp * -1;
			}
			if (tmp > l - 1)
			{
				ft_putnbr_base(tmp / l, base);
				ft_putnbr_base(tmp % l, base);
			}
			else
				ft_putchar(base[tmp % l]);
		}
	}
	else
		return ;
}
