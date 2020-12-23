/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:03:15 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/20 10:49:43 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int i;
	int result;

	result = nb;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		i = 1;
		while (i < power)
		{
			result = nb * ft_recursive_power(nb, power - 1);
			i++;
		}
		return (result);
	}
}
