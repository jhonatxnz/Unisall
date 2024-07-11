//Faça um programa que leia uma sequência de 10 números, sendo que 
//somente aceite números que estejam em ordem crescente. Se um número 
//digitado for menor que o anterior, deve solicitar que seja digitado 
//novamente um número, não considerando o número menor para parte dos 
//10 números solicitados. Ao final imprima os valores em ordem decrescente 
//(do maior para o menor).

#include <stdio.h>
int main(){
	
	int valores[10], valor, i;
	i = 0;
	
	while(i < 10){
		printf("digite o %d valor: ", i + 1);
		scanf("%d", &valor);
		
		if(i == 0){
			valores[i] = valor;
			i++;
		}						
		else if(valor < valores[i - 1])
			printf("***digite um numero maior que o anterior***\n");
		else {
			valores[i] = valor;
			i++;
		}
	}
	
	for(int i = 9;i >= 0;i--){
		printf("%d ", valores[i]);
	}
	
	
}