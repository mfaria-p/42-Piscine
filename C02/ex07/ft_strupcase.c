/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:49:15 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/28 19:34:11 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char	str1[] = "amarianaelinda";;
	char	str2[] = "CeNaS098";
	char	str3[] = "";
	char	str4[] = " 9";
	
	printf("%s",ft_strupcase(str1));
	printf("%s",ft_strupcase(str2));
	printf("%s",ft_strupcase(str3));
	printf("%s",ft_strupcase(str4));
}*/
