#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	//Aluno Francisco Israel de Oliveira
	//21. Escreva um programa que leia o preço de produção de um determinado produto e a
    //margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de venda
	
	//============= [ VARIÁVEIS DO PROGRAMA ] =============
	float produto, margem;
	
	//Informando os valores necessários
	printf("Digite o preço de produção do produto:");
	scanf("%f", &produto);
	printf("Digite a margem de lucro desejada:");
	scanf("%f", &margem);
	
	//Realizando a operação
	float vendido = produto + margem;
	
	//Exibindo o resultado para o usuario
	printf("O produto deve ser vendido por R$%.2f", vendido);
}
