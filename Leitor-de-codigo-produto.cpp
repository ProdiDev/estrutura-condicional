#include <iostream>
using namespace std;

int main(){

    int c;

    cout << "Leitor de codigo. " <<endl;
    cout << "Digite o codigo do produto: ";
    cin >> c;


    if (c==1){
            cout << "Esse e um produto não perecivel." <<endl; }
    else if (c >= 2 && c< 4 ){
            cout << "Esse e um produto perecivel." <<endl; }
    else if (c >= 5 && c< 6){
            cout << "Esse e um produto de vestuario. " <<endl; }
    else if (c == 7){
            cout << "Esse e um produto de higiene pessoal." <<endl; }
    else if (c >=8 && c< 15){
            cout << "Esse e um produto de limpeza." <<endl; }
    else
        cout << "Produto nao registrado. ";

    return 0;
}
