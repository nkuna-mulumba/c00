/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 07:25:17 by nkuna             #+#    #+#             */
/*   Updated: 2025/07/10 17:53:27 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_putchar - Imprime um único caractere no terminal.
    Parâmetros:
        c → caractere a ser impresso
    Comportamento:
        - Utiliza a função write para imprimir 1 byte (caractere) na saída padrão
    Observações:
        - Não adiciona quebra de linha ou espaço automaticamente
        - Ideal para funções auxiliares como ft_putstr ou impressão manual de caracteres
*/
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
	int	main(void)
	{
	
		ft_putchar('a');
		write(1, "\n", 1);
		return(0);
	}
*/
