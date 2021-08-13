//Escreva um procedimento chamado AUMENTO que receba dois valores reais
//X e Y como parâmetros e aumente o valor de X em Y%. Defina e teste a função definida
//em um programa C++, para o qual X represente o preço de uma mercadoria em uma loja
//de roupas, e Y represente o percentual de aumento para o pagamento a prazo.

#include <iostream>
#include <string>

using namespace std;

double aumento(double x, int y){
    return x + ((y * x) / 100);
}

int main(){

    double valorX;
    int valorY;
    cout << "Digite o valor" << endl;
    cin >> valorX;
    cout << "Digite o valor da porcentagem" << endl;
    cin >> valorY;
    cout << aumento(valorX, valorY) << endl;

    return 0;
}
