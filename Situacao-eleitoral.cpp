#include <iostream>
using namespace std;

int main (){

    int idade;

    cout << "Indicador de situacao eleitoral. " <<endl;
    cout << "Indique a sua idade: ";
    cin >> idade;

    if (idade <16){
        cout << "Voce nao pode votar." <<endl;
    }
    else if (idade >= 16 && idade <18){
        cout << "Individuos da sua idade tem o voto opcional, ou seja voce pode votar, mas nao e obrigatorio." <<endl;
    }
    else if (idade >= 18 && idade <=65){
        cout << "Voce deve votar." <<endl;
    }
    else if (idade > 65){
        cout << "A votacao e de escolha sua, voce pode votar, mas nao e mais obrigatorio." <<endl ;
    }
}
