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
 cout << "O valor da variavel � " << a ;

 cin >> a;

 cout << "Agora o valor da variavel A � " << a;

 //ponteiros armazenam posi�es da memoria;
 cout << "\nO endere�o da variavel A � " << &a;

     int b = 10;

     int *pont;

    //ponteiro recebendo a posi��o na memoria da variavel B
     pont = &b;

     //imprimindo a variavel B

     cout << "\nO valor de B � : " << b;

     //* pode ser lido como conteudo apontado por:
     *pont = 40;
      cout << "\nO valor de B agora � : " << b;









  return 0;
 }
