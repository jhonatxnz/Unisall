#include <stdio.h>
int main(){
	float inflacoes[12] = {0.53, 0.84, 0.71, 0.61, 0.23, -0.08, 0.12, 0.23, 0.26, 0.24, 0.28, 0.56};
	float ift, menor, maior;
	int  iMenor, iMaior;
	ift = iMenor = iMaior = 0;
	for(int i = 0; i < 12;i++){
		ift += inflacoes[i];
		if(i == 0)
			maior = menor = inflacoes[i];
		
		if(maior < inflacoes[i]){
			maior = inflacoes[i];
			iMaior = i;
		}
		if(menor > inflacoes[i]){
			menor = inflacoes[i];
			iMenor = i;
		}
	}

	printf("inflacao total no ano de 2023 %4.2f : \n", ift);
	printf("media da inflacao no ano de 2023 %4.2f: \n", ift / 12);
	switch(iMaior){
		case 0: printf("janeiro foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 1: printf("fevereiro foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 2: printf("marco foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 3: printf("abril foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 4: printf("maio foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 5: printf("junho foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 6: printf("julho foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 7: printf("agosto foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 8: printf("setembro foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 9: printf("outubro foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 10: printf("novembro foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
		case 11: printf("dezembro foi o mes com a maior inflacao chegando a %4.2f", maior);
		break;
	}
	printf("\n");
	switch(iMenor){
		case 0: printf("janeiro foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 1: printf("fevereiro foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 2: printf("marco foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 3: printf("abril foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 4: printf("maio foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 5: printf("junho foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 6: printf("julho foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 7: printf("agosto foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 8: printf("setembro foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 9: printf("outubro foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 10: printf("novembro foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
		case 11: printf("dezembro foi o mes com a menor inflacao chegando a %4.2f", menor);
		break;
	}
}