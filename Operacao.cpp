#include <iostream>
using namespace std;

int main (){

    int n1, n2, opr;
    string op;

    cout << "Qual operacao deseja realizar? Media, diferenca ou Produto: " <<endl;
    cin >> op;
    cout << "Diga o primeiro numero: ";
    cin >> n1;
    cout << "Diga o segundo numero: ";
    cin >> n2;

    if (op=="media"){
        opr=(n1+n2)/2;
        cout << opr <<endl;
    }
    else if (op=="diferenca"){
        opr=n1-n2;
        cout << opr <<endl;
    }
    else if (op=="produto"){
        opr=n1*n2;
        cout <<opr <<endl;
    }
}
