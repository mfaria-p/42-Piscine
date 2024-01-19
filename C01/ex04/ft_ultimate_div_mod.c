/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:16:07 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/27 17:29:16 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_aux;
	int	b_aux;

	a_aux = *a;
	b_aux = *b;
	*a = a_aux / b_aux;
	*b = a_aux % b_aux;
}

//int main(void)
//{
//        int c;
//        int d;
//        int *a;
//        int *b;
//
//        c = 34;
//        d = 10;
//        a = &c;
//        b = &d;
//        ft_ultimate_div_mod(a,b);
//        c = '0' + *a;
//        d = '0' + *b;
//        write(1, &c, 1);
//        write(1, &d, 1);
//}
