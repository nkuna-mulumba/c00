/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucongol <jucongol@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-10 18:00:37 by jucongol          #+#    #+#             */
/*   Updated: 2025-07-10 18:00:37 by jucongol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Função auxiliar que imprime um único caractere
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
    Função que imprime uma combinação de n dígitos
    Se não for a última combinação, imprime também ", "
*/
void    ft_print_comb(char *comb, int n, int is_last)
{
    write(1, comb, n);// Imprime os n caracteres da combinação
    if(!is_last)// Se não for a última combinação
    {
        write(1,", ", 2);// Imprime vírgula e espaço
    }
}

/*
    Função recursiva que gera todas as combinações possíveis
    comb: array onde guardamos a combinação atual
    n: número total de dígitos desejados
    index: posição atual que estamos a preencher no array
    start: dígito mínimo permitido nesta posição (para garantir ordem crescente)
*/
void    ft_generate(char *comb, int n, int index, char start)
{
    char    c;
    int     is_last;

    // Caso base: já temos n dígitos preenchidos → imprimimos a combinação
    if(index == n)
    {
        /*
            Verifica se esta é a última combinação possível
            Ex: para n = 2, última combinação começa com '8' → "89"
        */
        is_last = (comb[0] == '9' - n + 1);
        ft_print_comb(comb, n, is_last);// Imprime a combinação
        return;
    }
    //Loop para gerar os próximos dígitos, garantindo ordem crescente
    c = start;
    while(c <= '9')
    {
        comb[index] = c;// coloca o dígito atual na posição index
         // Chamada recursiva para preencher o próximo dígito
        ft_generate(comb, n, index + 1, c + 1);// passa para o próximo dígito
        c++;
    }
}

/*
    Função principal pedida pelo exercício
    Gera e imprime todas as combinações de n dígitos diferentes
*/
void    ft_print_combn(int n)
{
    char    comb[10]; //array para guardar até 10 dígitos (0 a 9)
     // Verifica se n está dentro dos limites válidos
    if (n < 1 || n > 9)
        return;
    // Inicia a geração de combinações a partir do dígito '0'
    ft_generate(comb, n, 0, '0');
}

