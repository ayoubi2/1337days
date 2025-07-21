/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:23:18 by ayait-be          #+#    #+#             */
/*   Updated: 2025/07/21 11:49:28 by ayait-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while(dest[i] && i < size)
		len++;

	while(src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if ( i < size)
		dest[i + j] = '\0';
	return i + ft_strlen(src);

}
int main()
{
	char src[] = "ayoub";
	char dest[1];
	int size = 1;

	int result = ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%s", src);
}
