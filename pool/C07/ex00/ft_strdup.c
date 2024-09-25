/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:01:12 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/10 19:26:51 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;
	int		j;

	i = 0;
	while (src[i] != '\0')
		i++;
	c = (char *) malloc ((i + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	j = 0;
	while (src[j] != '\0')
	{
		c[j] = src[j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
