#include <stdio.h>

main(){
	//Aluno Francisco Israel de Oliveira
	//2. Escreva um programa que leia tr�s n�meros e seus respectivos pesos e calcule a sua m�dia ponderada.
	//============= [ VARI�VEIS DO PROGRAMA ] =============
	float num1, num2, num3; //Vari�veis dos Numeros informados
	float peso1, peso2, peso3; //Vari�veis dos Pesos informados
	float mp1, mp2, mp3;  //Vari�veis das multiplica��es Numero x Peso
	float somapesos;  //Vari�vei da soma dos pesos
	float mpf; //Vari�vei da somas das multipla��es
	float resultado; //Vari�veis do resultado final
	
	//Informando os valores necess�rios
	printf("Informe o primeiro numero:");
	scanf("%f", &num1);
	printf("Informe o peso do primeiro numero:");
	scanf("%f", &peso1);
	printf("Informe o segundo numero:");
	scanf("%f", &num2);
	printf("Informe o peso do segundo numero:");
	scanf("%f", &peso2);
	printf("Informe o terceiro numero:");
	scanf("%f", &num3);
	printf("Informe o peso do terceiro numero:");
	scanf("%f", &peso3);
	
	//Exibindo oque foi fornecido
	printf("Voce informou os seguintes numeros e pesos:\n");
	printf("Primeiro numero [%.2f] com o peso [%.2f]\n", num1, peso1);
	printf("Segundo numero [%.2f] com o peso [%.2f]\n", num2, peso2);
	printf("Terceiro numero [%.2f] com o peso [%.2f]\n", num3, peso3);
	printf("Calculando ...\n\n");
	
	//Realizando as multiplica��es
	mp1 = num1 * peso1;
	mp2 = num2 * peso2;
	mp3 = num3 * peso3;
	
	//Realizando a soma dos pesos
	somapesos = peso1 + peso2 + peso3;
	
	//Realizando a soma das multiplica��es
	mpf = mp1 + mp2 + mp3;
	
	//Realizando o resultado da m�dia ponderada
	resultado = mpf / somapesos;
	
	//Exibindo a m�dia ponderada para o usuario
	printf("A media ponderada correspondente e %.2f", resultado);
}
