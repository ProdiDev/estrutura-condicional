#include <iostream>
using namespace std;

int main(){

    float altura, pesoid;
    char sexo;

    cout << "Calculadora de peso ideal. " <<endl;
    cout << "Qual e o seu sexo? ";
    cin >> sexo;
    cout << "Qual a sua altura em metros: ";
    cin >> altura;

    const string M = "masculino";
    const string F = "feminino";

    if (sexo=='M'){
        pesoid = (72.7*altura)-58;
        cout << "O peso ideal para um individuo de sexo masculino e " <<pesoid;}
    else if(sexo=='F'){
        pesoid = (62.1*altura)-44.7;
        cout << "O peso ideal para um individuo de sexo feminino e " <<pesoid;}



}
