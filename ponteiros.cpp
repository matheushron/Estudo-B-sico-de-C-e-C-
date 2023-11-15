 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 #include <stdbool.h>
 #include <iostream>
 #include <string>

 using namespace std;


 int main(){
setlocale(LC_ALL,"");



   int a = 20;
//variaveis armazenam valores;
 cout << "O valor da variavel é " << a ;

 cin >> a;

 cout << "Agora o valor da variavel A é " << a;

 //ponteiros armazenam posiões da memoria;
 cout << "\nO endereço da variavel A é " << &a;

     int b = 10;

     int *pont;

    //ponteiro recebendo a posição na memoria da variavel B
     pont = &b;

     //imprimindo a variavel B

     cout << "\nO valor de B é : " << b;

     //* pode ser lido como conteudo apontado por:
     *pont = 40;
      cout << "\nO valor de B agora é : " << b;









  return 0;
 }
