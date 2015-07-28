/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abruneau <abruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 15:04:59 by abruneau          #+#    #+#             */
/*   Updated: 2015/07/28 15:06:53 by abruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_maff_alpha(void)
{
	write (1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}

int		main(void)
{
	ft_maff_alpha();
	return (0);
}
