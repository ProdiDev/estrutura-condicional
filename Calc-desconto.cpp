#include <iostream>
using namespace std;

int main(){

    float preco, precoreal, desconto;
    int codigo;

    cout << "Calculadora de desconto. " <<endl;
    cout << "Preco original: ";
    cin >> preco;
    cout << "Codigo da condicao de pagamento: ";
    cin >> codigo;


    if (codigo==1){
            desconto = preco * 0.1;
            precoreal = preco-desconto;
            cout << "O preco pagando a vista e: " <<precoreal <<"R$" <<endl; }

    else if (codigo==2){
            desconto = preco * 0.05;
            precoreal = preco-desconto;
            cout << "O preco no credito e: " <<precoreal <<"R$" <<endl; }

    else if (codigo==3){
            precoreal=preco/2;
            cout << "O preco pagando em 2x de: " <<precoreal <<"R$" <<endl; }

    else if (codigo==4){
            desconto = preco * 0.1;
            precoreal = preco+desconto;
            cout << "O preco pagando em 3x e 10% a mais do preco original: " <<precoreal <<"R$" <<endl; }

    return 0;
}
