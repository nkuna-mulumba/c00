/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 09:12:53 by nkuna             #+#    #+#             */
/*   Updated: 2025/07/10 17:50:26 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    ft_is_negative - Verifica se um número é negativo e imprime resultado.
    Parâmetros:
        n → número inteiro a ser avaliado
    Comportamento:
        - Imprime 'N' se o número for negativo
        - Imprime 'P' se o número for positivo ou zero
        - Utiliza a função write para saída direta no terminal
    Observações:
        - Não imprime quebra de linha ou espaços adicionais
        - A função trata '0' como valor positivo, imprimindo 'P'
*/

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

/*
	int	ft_atoi(char *s)
	{
		int	sig;
		int	nbr;
		if (!s)
		{
			return (-1);
		}
		while (*s == ' ' || *s >= 8 && *s <= 13)
		{
			s++;
		}
		sig = 1;
		if (*s == '+' || *s == '-')
		{
			if (*s == '-')
			{
				sig = -sig;
			}
			s++;
		}
		nbr = 0;
		while ((*s >= '0') && (*s <= '9'))
		{
			nbr = (nbr * 10) + (*s - '0');
			s++;
		}
		return(sig * nbr);
	}

	int	main(int argc, char **argv)
	{

		ft_is_negative(ft_atoi(argv[1]));
		write(1, "\n", 1);
		return(0);
	}
*/