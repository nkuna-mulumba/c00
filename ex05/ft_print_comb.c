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

/*
    ft_print_comb - Imprime todas combinações possíveis de três dígitos distintos em ordem crescente.
    Comportamento:
        - Gera e imprime todos os conjuntos (a, b, c) onde:
            '0' ≤ a < b < c ≤ '9'
        - Cada combinação é impressa como três caracteres consecutivos (ex: "012", "047", "789")
        - As combinações são separadas por vírgula e espaço, exceto após a última
    Observações:
        - Não imprime quebra de linha no final
        - Garante que os dígitos sejam sempre únicos e em ordem crescente
        - Total de combinações: 120 (combinatória de 10 elementos tomados de 3 em 3 sem repetição e com ordem)
*/

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (!(a == '7' && b == '8' && c == '9'))
					write(1, ", ", 2);
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