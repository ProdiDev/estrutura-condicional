#include <iostream>
using namespace std;

int main(){

    int n1, n2, r;
    string op;

    cout << "Calculadora. " <<endl;
    cout << "Qual operacao deseja realizar? Adicao, Subtracao, Multiplicacao, Divisao: ";
    cin >> op;
    cout << "Sendo a operacao " <<op <<" informe o numero 1: ";
    cin >> n1;
    cout << "informe o numero 2: ";
    cin >> n2;


    if (op=="adicao"){
            r=n1+n2;
            cout << "O resultado e: " <<r <<endl; }
    else if (op=="subtracao"){
            r=n1-n2;
            cout << "O resultado e: " <<r <<endl; }
    else if (op=="multiplicacao"){
            r=n1*n2;
            cout << "O resultado e: " <<r <<endl; }
    else if (op=="divisao"){
            r=n1/n2;
            cout << "O resultado e: " <<r <<endl; }
    else
        cout << "Operacao nao suportada. ";

    return 0;
}
