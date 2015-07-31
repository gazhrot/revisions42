/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 19:30:51 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/29 19:58:18 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i] + 1;
		i--;
	}
	return (0);
}

int		main()
{
	char *test;

	test = "heyoo";
	printf("%s", ft_strrev("Hello"));
	return (0);
}
