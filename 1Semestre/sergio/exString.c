#include <stdio.h>
#include <string.h>
#define TAM 80
int maiuscula(char c) {
    return 'A' <= c && c <= 'Z';
}
int main(){
	char frase[TAM];
	int i;
	printf("Digite a frase: ");
	scanf("%s", &frase);
	
	
	for(i = 0;i < strlen(frase);i++){
		
		if(maiuscula(frase[i])){
			frase[i] = frase[i] + 1;
		} else {
			frase[i] = toupper(frase[i]);
		}
		
	}
	printf("%s", frase);
	return 0;
}