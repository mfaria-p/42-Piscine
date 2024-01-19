/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:53:00 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/28 22:18:53 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// o first e o warning, aka n mete um null no fim de copiar os 10 caracteres
/*int main(void)
{
	char src[20] = "C programming";
	char dest[10];
	int size = 10;
	int i;
	
	i = 0;
	printf("%s", ft_strncpy(dest, src, size));
}*/
//aqui ele vai encher o resto da dest com nulls
/*int main(void)
{
        char src[20] = "C programming";
        char dest[30];
        int size = 30;
        int i;

        i = 0;
        while (i < 30)
        {
                write(1, &ft_strncpy(dest, src, size)[i], 1);
                i++;
        }
}*/
