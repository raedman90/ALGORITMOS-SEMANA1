#include <stdio.h>

main(){
	
	//UFCG
	//16. Escreva um programa que dado x segundos fornecidos pelo usuario, 
	//transforme-os em horas e minutos quando possivel. Ex.: 3670 segundos = 1h 1min
    //10seg; 65 segundos = 0h 1min 5seg; 43 segundos = 0h 0min 43seg.
	
	//============= [ VARI�VEIS DO PROGRAMA ] =============
	int segundos, minutos, horas;
	
	//Informando o valor necess�rio
	printf("Informe os segundos:");
	scanf("%d", &segundos);
	
	//Realizando as opera��es - 3600 = 1 hora	
	horas = segundos/3600;
	minutos = (segundos%3600)/60;
	segundos = segundos%60;
	
	//Exibindo o resultado para o usuario
	printf("Resultado: %dh %dmin %dseg", horas, minutos, segundos);
	
}
