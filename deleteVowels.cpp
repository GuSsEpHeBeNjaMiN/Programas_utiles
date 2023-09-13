#include<iostream>
#include <string>
using namespace std;

string deleteVowels(string word){

   
    if(word.empty()){ // saber si en un string hay vocales o si está vacio

        return word;

    }else{

        char primerCaracter = word[0];
        string resto = word.substr(1);

         if(tolower(primerCaracter) == 'a' || tolower(primerCaracter) == 'e' ||
            tolower(primerCaracter) == 'i' || tolower(primerCaracter) == 'o' || 
            tolower(primerCaracter) == 'u'){

                return deleteVowels(resto);
            }else{

                return primerCaracter + deleteVowels(resto);

            }


    }
    
    // analizar el primer elemento del caracter 

}


int main () {


cout << deleteVowels("holapene") << endl;

}