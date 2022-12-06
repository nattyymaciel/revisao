#ifndef _MYLIB_H_
#define _MYLIB_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct imovel{
    int id;
    char *tipoImovel;
    char *finalidade;
    char *bairro;
    float metragem;
    int dormitorios;
    int vagasGaragem;
    double valor;
} Imovel;

void printTodosImoveis (Imovel *vet, int size);
void printApartamentos (Imovel *vet, int size);
void printCasasLocacao (Imovel *vet, int size, double valor);
Imovel vendaMenorValor (Imovel *vet, int size, double *valor);
int **learquivo();
 

#endif