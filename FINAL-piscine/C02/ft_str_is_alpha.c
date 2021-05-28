/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:21:00 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/13 15:09:48 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int other;
	int alpha;

	alpha = 0;
	other = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||\
				(str[i] >= 'A' && str[i] <= 'Z'))
			alpha = 1;
		else
			other = 1;
		i++;
	}
	if (other != 1 || (other != 1 && alpha != 1))
		return (1);
	else
		return (0);
}
