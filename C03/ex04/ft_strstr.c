/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:25:51 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/31 12:21:41 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	if (ft_strlen(to_find) > 0)
	{
		while (str[i] != '\0')
		{
			l = 0;
			while (str[i + l] == to_find[l])
			{
				if (to_find[l + 1] == '\0')
					return (&str[i]);
				l++;
			}
			i++;
		}
		return (NULL);
	}
	else 
		return (&str[0]);
}

/*int main(void)
{
	char	str[] = "A Mariana ee linda";
	char	to_find1[] = "e l";
	char    to_find2[] = "";
	char    to_find3[] = "cenas";

	printf("%s, ", ft_strstr(str, to_find1));
	printf("%s, ", ft_strstr(str, to_find2));
	printf("%s", ft_strstr(str, to_find3));
	return (0);
}*/
