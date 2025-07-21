/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 08:31:49 by ayait-be          #+#    #+#             */
/*   Updated: 2025/07/20 17:40:25 by ayait-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (char)(*s1) - (char)(*s2);
}
int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
	{
		len++;
	}
	return len;
}
int main()
{
	char test[] = "ayoub";
	char test1[] = "bey";
	char test2[] = "treop";

	int cmp_ai1 = ft_strcmp(test, test2);
	printf("%d\n", cmp_ai1);
}
