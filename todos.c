#include "myLib.h"

void printTodosImoveis(Imovel *vet, int size){

    FILE *arq=fopen("imoveis.txt", "r");
    if( arq==NULL){
        printf("\nErro ao abrir arquivo de imoveis.\n");
    }
    else{
        printf("\nArquivo de imoveis aberto com sucesso.\n");
    }
    /*chamar função learquivo*/
    
    fclose(arq);
}
