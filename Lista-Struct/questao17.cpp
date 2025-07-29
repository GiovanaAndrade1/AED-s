/* Crie uma struct chamada "Banco" que armazene um array de structs "ContaBancaria". 
Cada conta deve ter um número (string), saldo (float) e um array de transações (struct "Transacao" com tipo, valor e data). 
Adicione métodos para permitir depósitos, saques e transferências entre contas, além de exibir o extrato de uma determinada conta.*/

#include <iostream>
using namespace std;
#include <string>


struct Transacao{
    char tipo; 
    float valor; 
    float data;
};

struct ContaBancaria{
    int numero;
    float saldo; 
    Transacao *transacao;
    int numTransacao;
    
    ContaBancaria(){
        transacao = new Transacao[numTransacao];
    }
};

struct Banco{
    ContaBancaria* conta;
    int numContas;

    Banco(){
        conta = new ContaBancaria[numContas];
    }

    int deposito(int numeroConta){
        for (int i= 0 ; i < numContas ; i ++){
            if (conta[i].numero == numeroConta){
                conta[i].saldo = conta[i].saldo + valor;
            }

            //criar as transacoes;
            Transacao t;
            t.tipo = "Depósito";
            t.valor = valor;
            t.data = data;

            //adcionar para o extrato
            

        }

    }

};

