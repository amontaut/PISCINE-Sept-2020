/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 13:01:33 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/15 13:36:17 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && j < n)
	{
		i++;
		j++;
	}
	if (j < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
