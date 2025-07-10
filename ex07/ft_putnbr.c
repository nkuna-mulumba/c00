/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:24:29 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/10 17:54:47 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void    ft_putnbr(int nb)
{
    char    c;

    if (nb == INT_MIN)// Caso especial do INT_MIN
    {
        write(1, "-2147483648", 11);
        return;
    }
    
    if (nb < 0)// Números negativos
    {
        write(1, "-", 1);
        nb = -nb;//Absolute valor
    }
    
    if (nb >= 10)// Chamada recursiva para dígitos anteriores
    {
        ft_putnbr(nb / 10);
    }
    c = (nb % 10) + '0';// Converte o último dígito para caractere
    write(1, &c, 1);    
}

/*
    int main(void)
    {
        ft_putnbr(42);
        write(1, "\n", 1);
        return(0);
    }
*/