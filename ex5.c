#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

int main(){

    int opc, itens;
    char arqFisico[]="imoveis.txt";
    
    int size, i, j;
    FILE *arq=fopen("imoveis.txt", "r");
    if( arq==NULL){
        printf("\nErro ao abrir arquivo de imoveis.\n");
        return 1;
    }
    else{
        printf("\nArquivo de imoveis aberto com sucesso.\n");
    }
    do{
        printf("\nDigite a opcao desejada:\n");
        printf("\tMenu:");
        printf("\n0-Encerrar atendimento.\n");
        printf("\n1-Ver todos os imoveis disponiveis para locacao.\n");
        printf("\n2-Ver lista de apartamentos.\n");
        printf("\n3-Ver lista de casas.\n");//com base num valor digitado pelo usuario
        printf("\n4-Ver imovel com menor valor disponivel.\n");
        scanf("%d", &opc);

        switch (opc){
            case 1:
            /*chamar a função void printTodosImoveis (Imovel *vet, int size); */
            
            break;
            case 2:
            /*chamar a função void printApartamentos (Imovel *vet, int size); */
            break;
            case 3:
            /*Chamar a função void printCasasLocacao (Imovel *vet, int size, double valor);*/
            break;
            case 4:
            /*Imovel vendaMenorValor (Imovel *vet, int size, double *valor);*/
            break;   
        }

    }while(opc!=0);

    fclose(arq);
    return 0;
}