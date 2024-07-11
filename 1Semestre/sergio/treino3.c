//Faça um programa que leia 5 números e armazene em um vetor A.
//Leia outros 5 números e armazene em um vetor B.
//Faça a multiplicação de cada posição do vetor A pela mesma posição do vetor B e armazene em um vetor C.
//Calcule a média total entre os 3 vetores.

int main(){
	int a[5], b[5], c[5];
	int i, sA, sB, sC;
	sA = sB = sC = 0;
	for(i = 0;i < 5;i++){
		printf("Digite o %i valor do vetor a ", i + 1);
		scanf("%d",&a[i]);
		sA += a[i];
	}
	printf("-----------------------------\n");
	for(i = 0;i < 5;i++){
		printf("Digite o %i valor do vetor b ", i + 1);
		scanf("%d",&b[i]);
		sB += b[i];
	}
	
	for(i = 0;i < 5;i++){
		c[i] = a[i] * b[i];
		sC += c[i];
	}
	printf("--------------------------\n");
	for(i = 0;i < 5;i++){
		printf("%d ", c[i]);
	}

	printf("\nsA = %d sB = %d sC = %d", sA, sB, sC);
	return 1;
}