//Utilizando vetor faça um programa que leia até 10 números positivos de ponto flutuante.
//Caso seja lido um valor negativo parar a leitura dos números.
// Após números lidos, verifique se tem números repetidos, se tiver informe quais números repetidos.
int main(){
	int vetor[10];
	int i, j ,c;
	j = 0;
	
	for(i = 0;i < 10;i++){
		printf("Digite o %d valor ", i + 1);
		scanf("%d",&vetor[i]);
		
		if(vetor[i] < 0){
			printf("Numero negativo identificado");
			return;
		}
	}
	
	for( c = 0;c < 9;c++){
		for( j = c;j < 9;j++){
			if(vetor[c] == vetor[j + 1])
	  			printf("%d ", vetor[c]); //printa numeros repetidos
	  	}
	}
		
	return 1;
}
