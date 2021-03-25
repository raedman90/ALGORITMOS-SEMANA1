#include <stdio.h>

main(){
	//Aluno Francisco Israel de Oliveira
	//12. Escreva um programa que leia um valor em polegadas e o converta para centímetros, considerando que uma polegada equivale a 2.54 cm.
	//============= [ VARIÁVEIS DO PROGRAMA ] =============
	float polegada;
	float conversor;
	
	//Informando as polegadas
	printf("Conversor de polegada para centimetros\n");
	printf("Informe a quantidade de polegadas:");
	scanf("%f", &polegada);
	
	//Realizando a operação
	conversor = polegada * 2.54;
	
	//Exibindo o resultado
	printf("Resultado %.2f cm", conversor);
	
}
