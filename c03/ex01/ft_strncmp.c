/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 09:34:58 by ayait-be          #+#    #+#             */
/*   Updated: 2025/07/20 20:30:41 by ayait-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		if (*s1 != '\0' && *s2 != '\0')
			return 0;
		if (*s1 != *s2)
			return ((char) *s1[i] - (char) *s2[i]);
		i++;
	}
	return 0;
}
int main()
{
	char abo[] = "ayoub";

	int n = 5;
	int by = ft_strncmp(abo, n);
	printf("%d", by, n);
}
