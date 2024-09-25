/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:54:10 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/15 06:04:45 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

char	*ft_strdup(char *str)
{
	char	*d;
	int		l;
	int		i;

	l = ft_strlen(str);
	d = (char *)malloc((l + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		d[i] = str[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t;
	int			i;

	t = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (t == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		t[i].str = av[i];
		t[i].size = ft_strlen(av[i]);
		t[i].copy = ft_strdup(av[i]);
		if (t[i].copy == NULL)
			return (NULL);
		i++;
	}
	t[i].str = 0;
	return (t);
}
