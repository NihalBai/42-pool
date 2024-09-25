/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:41:42 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/16 19:15:30 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_base2(int nbr, char *base_to);

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)
			|| base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

int	get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	convert_to_integer(char *str, char *base, int pos, int sign)
{
	int	base_val;
	int	result;
	int	base_len;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	result = 0;
	while (str[pos] != '\0')
	{
		base_val = get_base_index(str[pos], base);
		if (base_val == -1)
			break ;
		result = result * base_len + base_val;
		pos++;
	}
	return (result * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (!is_valid_base(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (convert_to_integer(str, base, i, sign));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (is_valid_base(base_from) && is_valid_base(base_to))
		return (ft_convert_base2(ft_atoi_base(nbr, base_from), base_to));
	return (NULL);
}
