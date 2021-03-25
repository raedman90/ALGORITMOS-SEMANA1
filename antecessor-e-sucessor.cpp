#include <stdio.h>

main(){
	//Aluno Francisco Israel de Oliveira
	//6. Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu sucessor.
	//============= [ VARIÁVEIS DO PROGRAMA ] =============
	int num;
	int antecessor;
	int sucessor;
	
	//Informando o valor necessário
	printf("Informe um numero para descobrir o seu antecessor e o seu sucessor:");
	scanf("%d", &num);
	
	//Realizando as operações
	antecessor = num - 1;
	sucessor = num + 1;
	
	//Exibindo o resultado para o usuario
	printf("O antecessor de [%d] e [%d]\n", num, antecessor);
	printf("O sucessor de [%d] e [%d]", num, sucessor);
}
