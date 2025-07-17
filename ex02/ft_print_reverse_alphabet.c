/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuna <nkuna@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-10 08:41:14 by nkuna             #+#    #+#             */
/*   Updated: 2025-07-10 08:41:14 by nkuna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_print_reverse_alphabet - Imprime o alfabeto em ordem reversa, de 'z' até 'a'.
    Comportamento:
        - Inicializa com o caractere 'z'
        - Utiliza um loop decremental até 'a', imprimindo cada letra
        - Usa a função write para saída direta no terminal
    Observações:
        - Não imprime espaços nem quebras de linha
        - A saída será uma sequência contínua: "zyxwvutsrqponmlkjihgfedcba"
*/
#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
/*
	int	main(void)
	{
		ft_print_reverse_alphabet();
		write(1, "\n", 1);
		return(0);
	}
*/