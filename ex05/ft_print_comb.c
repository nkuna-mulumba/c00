/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:13:10 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/10 17:50:10 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
// Esta função escreve um único caractere no terminal
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
/*
    Esta função imprime todas combinações possíveis de 3 dígitos diferentes
    em ordem crescente, de '0' a '9', separados por vírgula e espaço
*/ 
void    ft_print_comb(void)
{
    char    a;
    char    b;
    char    c;

    a = '0';
    while (a <= '7')// 'a' vai até '7' para garantir espaço para b e c
    {
        b = a + 1; // 'b' começa sempre depois de 'a'
        while (b <= '8')// 'b' vai até '8' para garantir espaço para 'c'
        {
            c = b + 1;// 'c' começa sempre depois de 'b'
            while (c <= '9')// 'c' vai até '9'
            {
                ft_putchar(a);// imprime o 1º dígito
                ft_putchar(b); // imprime o 2º dígito
                ft_putchar(c); // imprime o 3º dígito
                
                // Se não for a última combinação (789), imprime ", "
                if (!(a == '7' && b == '8' && c == '9'))
                {
                    write(1, ", ", 2);
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

/* 
    int main(void)
    {
        ft_print_comb();
        write(1, "\n", 1);
        return(0);
    }
*/