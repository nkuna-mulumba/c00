/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuna <nkuna@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-10 07:35:13 by nkuna             #+#    #+#             */
/*   Updated: 2025-07-10 07:35:13 by nkuna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	
	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

/*
	int	main(void)
	{
		ft_print_alphabet();
		write(1, "\n", 1);
		return(0);
	}
*/