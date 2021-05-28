/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 23:33:19 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/15 13:38:53 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int ldest;
	unsigned int lsrc;
	unsigned int i;

	ldest = 0;
	lsrc = 0;
	while (dest[ldest])
		ldest++;
	while (src[lsrc])
		lsrc++;
	i = 0;
	while (src[i])
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + lsrc] = '\0';
	return (dest);
}
