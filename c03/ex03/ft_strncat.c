/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 21:21:50 by ayait-be          #+#    #+#             */
/*   Updated: 2025/07/20 21:35:35 by ayait-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *ptr = dest;

	while(*ptr)
		ptr++;
	while(*src && nb--)

		*ptr++ = *src++;

	*ptr = '\0';
	return dest;
}
