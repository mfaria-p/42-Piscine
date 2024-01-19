/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:18:08 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/28 19:31:57 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char	str1[] = "AgAhBjjkKKJ";
	char	str2[] = "123245trY78!#@";
	char	str3[] = "";

	printf("%s", ft_strlowcase(str1));
	printf("%s", ft_strlowcase(str2));
	printf("%s", ft_strlowcase(str3));
}*/
