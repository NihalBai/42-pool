/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:44:33 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/09/01 17:19:50 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top_or_bottom(int n)
{
	int	i;

	i = 0;
	if (n > 0)
	{
		ft_putchar('A');
		while (i < n - 2)
		{
			ft_putchar('B');
			i++;
		}
		if (n > 1)
		{
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	middle(int n, int b)
{
	int	j;
	int	i;

	j = 0;
	if (n > 0 && b > 0)
	{
		while (j < b - 2)
		{
			ft_putchar('B');
			i = 0;
			while (i < n - 2)
			{
				ft_putchar(' ');
				i++;
			}
			if (n > 1)
			{
				ft_putchar('B');
			}
			ft_putchar('\n');
			j++;
		}
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		top_or_bottom(x);
		middle(x, y);
		if (y > 1)
		{
			top_or_bottom(x);
		}
	}
}
