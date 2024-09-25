/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:04:12 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/12 09:34:22 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	error_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\t' || base[i] == '\n' || base[i] == '\v'
			|| base[i] == '\f' || base[i] == '\r')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_get_value_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_skip_whitespace_signs(char *str, int *i, int *sign)
{
	while (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n'
		|| str[*i] == '\v' || str[*i] == '\f' || str[*i] == '\r')
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign *= -1;
		(*i)++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	r;
	int	i;
	int	sign;
	int	l;
	int	v;

	r = 0;
	i = 0;
	sign = 1;
	l = ft_strlen(base);
	if (!error_base(base))
		return (0);
	ft_skip_whitespace_signs(str, &i, &sign);
	while (str[i])
	{
		v = ft_get_value_in_base(str[i], base);
		if (v == -1)
			break ;
		r = r * l + v;
		i++;
	}
	return (r * sign);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "   ---1A";
	char	base[] = "0123456789ABCDEF";

	printf("Résultat : %d\n", ft_atoi_base(str, base));
	return (0);
}*/
