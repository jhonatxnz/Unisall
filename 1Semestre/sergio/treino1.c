//Utilizando vetor faça um programa que leia um conjunto de 5 números e armazene no vetor.
//Calcule a soma dos valores impares e dos valores pares.
//Informe qual foi a maior soma. 
int main(){
	int vetor[5];
	int i, somaP, somaI;
	i = somaP = somaI = 0;
	for(i = 0;i < 5;i++){
		printf("Digite o %i valor ", i + 1);
		scanf("%d",&vetor[i]);
		if(vetor[i] % 2 == 0)
			somaP += vetor[i];
		else
			somaI += vetor[i];
	}
//	for(i = 0;i < 5;i++){
//		printf("%d",vetor[i]);
//	}
	printf("Sp = %d Si = %d, ", somaP, somaI);
	somaP > somaI ? printf("Soma dos Pares e maior") : printf("Soma dos impares e maior");
	return 1;
}