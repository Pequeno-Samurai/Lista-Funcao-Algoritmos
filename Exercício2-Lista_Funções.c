//2.Crie uma função que receba 2 números inteiros e retorne o maior valor.

#include <stdio.h>

int maior(int x, int y);

int main()
{
	int valor1, valor2, resultado;
	
	printf("Digite um valor: ");
	scanf("%d", &valor1);
	
	printf("Digite outro valor: ");
	scanf("%d", &valor2);
	
	resultado = maior(valor1, valor2);
	
 	printf("\nValor maior: %d\n", resultado);
 	
 return 0; 
}
 
int maior(int x, int y)
{
 	if (x > y) 
	{
 		return x; 
	}
	else
	{
 		return y; 
	} 
}
