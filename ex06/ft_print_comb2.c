/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:13:00 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/10 17:49:25 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
    Esta função imprime dois dígitos (de 00 a 99)
    mesmo que o número seja menor que 10 (ex: 07)
*/
void    ft_putnbr2digits(int nbr)
{
    char    d;
    char    u;

    d = (nbr / 10) + '0'; // dígito das dezenas
    u = (nbr % 10) + '0'; // dígito das unidades
    write(1, &d, 1);    // imprime o primeiro dígito
    write(1, &u, 1);    // imprime o segundo dígito
}

/*
    Função imprime todas combinações possíveis de dois números
    diferentes entre 00 e 99, em ordem crescente, separados
    por espaço e vírgula
*/
void    ft_print_comb2(void)
{
    int i;
    int j;

    i = 0;
    while (i <= 98)// Primeiro número vai de 00 até 98
    {
        j = i + 1; // Segundo número começa sempre depois do primeiro
        while (j <= 99) // Segundo número vai até 99
        {
            ft_putnbr2digits(i);// Imprime 1º número com 2 dígitos
            write(1, " ", 1);
            ft_putnbr2digits(j);// Imprime 2º número com 2 dígitos
            if (!(i == 98 && j == 99))
            {
                write(1, ", ", 2);
            }
            j++;
        }
        i++;
    }    
}
/*
    int main(void)
    {
        ft_print_comb2();
        write(1, "\n", 1);
        return(0);
    }
*/