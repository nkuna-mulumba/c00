/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 07:35:13 by nkuna             #+#    #+#             */
/*   Updated: 2025/07/10 16:05:11 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_print_alphabet - Imprime alfabeto minúsculo de 'a' até 'z'.
    Comportamento:
        - Inicializa o caractere 'a'
        - Utiliza um loop que vai de 'a' até 'z', imprimindo cada letra sequencialmente
        - Usa a função write para imprimir diretamente no terminal
    Observações:
        - Não adiciona espaços ou quebras de linha
        - O resultado é uma única sequência de 26 letras minúsculas: "abcdefghijklmnopqrstuvwxyz"
*/
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