//Faça um programa que calcule a média final conforme as regras de notas 
//do UNISAL (ADC1,ADC2, ADC3,ADC4, ADCC1, ADCC2, Avaliação 
//Integrada, Projeto Integrador e Prova Final)
int main(){
	
	int ADC1, ADC2, ADC3, ADC4, ADCC1, ADCC2, AI, PI, PF;
	float mf;
	ADC1 = ADC2 = ADC3 = ADC4 = ADCC1 = ADCC2 = AI = PI = PF = mf = 0;
	
	printf("digite a nota da ADC1: ");
	scanf("%d", &ADC1);
	printf("digite a nota da ADC2: ");
	scanf("%d", &ADC2);
	printf("digite a nota da ADC3: ");
	scanf("%d", &ADC3);
	printf("digite a nota da ADC4: ");
	scanf("%d", &ADC4);
	
	mf = (ADC1 + ADC2 + ADC3 + ADC4) / 4;
	
	if(mf < 6){
		printf("Media insuficiente, digite a nota da ADCC1: ");
		scanf("%d", &ADCC1);
		mf = (ADC1 + ADC2 + ADC3 + ADC4 + ADCC1) / 5; // mf += ADCC1 / 5;
		
		if(mf < 6){
			printf("Media insuficiente, digite a nota da ADCC2: ");
			scanf("%d", &ADCC2);
			mf = (ADC1 + ADC2 + ADC3 + ADC4 + ADCC1 + ADCC2) / 6; // mf += ADCC2 / 6;
		}	
	}
	
	printf("digite a nota da AI: ");
	scanf("%d", &AI);
	printf("digite a nota do PI: ");
	scanf("%d", &PI);
	printf("digite a nota da PF: ");
	scanf("%d", &PF);
	
	mf = mf*0.5 + AI*0.2 + PI*0.3 + PF*0.1;
	printf("media final sendo igual a: %f", mf);
}