#include<iostream>
using namespace std;

int sumaArry(int arr[], int n){

    if(n == 0){
        return 1;
    }

    return arr[n] + sumaArry(arr, n - 1);

}

int main(){


int n = 5;

int arr[n] = {1,2,3,4,5};

cout << sumaArry(arr,n);

}