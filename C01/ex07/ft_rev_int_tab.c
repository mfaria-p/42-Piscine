/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 22:47:37 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/27 15:33:52 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tab_aux;

	i = 0;
	while (i < (size / 2))
	{
		tab_aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tab_aux;
		i++;
	}
}
//int main(void)
//{
//	int tab[10] = {1,3,5,7,8,3,2,4,6,2};
//	int size;
//	char a;
//	int i;
//	size = 10;
//	ft_rev_int_tab(tab, size);
//	i = 0;
//	while (i  <= (size-1))
//	{
//		a = '0' + tab[i];
//		write(1, &a, 1);
//		i++;
//	}
//}
