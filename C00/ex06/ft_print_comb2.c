/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:44:56 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/24 21:47:29 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_big_numbers(int a)
{
	char	c;
	char	d;

	c = '0' + (a / 10);
	d = '0' + (a % 10);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 980)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_big_numbers(a);
			write(1, " ", 1);
			write_big_numbers(b);
			if ((a + b) != 197)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			b++;
		}
		a++;
	}
}
