/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:35:53 by wasahmed          #+#    #+#             */
/*   Updated: 2019/08/05 13:53:04 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2, char const *s3)
{
	int		i;
	int		k;
	int		x;
	char	*str;

	x =0;
	i = 0;
	k = 0;
	if (s1 == NULL)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		str[i + k] = s2[k];
		k++;
	}
	while (s3[x] != '\0')
	{
		str[i + k + x] = s3[x];
		x++;
	}
	str[i + k + x] = '\0';
	return (str);
}
