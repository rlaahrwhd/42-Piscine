/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 02:39:36 by mokim             #+#    #+#             */
/*   Updated: 2024/07/18 02:43:21 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_word(char *str, int start, int end)
{
	int		len;
	int		i;
	char	*word;

	len = end - start;
	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

void	ft_empty(char **temp)
{
	int	i;
	int	j;

	i = 0;
	while (temp[i] != NULL)
	{
		if (temp[i][0] == '\0')
		{
			j = i;
			while (temp[j + 1] != NULL)
			{
				temp[j] = temp[j + 1];
				j++;
			}
			temp[j] = NULL;
		}
		else
			i++;
	}
}

int	ft_split2(char *str, char *charset, int index)
{
	int	charset_len;
	int	i;
	int	j;

	charset_len = ft_strlen(charset);
	i = index;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < charset_len)
		{
			if (str[i] == charset[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (-1);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		a;
	int		start;
	int		separator_index;

	result = (char **)malloc(sizeof(char *) * (ft_strlen(str) + 1));
	a = 0;
	start = 0;
	separator_index = ft_split2(str, charset, start);
	while (separator_index != -1)
	{
		if (separator_index > start)
			result[a++] = ft_word(str, start, separator_index);
		start = separator_index + 1;
	}
	if (start < ft_strlen(str))
		result[a++] = ft_word(str, start, ft_strlen(str));
	result[a] = NULL;
	ft_empty(result);
	return (result);
}
