/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 10:51:59 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/29 11:13:50 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char *temp = s2;
	printf("avant la boucle while\n");
	while (!s1)
	{
		s2 = s1;
		s1++;
		s2++;
		//printf("est-ce que sa s'affiche ?");
	}
	return (temp);
}

int		main()
{
	char s1[11] = "yoyoyohaha";
	char s2[7] = "lalala";

	printf("%s\n", strcpy(s1, s2));
	printf("%s\n", ft_strcpy(s1, s2));
	return (0);
}
