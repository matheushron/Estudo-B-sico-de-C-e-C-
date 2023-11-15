#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;


void desenha(){
    printf(":3");
}



int main(){
setlocale(LC_ALL,"");

   desenha();
   printf("\nolá\n");
   desenha();


return 0;
}
