/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:06:48 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/27 17:22:12 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int main(void)
//{
//        int *div;
//        int *mod;
//        int a;
//        int b;
//        char c;
//        char d;
//
//        div = &a;
//        mod = &b;
//        ft_div_mod(11, 2, div, mod);
//        c='0'+*div;
//        d='0'+*mod;
//        write(1, &c,1);
//        write(1, &d,1);
//}
