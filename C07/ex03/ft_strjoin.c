/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 23:38:28 by mokim             #+#    #+#             */
/*   Updated: 2024/07/17 23:41:47 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

int	ft_strslen(char *strs[], int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		i++;
	}
	return (j);
}

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	i;

	count = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		a;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (ft_strslen(strs, size) * size)
			+ (ft_strlen(sep) * size - 1));
	str[0] = '\0';
	i = 0;
	a = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (a < size - 1)
			ft_strcat(str, sep);
		i++;
		a++;
	}
	return (str);
}
