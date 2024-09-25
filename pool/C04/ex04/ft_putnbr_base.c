/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:19:20 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/04 11:03:24 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	error_base(const char *base, int size)
{
	int	i;
	int	j;

	if (size <= 1)
		return (0);
	i = 0;
	while (i < size)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb, const char *base, int size)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(-(nb / size), base, size);
		ft_putnbr(-(nb % size), base, size);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb, base, size);
	}
	else if (nb >= size)
	{
		ft_putnbr(nb / size, base, size);
		ft_putnbr(nb % size, base, size);
	}
	else
	{
		ft_putchar(base[nb]);
	}
}

void	ft_putnbr_base(int nbr, const char *base)
{
	int	size;

	size = ft_strlen(base);
	if (error_base(base, size) == 1)
		ft_putnbr(nbr, base, size);
	else
		return ;
}
/*int main(){
	ft_putnbr_base(4,"0123456789");
}*/