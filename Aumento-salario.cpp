#include <iostream>
using namespace std;

int main (){

    float salario, salarionormal, salarioajustado;

    cout << "De entrada no seu salario atual: ";
    cin >> salarionormal;

    if (salarionormal<=500){
        salario = salarionormal *0.30;
        salarioajustado = salario + salarionormal;
        cout << salarioajustado <<endl;}

        else if (salarionormal>500)
            cout << "Voce nao tem direito ao aumento de salario. ";
}
