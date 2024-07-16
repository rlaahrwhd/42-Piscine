/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:09:01 by mokim             #+#    #+#             */
/*   Updated: 2024/07/06 17:03:39 by mokim            ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	int	c;
	int	b;
	int	a;

	c = 0;
	b = 0;
	a = ft_strlen(str);
	while (c < a)
	{
		if (str[c] >= 97 && str[c] <= 122)
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}
