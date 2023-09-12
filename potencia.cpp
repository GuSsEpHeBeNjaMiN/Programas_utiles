#include<iostream>
using namespace std;

double potencia(int base, int exponente){
    if( exponente <= 0 ){
        return 1.0;
    }

    return base * potencia(base,exponente - 1);
}

int main(){

    cout << potencia(2,4);

}