/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 09:53:24 by ayait-be          #+#    #+#             */
/*   Updated: 2025/07/20 21:21:18 by ayait-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while(*ptr)
		ptr++;
	while(*src)

		*ptr++ = *src++;

	*ptr = '\0';
	return dest;
}
int main()
{
	char string[] = "hello world";
	char dest;

	char *ab = ft_strcat(&dest, string);

	printf("%s", ab);
}
