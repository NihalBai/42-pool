/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:12:12 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/10 19:36:54 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*c;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	i = max - min;
	c = (int *) malloc(i * sizeof(int));
	if (c == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		c[j] = min + j;
		j++;
	}
	return (c);
}
/*
#include <stdio.h>
int main()
{
	int i =-3;
	int *c = ft_range(-5,-5);
	while(i<=8)
	{
		printf("%d \n",c[i]);
		i++;
	}
	free(c);
}
*/