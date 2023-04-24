#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float peso, altura, imc;

    cout << "Calculadora de IMC. " <<endl;
    cout << "Diga seu peso: ";
    cin >> peso;
    cout << "Diga a sua altura: ";
    cin >> altura;

    imc = peso / (pow (altura,2));

    cout << "O seu IMC e de: " <<imc <<endl;

    if (imc <= 18.5){
        cout << "Voce esta em situacao de desnutricao." <<endl;
    }
    else if (imc >18.5 && imc<=25){
        cout << "Voce esta no peso ideal." <<endl;
    }
    else if (imc >25 && imc<=30){
        cout << "Voce esta acima do peso." <<endl;
    }
    else if (imc >30){
        cout << "Voce esta obeso." <<endl;
    }

}
