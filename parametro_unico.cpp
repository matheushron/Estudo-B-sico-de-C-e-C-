#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <stdbool.h>


using namespace std;

void mostraSucessor(int numero){
       cout << "esse é o sucessor do numero fornecido : "<<numero+1;

}

void mostraAntecessor(int numero){
     cout <<  "\nesse é o antecessor do numero fornecido : " <<numero - 1;
}


int main(){
setlocale(LC_ALL,"");

  int a;


  cout << "Digite um valor para ver seu sucessor e antecessor : ";
  cin >> a;


  mostraSucessor(a);

  mostraAntecessor(a);


return 0;
}
