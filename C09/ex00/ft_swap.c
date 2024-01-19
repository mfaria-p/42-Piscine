/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:47:03 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/27 17:17:54 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	nbr_aux;

	nbr_aux = *a;
	*a = *b;
	*b = nbr_aux;
}

//void write_big_numbers(int a)
//{
//        char c;
//        char d;
//
//        c = '0' + a / 10;
//        d = '0' + a % 10;
//        write(1, &c, 1);
//        write(1, &d, 1);
//}
//
//int main(void)
//{
//        int     *a;
//        int     *b;
//        int     c;
//        int     d;
//
//        c = 45;
//        d = 78;
//        a = &c;
//        b = &d;
//        ft_swap(a, b);
//        write_big_numbers(*a);
//        write_big_numbers(*b);
//}
