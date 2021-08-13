#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int caractereValor(char c, char f[20]){
    int t = strlen(f);
    //cout << t;
    for(int i = 0; i < t; i++){
        if(f[i] == c){
            return i;
        }
    }
    return -1;
}

int main(){

    char caractere;
    char frase[20];
    cout << "Digite uma frase" << endl;
    cin >> frase;
    cout << "Digite o caracter que deseja achar" << endl;
    cin >> caractere;
    cout << caractereValor(caractere, frase) << endl;
    return 0;
}
