#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <stdbool.h>

    using namespace std;

int retornaComMais10(int numero){
        return numero + 10;
}

void aumentaDez(int *numero){
    *numero = *numero + 10;
}

int main(){
setlocale(LC_ALL,"");


int a  = 5;


printf("Esse é o valor de a : %d",a);

a = retornaComMais10(a);


printf("\nAgora esse é o novo valor de A: %d",a);

aumentaDez(&a);

printf("\nAgora esse é o novo valor de A: %d",a);

 return 0;

}
