/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:47:01 by mokim             #+#    #+#             */
/*   Updated: 2024/07/11 17:26:43 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i + count < size - 1)
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	if (size <= count)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + count);
}
