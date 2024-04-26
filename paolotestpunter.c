/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paolotestpunter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurvare <laurvare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:28:42 by laurvare          #+#    #+#             */
/*   Updated: 2024/04/24 17:17:27 by laurvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	resta_numeros(int num1, int num2)
{
	return	(num1 - num2);
}

int sumar_numeros(int num1, int num2)
{
	return (num1 + num2);
}
int main(void)
{
	int num1;
	int num2;
	int resultado;
	
	num1 = 10;
	num2 = 5;
	resultado = resta_numeros(num1, num2);
	int otro = sumar_numeros(5, resta_numeros(num1, num2));

	printf ("La diferencia es:%d\n", otro);
	return(0);
}


















/*
int sumar_numeros(int num1, int num2)
{
	return (num1 + num2);
}

int	main(void)
{
	int num1 = 5;
	int num2 = 3;
	
	printf("resultado de la suma: %d\n", sumar_numeros(num1, num2));
 	return (0);
}
*/

