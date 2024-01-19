/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:36:05 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/27 17:48:40 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tab_aux;
	int	j;

	i = 0;
	while (i <= (size - 2))
	{
		j = i + 1;
		while (j <= (size - 1))
		{
			if (tab[i] > tab[j])
			{
				tab_aux = tab[j];
				tab[j] = tab[i];
				tab[i] = tab_aux;
			}
			j++;
		}
		i++;
	}
}

//int main(void)
//{
//	int tab[10] = {5,3,76,4,23,533,65,4,2355,-244};
//	int size = 10;
//	int i;
//
//	i = 0;
//	ft_sort_int_tab(tab, size);
//	while (i <= size -1)
//	{
//		printf("%d",tab[i]);
//		if (i != (size - 1))
//		{
//			printf("%s",", ");
//		}
//		i++;
//	}
//}
