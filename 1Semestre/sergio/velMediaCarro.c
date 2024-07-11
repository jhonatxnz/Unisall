#include <stdio.h>
int main(){
	
	float km, mins, vm;
	km = mins = vm = 0;
	int op = -1;
	do{
		printf("digite o km ");
		scanf("%f", &km);
		printf("digite qts minutos ");
		scanf("%f", &mins);
		vm = km * (mins / 60);
		printf("distancia percorrida %f\n", vm);
		printf("digite 0 para encerrar o programa, ou qualquer outro numero para continuar: ");
		scanf("%d", &op);
	} while (op != 0);
	
}