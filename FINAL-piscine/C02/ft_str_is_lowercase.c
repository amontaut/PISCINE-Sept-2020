/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:07:42 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/13 15:14:51 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int other;
	int lowercase;

	lowercase = 0;
	other = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			lowercase = 1;
		else
			other = 1;
		i++;
	}
	if (other != 1 || (other != 1 && lowercase != 1))
		return (1);
	else
		return (0);
}
