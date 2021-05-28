/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 01:22:42 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/13 23:20:37 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	static char		*hexa = "0123456789abcdef";

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			c = str[i];
			ft_putchar('\\');
			ft_putchar(hexa[c / 16]);
			ft_putchar(hexa[c % 16]);
		}
		i++;
	}
}
