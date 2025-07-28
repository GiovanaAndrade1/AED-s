#include <iostream>
#include <string>
using namespace std;

struct Carro{
    string marca; 
    string modelo;
    int ano;

   void exibir(){
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl; 
    cout << "Ano: " << ano << endl; 
   }
};

void PreencherDados(Carro &c){
    cout << "Informe a marca do carro: ";
    cin >> c.marca;

    cout << "Informe o modelo do carro: ";
    cin >> c.modelo;

    cout << "Informe o ano do carro: ";
    cin >> c.ano;
}

int main(){
    Carro c; 
    PreencherDados(c);

    cout << "Mostrar dados:" << endl;
    c.exibir();

    return 0;
}
