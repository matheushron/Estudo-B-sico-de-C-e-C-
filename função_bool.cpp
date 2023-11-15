#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;


bool retorno(){
    return false;
}

int main(){
setlocale(LC_ALL,"");

   bool variavel;


   variavel = retorno;


   printf("%d",variavel);


return 0;
}
