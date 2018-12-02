/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ilyass.sh@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:59:53 by ishaimou          #+#    #+#             */
/*   Updated: 2018/12/02 16:21:00 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	print_chr(char c)
{
	write(1, &c, 1);
}

void	print_nbr(int n)
{
	if (n < 0)
	{
		print_chr(45);
		if (n == -2147483648)
		{
			print_nbr(214748364);
			print_chr('8');
			return ;
		}
		else
			n = -n;
	}
	if (n >= 10)
	{
		print_nbr(n / 10);
		print_nbr(n % 10);
	}
	else
		print_chr(n + 48);
}
