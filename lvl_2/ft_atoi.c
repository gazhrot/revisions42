/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 15:05:26 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/30 19:47:20 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int i;
	int resultat;
	int power;
	int tab[11];

	i = 0;
	power = 0;
	while (str[i] != '\0')
	{
		tab[i] = (str[i] - 48);
		i++;
	}
	i--;
	while (i >= 0)
	{
		resultat = resultat + (tab[i] * power);
		power = power * 10;
		i--;
	}
	return (resultat);
}

int		main(void)
{
	const char *str;
	
	str = "1234";
	printf("%d", ft_atoi(str));
}
