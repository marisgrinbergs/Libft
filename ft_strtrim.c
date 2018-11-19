/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrinbe <magrinbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 20:26:48 by magrinbe          #+#    #+#             */
/*   Updated: 2018/11/19 16:14:47 by magrinbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isblanc(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	len = ft_strlen((char *)s);
	while (s[i] && ft_isblanc(s[i]) == 1)
		i++;
	len--;
	while (len > i && ft_isblanc(s[len]) == 1)
		len--;
	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s + 1)));
	if (str == NULL)
		return (NULL);
	while (i <= len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	const char *s;
	char *str;
	//strcpy((char *)s, " ");
	strcpy((char *)s, "  ");
	printf("|%s|\n", s);
	str = ft_strtrim(s);
	printf("|%s|\n", str);
	
	return (0);
}