#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	//Aluno Francisco Israel de Oliveira
	//21. Escreva um programa que leia o pre�o de produ��o de um determinado produto e a
    //margem de lucro desejada pelo fabricante e calcule qual deve ser o seu pre�o de venda
	
	//============= [ VARI�VEIS DO PROGRAMA ] =============
	float produto, margem;
	
	//Informando os valores necess�rios
	printf("Digite o pre�o de produ��o do produto:");
	scanf("%f", &produto);
	printf("Digite a margem de lucro desejada:");
	scanf("%f", &margem);
	
	//Realizando a opera��o
	float vendido = produto + margem;
	
	//Exibindo o resultado para o usuario
	printf("O produto deve ser vendido por R$%.2f", vendido);
}
