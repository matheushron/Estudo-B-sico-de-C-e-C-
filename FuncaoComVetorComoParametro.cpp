#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <stdbool.h>

    using namespace std;


void imprimeVetor(int *vetor, int tamanho){

    int i;
        for(i = 0; i < tamanho; i ++){
            printf("%d ",vetor[i]);
        }

}


void imprimeVetor2(int *vetor, int tamanho){

    int i;
        for(i = 0; i < tamanho; i ++){
            printf("\n%d ",vetor[i]);
        }

}


int main(){
setlocale(LC_ALL,"");

int v[3] = {1,2,3};

imprimeVetor(v,3);

int v2[5] = {1,2,3,4,5};

imprimeVetor2(v2,5);






return 0;

}
