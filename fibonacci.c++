#include<iostream>
#include <chrono>
using namespace std;

constexpr int fibonacci (int i){

    if(i == 1){
        return i ;
    }

    if(i == 0){
        return 1;
    }

    return fibonacci(i - 1) + fibonacci(i - 2);

}

int main(){


    cout << fibonacci(5) << endl;


}