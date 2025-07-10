/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuna <nkuna@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-10 07:25:17 by nkuna             #+#    #+#             */
/*   Updated: 2025-07-10 07:25:17 by nkuna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (s[i])
	{
		c = s[i];
		write(1, &c, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_putchar("Hello, world");
	write(1, "\n", 1);
	return(0);
}
*/
