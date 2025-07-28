/* Crie uma struct chamada "Retângulo" que armazene os seguintes dados: largura (float) e altura (float). 
Crie uma função para calcular a área do retângulo e outra função para calcular o perímetro.*/

#include <iostream> 
using namespace std;


struct Retangulo {
    float altura; 
    float largura;
};

int PreencherDados( Retangulo &r) {
    cout << " Informe a altura e largura do triangulo"<< endl;
    cin >> r.altura >> r.largura;
    return 0;
}

float CalculaArea(Retangulo &r){
    float Area = 0; 
    Area = r.altura * r.largura;
    return Area;
}

int CalculaPerimetro(Retangulo &r){
    float perimetro = 0; 
    perimetro = (2 * r.altura) + (2 * r.largura);
    return perimetro;
}

void ImprimirDados(Retangulo &r, float Area, float Perimetro){
    cout << " O valor da area do triangulo é" << Area << endl;
    cout << " O valor do perimetro do triangulo é" << Perimetro << endl;


}

int main(){
    Retangulo r;
    PreencherDados(r);
    float Area = CalculaArea(r);
    float Perimetro = CalculaPerimetro(r);
    ImprimirDados(r, Area, Perimetro);

    return 0;
}