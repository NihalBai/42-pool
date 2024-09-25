/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:41:56 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/16 19:27:01 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	calculate_nbr_size(int nbr, int base_size)
{
	int	length;

	if (nbr == 0)
		return (1);
	length = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		length++;
	}
	while (nbr > 0)
	{
		nbr = nbr / base_size;
		length++;
	}
	return (length);
}

char	*int_to_base(int nbr, int size, char *base)
{
	char			*result;
	int				len;
	unsigned int	neg;

	len = calculate_nbr_size(nbr, size);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nbr == 0)
		result[0] = base[0];
	if (nbr < 0)
	{
		result[0] = '-';
		neg = -nbr;
	}
	else
		neg = nbr;
	while (neg > 0)
	{
		result[--len] = base[neg % size];
		neg = neg / size;
	}
	return (result);
}

char	*ft_convert_base2(int nbr, char *base_to)
{
	int	base_len;

	base_len = 0;
	while (base_to[base_len])
		base_len++;
	return (int_to_base(nbr, base_len, base_to));
}
