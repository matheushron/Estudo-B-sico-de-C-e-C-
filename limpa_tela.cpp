#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <stdbool.h>



using namespace std;


void limpaTela(){
    system("CLS");
}



int main(){
setlocale(LC_ALL,"");

int a;


cout << "digite um valor numerico e inteiro para A : ";


cin >> a;


cout << "\nO valor que você deu para A foi : " << a ;



limpaTela();


 return 0;
}
