/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:37:57 by ayait-be          #+#    #+#             */
/*   Updated: 2025/07/19 22:22:17 by ayait-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print(char c)
{
	return ((c >= 'a' && c <= 'z') || (
			c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_wor;

	i = 0;
	new_wor = 1;
	while (str[i] != '\0')
	{
		if (ft_print(str[i]))
		{
			if (new_wor)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				new_wor = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		else
			new_wor = 1;
		i++;
	}
	return (str);
}
