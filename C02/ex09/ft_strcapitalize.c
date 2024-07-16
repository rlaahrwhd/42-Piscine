/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:21:13 by mokim             #+#    #+#             */
/*   Updated: 2024/07/09 02:11:25 by mokim            ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	int	c;
	int	b;
	int	a;

	c = 0;
	b = 0;
	a = ft_strlen(str);
	while (c < a)
	{
		if (str[c] >= 65 && str[c] <= 90)
			str[c] = str[c] + 32;
		c++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	b;

	c = 0;
	b = 0;
	ft_strlowcase(str);
	while (c < ft_strlen(str))
	{
		if ((str[c - 1] <= 47) && ((str[c] >= 'a') && (str[c] <= 'z')))
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}
