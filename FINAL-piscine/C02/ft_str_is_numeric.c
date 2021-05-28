/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:58:24 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/13 15:11:37 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int num;
	int other;

	num = 0;
	other = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = 1;
		else
			other = 1;
		i++;
	}
	if (other != 1 || (other != 1 && num != 1))
		return (1);
	else
		return (0);
}
