#include <iostream>
using namespace std;
#include <string>


struct Sargento{
    string nome; 
    int idade;
};

struct Soldado{
    string nome; 
    int idade;

};

struct Tropa{
    string nometropa;
    Soldado * soldados;
    Sargento sargento;

    Tropa(int qntSoldado){
        soldados = new Soldado[qntSoldado];
    }

    void ImprimirDados(string tropa, string soldado, int qntSoldado){
       int solCont = 0;

        cout << "Nome da tropa: "<< nometropa << endl;
        for (int i = 0 ; i < qntSoldado ; i ++){
            cout << " Soldado: " << i + 1 << endl;
            cout << soldados[i].nome << endl;
            cout << soldados[i].idade << endl;
        }
            cout << " nome do sargento: "<< sargento.nome << endl;
            cout << " idade do sargento: " << sargento.idade << endl;
        for (int i = 0 ; i < qntSoldado; i ++ ){
            if (soldados[i].nome == soldado){
                solCont++;
            }
        }
        if (solCont == 0){
            cout << " Soldado não encontrado no batalhao" << endl;
        }
        else{
            cout << " Soldado encontrado no batalhao, qnatidade de soldado com esse nome = " << solCont << endl;
        }

    }

    void Idade(string tropa, int idade, int qntSoldado){
        int cont = 0;
        for (int i = 0 ; i < qntSoldado ; i ++){
            if (soldados[i].idade == idade){
                cont++;
            }
            
        }
        cout << " A quantidade de soldados com essa idade é " << cont << endl;
    }

};

int main(){
    string tropa, soldado;
    int qntSoldado = 0;
    int idade = 0;
    Soldado so; 
    

    cout << " Informe quantos soldados terão na tropa" << endl;
    cin >> qntSoldado;
    Tropa t(qntSoldado);

    for (int i = 0 ; i < qntSoldado ; i ++ ){
        cout << " Informe o nome do soldado"<< endl;
        cin >> t.soldados[i].nome;
        cout << " Informe a idade do soldado" << endl;
        cin >> t.soldados[i].idade;
    }

    cout << " Informe o nome do sargento para comandar" << endl;
    cin >> t.sargento.nome;
    cout << " Informe a idade do sargento" << endl;
    cin >> t.sargento.idade;

    cout << " Informe o nome da tropa " << endl;
    cin >> tropa;
    tropa = t.nometropa;

    cout << " Agora, escreva o nome de um dos seus soldados, vamos verificar se ele pertence a tropa" << endl;
    cin >> soldado;
    
    cout << " Informe uma idade, vamos ver quantos soldados possuem essa mesma idade" << endl;
    cin >> idade;

    t.ImprimirDados(tropa, soldado, qntSoldado);
    t.Idade(tropa, idade, qntSoldado);
    return 0;
}



