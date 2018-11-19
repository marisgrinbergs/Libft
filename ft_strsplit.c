/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrinbe <magrinbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:36:44 by magrinbe          #+#    #+#             */
/*   Updated: 2018/11/19 21:51:10 by magrinbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlenl(const char *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i - 1] == c || i == 0) && str[i] != c)
			j++;
		i++;
	}
	return (j);
}
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		o;

	i = 0;
	o = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_strlenl(s, c) + 1))))
		return (NULL);
	while (s[i] == c)
		i++;
	while (o < ft_strlenl(s, c))
	{
		j = 0;
		tab[o] = (char*)malloc(sizeof(char) * ft_strlen((char*)s));
		while (s[i] && s[i] != c)
			tab[o][j++] = s[i++];
		while (s[i] && s[i] == c)
			i++;
		tab[o][j] = '\0';
		o++;
	}
	tab[o] = 0;
	return (tab);
}

int main()
{
	char s[100000];
	char **z;

	strcpy(s, " hi there");
	z = ft_strsplit(s, ' ');	

	int i = 0;
	while (z[i])
		printf("|%s|\n", z[i++]);
	return (0);
}