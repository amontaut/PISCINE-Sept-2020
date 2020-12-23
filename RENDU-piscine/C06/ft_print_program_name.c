/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:50:54 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/20 17:04:08 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;
	int		for_gcc;

	name = argv[0];
	for_gcc = argc;
	while (*name != 0)
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
	return (0);
}
