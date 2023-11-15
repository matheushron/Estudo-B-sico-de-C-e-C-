#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;


int dez(){
   printf("teste de print");
   return 10;
}



int main(){
setlocale(LC_ALL,"");

  int a;

  a = dez();


  printf("\na variavel vale : %d ",a);


return 0;
}

