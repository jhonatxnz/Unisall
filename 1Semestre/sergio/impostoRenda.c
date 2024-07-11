//Pesquise sobre a tabela de imposto de renda – faixas de desconto e
//implemente um programa que leia o rendimento total de uma pessoa, o
//imposto de renda retidos, os descontos dedutíveis pago para o contribuinte
//e calcule o imposto de renda final em função da tabela de imposto de
//renda.
#include <stdio.h>
int main(){
	float rt, irrp1, irrp2, irrp3, irrp4, irrp5, dd, rf;
	rt = dd = irrp1 = dd = 0;
	irrp2 = 169,40;
	irrp3 = 381,44;
	irrp4 = 662,77;
	irrp5 = 896,00;
	printf("Digite o seu rendimento total: ");
	scanf("%f", &rt);
	rf = rt;
	
	if(rt <= 2259)
		printf("rendimento final = R$%4.2f\nimposto de renda retido = R$%4.2f\ndescontos dedutiveis = R$%4.2f", rf, 0, 0);
	else if(rt > 2259 && rt <= 2.826 ){
		rt = rt * 0.075;
		rt = rt - irrp2;
		rf = rf - rt;
		printf("rendimento final = R$%4.2f\nimposto de renda retido = R$%4.2f\ndescontos dedutiveis = R$%4.2f", rf, rt, irrp2);
	}
	else if(rt > 2.826 && rt <= 3.751 ){
	rt = rt * 0.15;
		rt = rt - irrp3;
		rf = rf - rt;
		printf("rendimento final = R$%4.2f\nimposto de renda retido = R$%4.2f\ndescontos dedutiveis = R$%4.2f", rf, rt, irrp3);
	}
	else if(rt > 3.751 && rt <= 4.664 ){
		rt = rt * 0.225;
		rt = rt - irrp4;
		rf = rf - rt;
		printf("rendimento final = R$%4.2f\nimposto de renda retido = R$%4.2f\ndescontos dedutiveis = R$%4.2f", rf, rt, irrp4);
	}
	else if(rt > 4.664 ){
		rt = rt * 0.275;
		rt = rt - irrp5;
		rf = rf - rt;
		printf("rendimento final = R$%4.2f\nimposto de renda retido = R$%4.2f\ndescontos dedutiveis = R$%4.2f", rf, rt, irrp5);
	}
	return 1;
}