#include<iostream>
using namespace std;

int MCD(int a, int b){

    if(b <= 0){
        return a;
    }

    return MCD(b, a % b);


    /*
    
     Este programa funciona debido a que se utiliza el algoritmo de EUCLIDES:
     este consiste en:

     - dividir un numero a mayor que un numero b 
     - el residuo de c dividirlo con  el b anterior

     - el caso base es cuando el residuo recursivo de a/b da 0;

     Por ejemplo;

     a = 156

     b = 120

     MCD de 156 y 120 -> 120 % 156  = 36 

     en este caso, tenemos a 36 como residuo y como este no es 0, debemos hallar un nuevo residuo

     a = 36

     b =  36 % 120   = 12 

     en este segundo caso, tenemos a 12 como residuo y como no es cero, tenemos que realizar otra operación

     a = 12

     b = 36 % 12 = 0

     en este viedo que b = 0, entonces el MCD de esos dos numeros es 12;

    
    */


}

int main(){

cout << MCD(156,120) << endl;


}