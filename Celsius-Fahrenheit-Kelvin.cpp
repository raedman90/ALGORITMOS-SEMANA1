#include <stdio.h>

main(){
	//Aluno Francisco Israel de Oliveira
	//8. Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu valor correspondente em Fahrenheit e em Kelvin.
	//============= [ VARIÁVEIS DO PROGRAMA ] =============
	float Celsius;
	float Fahrenheit;
	float Kelvin;
	
	//Informando o valor de Celsius
	printf("Informe o valor em Celsius para ser convertido em Fahrenheit e Kelvin:");
	scanf("%f", &Celsius);
	
	//Realizando as operações
	Fahrenheit = 1.8 * Celsius + 32; //Formula para transformar em Fahrenheit
	Kelvin = Celsius + 273.15; //Formula para transformar em Kelvin
	
	//Exibindo os resultados
	printf("Valor de Celsius[%.2f] em Fahrenheit e [%.2f].\n", Celsius, Fahrenheit);
	printf("Valor de Celsius[%.2f] em Kelvin e [%.2f].", Celsius, Kelvin);	
}
