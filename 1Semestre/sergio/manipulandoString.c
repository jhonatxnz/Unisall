#include <stdio.h>
#include <string.h>
#define TAM 80
float calcPercentual(int parte , int todo){
float perc = 0;
perc = ((float)parte / (float)todo) * 100;
return perc;
}

int main(){
	char nome[TAM];
	char vogais[6] = {'a','e','i','o','u', 0};
	int i, cnt, cA, cE, cI, cO, cU;
	float perc;
	cnt = cA = cE = cI = cO = cU = perc = 0;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	
	for(i = 0;i < strlen(nome);i++){
		for(int j = 0; j < strlen(vogais);j++){
			if(tolower(nome[i]) == vogais[j]){
				printf("\nEncontrou vogal na pos %d ", i);
				cnt++;
				if(j == 0) cA++;
				if(j == 1) cE++;
				if(j == 2) cI++;
				if(j == 3) cO++;
				if(j == 4) cU++;
			}
		}		
	}

	printf("\nPercentual de vogais na palavra = %%%3.2f", calcPercentual(cnt, strlen(nome)));
	printf("\nPercentual de a = %%%3.2f", calcPercentual(cA, strlen(nome)));
	printf("\nPercentual de e = %%%3.2f", calcPercentual(cE, strlen(nome)));
	printf("\nPercentual de i = %%%3.2f", calcPercentual(cI, strlen(nome)));
	printf("\nPercentual de o = %%%3.2f", calcPercentual(cO, strlen(nome)));
	printf("\nPercentual de u = %%%3.2f", calcPercentual(cU, strlen(nome)));
	return 0;
}