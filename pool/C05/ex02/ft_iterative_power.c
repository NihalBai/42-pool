/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:06:21 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/05 16:17:07 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;

	c = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb > 0)
	{
		while (power - 1 > 0)
		{
			nb *= c;
			power--;
		}
	}
	return (nb);
}
/*#include <stdio.h>
int main(){
    printf("%d",ft_iterative_power(2,2));
}*/
