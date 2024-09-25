/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:33:16 by nbaidaou          #+#    #+#             */
/*   Updated: 2024/09/11 15:01:47 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_s(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && find_s(str[i], charset))
			i++;
		if (str[i])
			words++;
		while (str[i] && !find_s(str[i], charset))
			i++;
	}
	return (words);
}

int	word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !find_s(str[len], charset))
		len++;
	return (len);
}

char	*extract_word(char *str, char *charset)
{
	char	*word;
	int		i;
	int		len;

	len = word_len(str, charset);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;

	result = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && find_s(*str, charset))
			str++;
		if (*str)
		{
			result[i] = extract_word(str, charset);
			i++;
		}
		while (*str && !find_s(*str, charset))
			str++;
	}
	result[i] = 0;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = " niha , nani,sad , no ,reason";
	char	charset[] = ", ";
	char	**split;
	int		i;

	split = ft_split(str, charset);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}
*/