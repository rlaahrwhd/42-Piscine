/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:03:56 by mokim             #+#    #+#             */
/*   Updated: 2024/07/17 22:06:24 by mokim            ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*str;
	int		count;

	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	count = 0;
	while (src[count] != '\0')
	{
		str[count] = src[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
