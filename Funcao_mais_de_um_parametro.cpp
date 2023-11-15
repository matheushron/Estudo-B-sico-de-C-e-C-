#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <stdbool.h>


using namespace std;

void mostraSoma(int v1, int v2){
    printf("\nA soma entre %d e %d é %d !",v1,v2,v1+v2);
}

int main(){
setlocale(LC_ALL,"");


 int v1 = 5, v2 = 7;


 mostraSoma(v1,v2);






  return 0;
}
