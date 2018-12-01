/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_test5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:58:37 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 21:04:15 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

char	*test_strchr(const char *s, int c)
{
	size_t		x;
	char		f;

	x = 0;
	f = (char)c;
	while (s[x])
	{
		if (s[x] == f)
			return ((char*)s + x);
		x++;
	}
	if (s[x] == f)
		return ((char*)s + x);
	return (NULL);
}

char	*test_strcpy(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*test_strcat(char *s1, const char *s2)
{
	size_t x;
	size_t y;

	x = ft_strlen(s1);
	y = 0;
	while (s2[y] != '\0')
		s1[x++] = s2[y++];
	s1[x] = '\0';
	return (s1);
}
