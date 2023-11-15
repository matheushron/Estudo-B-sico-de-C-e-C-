#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void main(){
setlocale(LC_ALL,"");

int matriz[3][3] , a1 , a2 , i , j;


//percorrendo as coordenadas da matriz e armazenando variaveis:
for(i = 0; i < 2; i++ ){
   for(j = 0; j < 2; j++ ){
    printf("digite um valor para a posição [%d][%d] :  ",i , j);
    scanf("%d",&matriz[i][j]);
   }
}




//maneira repetitiva:
/*printf("digite um valor para a posição [0][0] : ");
scanf("%d",&matriz[0][0]);

printf("digite um valor para a posição [0][1] : ");
scanf("%d",&matriz[0][1]);

printf("digite um valor para a posição [1][0] : ");
scanf("%d",&matriz[1][0]);

printf("digite um valor para a posição [1][1] : ");
scanf("%d",&matriz[1][1]);*/



//usando 2 FORs:




a1 = matriz[0][0];
a2 = matriz[0][1];

matriz[0][0] = matriz[1][0];
matriz[0][1] = matriz[1][1];
matriz[1][0] = a1;
matriz[1][1] = a2;





for(i = 0; i < 2; i++ ){
   for(j = 0; j < 2; j++ ){
    printf("%d ",matriz[i][j]);

   }
  printf("\n");
  }
}
