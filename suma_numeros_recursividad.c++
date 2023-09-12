#include<iostream>
using namespace std;

constexpr int  sumar(int a){

if (a <= 0){
    return a;
}

else{

    return a % 10 + sumar(a/10);
}

}

int main(){

cout << sumar(45) << endl;

}