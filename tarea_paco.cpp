#include<iostream>
#include<array>
using namespace std;

void operatios (string texto, string palabra, string txt[], char pal[]){

int j = 0;
    string aux = "";
   for (size_t i = 0; i < texto.size() + 1; i++)
   {
    
       if(texto[i] == ' ' || i == texto.size() + 1 - 1){
            txt[j] = aux;
            aux = "";
            j++;
       }
       else{
        aux += texto[i];
       }
   }

   // almacenar los datos de palabra a un array de palabra

    for (size_t i = 0; i < palabra.length() ; i++)
    {
       pal[i] = palabra[i];
    }

}

void print(int tam_str, int tam_pal, string txt[], char pal[]){

      for (size_t i = 0; i < tam_str ; i++)
    {
        cout << txt[i] << endl;
    }

    for (size_t i = 0; i < tam_pal; i++)
    {
        cout << pal[i] << endl;
    }
}

bool verificar_asistencia (int tam_str, int tam_pal, string txt[], char pal[]){

    for (size_t i = 0; i < tam_pal; i++)
        {
            for(int j = 0; j < tam_pal; j++){

                if(pal[i]== pal[j] && txt[i] != txt[j]){
                    return false;
                    break;
                }
                else
                {
                    continue;
                }

            }

        }
    return true;
}

void condiciones(int tam_str, int tam_pal, string txt[], char pal[]){

if(tam_pal != tam_str){

    if(tam_pal > tam_str){
        cout << "No corresponde . Cantidad de letras es mayor a cantidad de palabras " << endl;
    }
    else
    {
        cout << "No corresponde . Cantidad de palabras es mayor a cantidad de letras " << endl;
    }
}
else{

    if(!verificar_asistencia(tam_str, tam_pal, txt, pal)){
        cout << "No corresponde . No hay patron" << endl;
    }else{

        cout << "Si corresponde , ya que ";
        for (size_t i = 0; i < tam_pal; i++)
        {  
            cout << " " << pal[i] << "=" << txt[i];
        }
        cout << endl;
    }
}

}

int main(){

    // modificar solo estas variables

    string texto = "perro gato gato perro animal";
    string palabra = "abbacd";

    // tamanio del array de string

    int count_str = 0;

    for (size_t i = 0; i < texto.size(); i++)
    {
        if(' ' == texto[i]){
            count_str++;
        }
        else if(texto.empty()){
            count_str = 0;
        } 
    }

   string txt [count_str + 1];

   // tamanio del array de char

    char pal [palabra.size()];

    // guardando datos

    operatios(texto, palabra, txt, pal);
    
    // print arrays

    print(sizeof(txt) / sizeof(txt[0]), sizeof(pal) / sizeof(pal[0]), txt, pal);

    // condiciones

    condiciones(sizeof(txt) / sizeof(txt[0]), sizeof(pal) / sizeof(pal[0]), txt, pal);

    return 0;
    
}