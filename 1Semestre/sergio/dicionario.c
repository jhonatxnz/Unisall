#include <stdio.h>
#include <stdlib.h>
void consulta(int v[], int tam)
{
    printf("Consultando palavras no dicionario... \n");
    int i;
    for( i = 0; i < tam; i++) {
        printf("%d \n", v[i]);
    }
    printf("_____________________________________ \n");
}

void adiciona(int v[]){
    int dado;
    printf("Digite a palavra que deseja adicionar: ");
    scanf("%d", &dado);
    printf("_____________________________________ \n");
}

void procura(int v[], int tam){
    int dado;
    printf("Digite a palavra que deseja procurar no dicionario: ");
    scanf("%d", &dado);
    int i;
    for( i = 0; i < tam ; i++) {
	    if(dado == v[i]){
	        printf("Palavra {%d} encontrado no dicionario na posicao %d \n", dado, (i + 1));
	        printf("_____________________________________ \n");
	        return;
	    }
	}
	
	printf("Palavra ainda nao cadastrada no dicionario \n");
	printf("_____________________________________ \n");
}

void deleta(int v[], int tam){
    int dado;
    printf("Digite a palavra que deseja excluir do dicionario: ");
    scanf("%d", &dado);
    int i;
    for( i = 0; i < tam ; i++) {
	    if(dado == v[i]){
	        printf("Palavra excluida do dicionario \n");
	        printf("_____________________________________ \n");
	        v[i] = 0;
	        return;
	    }
	}
	printf("Palavra nao encontrada no dicionario \n");
	printf("_____________________________________ \n");
}

int encerra(){
	return 0;
}

void limpa(){
	system("cls");
}

int main()
{
    
    printf("DICIONARIO EM C \n");
    int palavras[5] = {1,2,3,4,5};
    int tam = sizeof(palavras)/sizeof(palavras[0]);
    int op = 0;
    
    do{
        printf("#1 ... Consultar dicionario \n");
        printf("#2 ... Adicionar palavra    \n");
        printf("#3 ... Procurar palavra     \n");
        printf("#4 ... Deletar palavra      \n");
        printf("#5 ... Sair                 \n");
        
        printf("Digite o numero da operacao desejada ");
        scanf("%d", &op);
        
        switch ( op ){
            case 1 :
            limpa();
            consulta(palavras, tam);
            break;
            
            case 2 :
            limpa();
            adiciona(palavras);
            break;
            
            case 3 :
            limpa();
            procura(palavras, tam);
            break;
            
            case 4 :
            limpa();
            deleta(palavras, tam);
            break;
            
            case 5 :
            encerra();
            break;

        }
    }
    while(op != 5);
    
    encerra();
}
