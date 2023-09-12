#include <iostream>
using namespace std;

int facotorial(int n){

if(n <= 1){
    return 1;
}

return n * facotorial(n - 1);



}

int main(){

cout << facotorial(8) << endl;

}