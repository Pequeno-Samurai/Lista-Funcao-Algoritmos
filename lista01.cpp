//1.Crie uma fun��o que receba um valor e informe se ele � positivo ou n�o.

#include <stdio.h>

int pos(int x);

int main(){
	
	int x, resultado;
	
	printf("Digite um valor: ");
	scanf("%d", &x);
	
	resultado = pos(x);
	
	if (resultado>0){
 		printf("\nPositivo "); }
 		
 		else {
 			printf("\nNegativo"); }
 	
 return 0; }
 
int pos(int x){
	
 	if (x > 0) {
 		return 1; }
	else{
 		return 0; } }
