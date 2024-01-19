/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:11:16 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/31 12:13:22 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[l] != '\0') && (l < nb))
	{
		dest[i + l] = src[l];
		l++;
	}
	dest[i + l] = '\0';
	return (dest);
}

/*int main(void)
{
	char	dest1[20] = "a mariana ";
	char    dest2[20] = "a mariana ";
	char	src[] ="e lindaashirugfbwe";
	char	src2[] ="e lind";

	printf("%s, ", ft_strncat(dest1,src,7));
	printf("%s", ft_strncat(dest2,src2,7));
}*/
