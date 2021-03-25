#include <stdio.h>

main(){
	//Aluno Francisco Israel de Oliveira
	//10. Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e calcule o valor da hipotenusa.
	//============= [ VARIÁVEIS DO PROGRAMA ] =============
	float catetoa, catetob;
	float multcatetoa, multcatetob, somacatetos;
	
	//Informando os Catetos
	printf("Informe o primeito Cateto:");
	scanf("%f", &catetoa);
	printf("Informe o segundo Cateto:");
	scanf("%f", &catetob);
	
	//Realizando as operações
	multcatetoa = catetoa * catetoa;
	multcatetob = catetob * catetob;
	somacatetos = multcatetoa + multcatetob;
	
	//Exibindo o resultado ao usuario
	printf("O valor da da hipotenusa e [%.2f]", somacatetos);
}
