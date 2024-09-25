/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:21:53 by mel-hafi          #+#    #+#             */
/*   Updated: 2024/09/01 17:29:25 by mel-hafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int n, int b);

int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 6;
	if (x > 0 && y > 0)
		rush (x, y);
	else
		write(2, "Error: Please enter valid positive integers.\n", 45);
}
