/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:33:46 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/08 00:06:47 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char	**arv)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = ac - 1;
		while (i > 0)
		{
			j = 0;
			while (arv[i][j] != '\0')
			{
				write(1, &arv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
}
