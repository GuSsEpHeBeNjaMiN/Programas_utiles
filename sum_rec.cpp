#include<iostream>
using namespace std;

constexpr int suma (int n){

if(n == 0){
    return 0;
}

return n + suma (n - 1);

}

int main(){

cout << suma(3) << endl;

}