/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:49:49 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/28 15:22:04 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char	str1[] = "qwertyuiopasdfghjklzxcvbnm";
	char 	*str2;
	char 	*str3;
	char 	*str4;
	char 	a;
	char	b;
	char	c;
	char	d;
	
	str2 = "qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	str3 = "1235";
	str4 = "";
	a = '0' + ft_str_is_alpha(str1);
	b = '0' + ft_str_is_alpha(str2);
	c = '0' + ft_str_is_alpha(str3);
	d = '0' + ft_str_is_alpha(str4);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	
}*/
