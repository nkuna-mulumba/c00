/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuna <nkuna@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-10 08:59:48 by nkuna             #+#    #+#             */
/*   Updated: 2025-07-10 08:59:48 by nkuna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_print_numbers - Imprime números de '0' até '9' em sequência.
    Comportamento:
        - Inicializa com o caractere '0'
        - Utiliza um loop até '9', imprimindo cada dígito como caractere
        - Usa a função write para saída direta no terminal
    Observações:
        - Não adiciona espaços, separadores ou quebras de linha
        - A saída será sempre: "0123456789"
*/
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}
/*
	int	main(void)
	{
		ft_print_numbers();
		write(1, "\n", 1);
		return(0);
	}
*/