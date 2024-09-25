/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:31:38 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/10 19:45:32 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*r;
	int	i;
	int	j;

	j = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	r = (int *) malloc(i * sizeof(int));
	if (r == NULL)
		return (0);
	while (j < i)
	{
		r[j] = min + j;
		j++;
	}
	*range = r;
	return (i);
}
/*
#include <stdio.h>
int main()
{
	int i =0;
    int *range;
	int c = ft_ultimate_range(&range,-3,8);
    printf("%d \n",c);
	while(i<c)
	{
		printf("%d \n",range[i]);
		i++;
	}
	free(range);
}
*/
