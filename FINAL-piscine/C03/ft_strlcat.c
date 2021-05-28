/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:52:42 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/15 17:06:09 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int size_dest;
	unsigned int size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	if (size <= size_dest)
		return (size_src + size);
	while (src[i] && i + size_dest < size - 1)
	{
		dest[i + size_dest] = src[i];
		i++;
	}
	dest[i + size_dest] = '\0';
	return (size_dest + size_src);
}
