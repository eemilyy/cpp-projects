#include <iostream>
using namespace std;

int main(){
    int  valorA, valorB;
    char operador;

    cout << "Digite um número" << endl;
    cin >> valorA;
    cout << "Digite o operador (+, -, *, /)" << endl;
    cin >> operador;
    cout << "Digite mais um valor" << endl;
    cin >> valorB;

    if(operador == '+'){
        cout << "= " << valorA + valorB << endl;
    }
    else if(operador == '-'){
        cout << "= " << valorA - valorB << endl;
    }
    else if(operador == '*'){
        cout << "= " << valorA + valorB << endl;
    }
    else if(operador == '/'){
        cout << "= " << valorA / valorB << endl;
    }

    return 0;

}