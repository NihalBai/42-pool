/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:29:02 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/01 18:49:31 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				l;

	i = 0;
	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	if (size > 0)
	{
		while ((i < size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (l);
}
/*int main(){
    char s[]="nihal";
    int i=0;
    char des[10];
    printf("%d",ft_strlcpy(des,s,2));
    while (des[i]!= '\0')
    {
         printf("%c",des[i]);
         i++;
    } 
}*/
