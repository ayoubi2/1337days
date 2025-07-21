/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 21:51:12 by ayait-be          #+#    #+#             */
/*   Updated: 2025/07/21 10:22:46 by ayait-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
	       return str;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return 0;
}
int main()
{
	char test1[] = "ayoub 42 school is good";
	char test[] = "g";

	char *ab = ft_strstr(test1, test);
	printf("%s", ab);
}
