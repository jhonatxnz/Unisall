#define QTD 6
#include <stdio.h>

int main(){
	
    int valores[6] = {1, 2, 3, 4, 5, 6};
    int maior, menor, aux, procurado;
    int i;
    
    // #1 maior e menor numero do vetor
	for (i = 0; i < QTD; i++) {
		
		if(i == 0){
			maior = valores[i];
			menor = valores[i];
		}
		
		if(maior < valores[i])
			maior = valores[i];
		
		if(menor > valores[i])
			menor = valores[i];

	}
	
	valores[0] = menor;
	valores[5] = maior;
	
	printf("Maior = %d\nMenor = %d\n \n", maior, menor);
	
	// #2 inverter os valores do vetor
	for(i = 0; i < 3 ; i++) {
        aux = valores[i];
	    valores[i]  = valores[5-i];
    	valores[5-i] = aux;
	}                     
	
    //print vetor
	for(i = 0; i < 6 ; i++) {
    	printf("%d", valores[i]);
	}
	
	printf("\n \n");
	
	// #3 ordenar o vetor
	for(int i = 0; i < 6 ; i++) {
        for(int j = 0; j < 6; j++){
            if(valores[i] < valores[j]){
                aux = valores[j];
                valores[j] = valores[i];
                valores[i] = aux;
            }
        }
    }
	//print vetor
	for(i = 0; i < 6 ; i++) {
    	printf("%d", valores[i]);
	}
	
	// #4 busca no vetor
	printf("\n\nDigite o valor a ser procurado no vetor: ");
	scanf("%d", &procurado);
	
	for(i = 0; i < 6 ; i++) {
	    if(procurado == valores[i]){
	        printf("valor {%d} encontrado no vetor na posicao %d", procurado, i);
	        return 1;
	    }
	}
	return 0;
	
}