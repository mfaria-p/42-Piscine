/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:37:01 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/06 23:34:53 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;
	int	len_sep;

	len = 0;
	i = 0;
	len_sep = 0;
	while (sep[len_sep] != '\0')
		len_sep++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			j++;
		len = len + j;
		i++;
	}
	len = len + (size - 1) * len_sep;
	return (len);
}

char	*ft_strj(char *strj, int size, char **strs, char *sep)
{
	int		j;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			strj[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && (i != size - 1))
			strj[k++] = sep[j++];
		i++;
	}
	strj[k] = '\0';
	return (strj);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*strj;

	if (size == 0)
		return (malloc(1));
	len = ft_len(size, strs, sep);
	strj = (char *) malloc (sizeof (char) * len + 1);
	strj = ft_strj(strj, size, strs, sep);
	return (strj);
}

/*int main(void)
{
	char	*strj;
	char	**strs;
	
	strs[0] = "A";
	strs[1] = "Mariana";
	strs[2] = "E";
	strs[3] = "linda!";
	strj =	ft_strjoin(0, strs, " . ");
	printf("%s", strj);
	free(strj);
}*/
