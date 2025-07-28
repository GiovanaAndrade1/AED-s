/* Crie uma struct chamada "ContaBancaria" que armazene o número da conta (string) e o saldo (float).
 Adicione métodos para realizar depósitos e saques na conta. Adicionar um método significa colocar a função dentro da struct*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct ContaBancaria{

    string numConta;
    float saldo;

    void Deposito(int valor) {
    saldo += valor;  // atualiza o saldo
}

bool Saque(int valor) {
    if(valor <= saldo) {
        saldo -= valor;  // atualiza o saldo
        return true;     // saque realizado com sucesso
    } else {
        return false;    // saque negado por saldo insuficiente
    }
}

};

ContaBancaria PreencherDados(ContaBancaria &b){
    cout << " Informe a sua conta bancária" << endl;
    cin >> b.numConta;
    cout << " Informe o seu saldo" << endl;
    cin >> b.saldo;
    return b;

}

int main(){
    char opcao;
    ContaBancaria b;
    PreencherDados(b);
    int deposito;
    int saque;
    

    
    

    do{
        cout << " quer depositar ou sacar ? D para deposto, S para saque e N para nada"<< endl;
    cin >> opcao;

    switch(opcao) {
        case 'D' : 
        cout << " Informe quanto dinheiro irá depositar na conta"<< endl;
        cin >> deposito;
        b.Deposito(deposito);

        break;

        case 'S': 
        cout << " Informe quanto dinherio irá sacar da sua conta" << endl;
        cin >> saque;
        if ( saque < b.saldo){
            b.Saque(saque);
        }
        else {
            cout << " Numero maior que o seu saldo!" << endl;
        }

        break;

    }
    }while ( opcao != 'N');

cout << " Obrigada! até a próxima" << endl;
cout << " A sua conta bancária é " << b.numConta << endl;
cout << " O valor do seu  saldo é " << b.saldo << endl;

return 0;

    } 




    
