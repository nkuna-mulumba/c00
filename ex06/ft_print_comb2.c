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
/*
    ft_putnbr2digits - Imprime um número inteiro com dois dígitos.
    Parâmetros:
        nbr → número inteiro entre 0 e 99
    Comportamento:
        - Calcula e imprime a dezena e unidade do número
        - Adiciona zeros à esquerda caso o número seja menor que 10
        - Usa a função write para imprimir os dígitos separadamente
    Observações:
        - A saída será sempre composta por dois caracteres ASCII
        - Ideal para gerar formatos como "00", "07", "42", etc.
        - Não imprime caracteres adicionais como '\n' ou espaço
*/

#include <unistd.h>

void	ft_putnbr2digits(int nbr)
{
	char	d;
	char	u;

	d = (nbr / 10) + '0';
	u = (nbr % 10) + '0';

	write(1, &d, 1);
	write(1, &u, 1);
}

/*
    ft_print_comb2 - Imprime todas combinações diferentes de dois números entre 00 e 99.
    Comportamento:
        - Para cada par (i, j) onde 0 ≤ i < j ≤ 99, imprime a combinação como:
          "00 01", "00 02", ..., "98 99"
        - Os números são formatados com dois dígitos (ex: 01, 07, 42)
        - As combinações são separadas por vírgulas e espaço, exceto após a última
    Dependências:
        - Usa a função auxiliar ft_putnbr2digits para garantir que todos os números tenham 2 dígitos
        - Usa write para saída direta no terminal
    Observações:
        - Não imprime quebras de linha
        - A ordem das combinações é crescente e sem repetições invertidas (i.e., não há "01 00")
        - Total esperado: 45 × 99/2 combinações → 4.950 pares únicos
*/
void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putnbr2digits(i);
			write(1, " ", 1);
			ft_putnbr2digits(j);
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