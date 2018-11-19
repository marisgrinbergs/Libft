/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrinbe <magrinbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:36:44 by magrinbe          #+#    #+#             */
/*   Updated: 2018/11/19 21:12:20 by magrinbe         ###   ########.fr       */
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
		if (str[i] == c && str[i + 1] != c)
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
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_strlenl(s, c) + 2))))
		return (NULL);
	tab[ft_strlenl(s, c) + 1] = 0;
	printf("%d\n", ft_strlenl(s, c) + 1);
	while (s[i] == c)
		i++;
	while (tab[o])
		tab[o++] = (char*)malloc(sizeof(char) * ft_strlen((char*)s));
	o = 0;
	while (tab[o++])
	{
		j = 0;
		while (s[i] && s[i] != c)
			tab[o][j++] = s[i++];
		while (s[i] && s[i] == c)
			i++;
		tab[o][j] = '\0';
	}
	return (tab);
}

int main()
{
	char s[100];
	char **z;

	strcpy(s, " hi  my name is tristan23 ");
	z = ft_strsplit(s, ' ');

	int i = 0;
	while (z[i])
		printf("|%s|\n", z[i++]);
	return (0);
}