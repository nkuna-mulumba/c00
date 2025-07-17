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

/*
    ft_putnbr - Imprime um número inteiro no terminal.
    Parâmetros:
        nb → número inteiro a ser impresso
    Comportamento:
        - Imprime os dígitos de nb um por um, da esquerda para a direita
        - Se nb for negativo, imprime '-' antes dos dígitos
        - Trata o caso especial de INT_MIN diretamente (valor não pode ser invertido)
    Observações:
        - Usa apenas a função write para saída
        - Não imprime quebra de linha nem espaços adicionais
        - Ideal para projetos onde funções de biblioteca estão proibidas
*/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

/*
	int main(void)
	{
		ft_putnbr(0123);
		write(1, "\n", 1);
		return(0);
	}
*/