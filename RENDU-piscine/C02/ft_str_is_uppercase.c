/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:29:09 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/13 15:16:58 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int uppercase;
	int other;

	uppercase = 0;
	other = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			uppercase = 1;
		else
			other = 1;
		i++;
	}
	if (other != 1 || (other != 1 && uppercase != 1))
		return (1);
	else
		return (0);
}
