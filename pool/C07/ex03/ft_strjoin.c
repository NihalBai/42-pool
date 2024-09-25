/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:29:52 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/16 19:27:44 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_ecrire(char *c, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			c[s++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				c[s++] = sep[j++];
			}
		}
		i++;
	}
	c[s] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		i;
	int		l;

	i = 0;
	l = 0;
	if (size == 0)
	{
		c = (char *)malloc(1);
		if (c)
			c[0] = '\0';
		return (c);
	}
	while (i < size)
	{
		l += ft_strlen(strs[i]);
		i++;
	}
	l += (size - 1) * ft_strlen(sep);
	c = (char *)malloc((l + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	ft_ecrire(c, strs, sep, size);
	return (c);
}
// #include <stdio.h>
// int main()
// {	
//     char *range[]={"nihal", "ssfsdf"};
//     char n[]=" and ";
// 	char *c = ft_strjoin(2,range,n);
// 	printf("%s\n", c);
// 	free(c);
// }
