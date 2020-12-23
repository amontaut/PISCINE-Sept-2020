/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 13:02:47 by amontaut          #+#    #+#             */
/*   Updated: 2020/09/26 13:04:30 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_convert(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		checkbase(char *base)
{
	int i;
	int j;
	int error_base;

	i = 0;
	j = 1;
	error_base = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45 ||\
				base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			error_base = 1;
		j = 1 + i;
		while (base[j])
		{
			if (base[i] == base[j])
				error_base = 1;
			j++;
		}
		i++;
	}
	i = 0;
	return (error_base);
}

int		ft_is_neg(char *str)
{
	int negative;
	int i;

	negative = 1;
	i = 0;
	while (str[i] == 43 || str[i] == 45 || str[i] == 32\
			|| (str[i] >= 9 && str[i] <= 13))
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		else if (str[i] == 43)
			i++;
		else if (str[i] == 45)
		{
			negative = negative * -1;
			i++;
		}
		else
			return (negative);
		i++;
	}
	return (negative);
}

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

int		ft_atoi_base(char *str, char *base)
{
	int		dep;
	int		arrive;
	int		str_in_ten;

	if (checkbase(base) != 1)
	{
		str_in_ten = 0;
		dep = 0;
		while (str[dep] == 32 || (str[dep] >= 9 && str[dep] <= 13))
			dep++;
		while (str[dep] == 43 || str[dep] == 45)
			dep++;
		arrive = dep;
		while (str[arrive] && ft_convert(str[arrive], base) != -1)
			arrive++;
		while (dep < arrive)
		{
			str_in_ten = str_in_ten * ft_strlen(base) + \
ft_convert(str[dep], base);
			dep++;
		}
		return (str_in_ten * ft_is_neg(str));
	}
	else
		return (0);
}
