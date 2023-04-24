#include <iostream>
using namespace std;

int main(){

    int atual, nasc, idade, faltam;

    cout << "Idade." <<endl;
    cout << "Em qual ano estamos? ";
    cin >> atual;
    cout << "Qual o seu ano de nascimento? ";
    cin >> nasc;

    idade = atual - nasc;
    faltam = 18 - idade;

    if (idade>= 18){
        cout << "Voce tem " <<idade << " anos e ja pode tirar carteira de motorista e voce deve votar. " <<endl;  }
    else if (idade >=16)
        cout << "Voce tem " <<idade << " anos, e ja pode votar, mas ainda faltam " <<faltam << " anos para ter o direito de tirar a carteira de motorista. " <<endl;
    else
        cout << "Voce nao tem idade o suficiente para votar ou tirar a carteira de motorista." <<endl;


}
