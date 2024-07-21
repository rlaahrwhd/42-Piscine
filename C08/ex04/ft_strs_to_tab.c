/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:28:11 by mokim             #+#    #+#             */
/*   Updated: 2024/07/19 15:17:19 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str);

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

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*avs;
	int			i;

	avs = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (avs == NULL)
		return (NULL);
	while (i < ac)
	{
		avs[i].size = ft_strlen(av[i]);
		avs[i].str = av[i];
		avs[i].copy = ft_strdup(av[i]);
		i++;
	}
	avs[i].str = 0;
	return (avs);
}
