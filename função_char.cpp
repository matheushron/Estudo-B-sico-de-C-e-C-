#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;



char letra(){
    return 'A';
}





int main(){
setlocale(LC_ALL,"");

   char abc;


   abc = letra();


   printf("%c", abc);


return 0;
}
