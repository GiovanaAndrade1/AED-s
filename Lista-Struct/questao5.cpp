/* Crie uma struct chamada "Círculo" que armazene o raio (float). 
Crie uma função para calcular a área do círculo e outra função para calcular o perímetro. */
#include <iostream> 
#include <cmath>
using namespace std;

struct Circulo{
    float raio;
};

void PreencherDados(Circulo &c){
    cout << " Informe o raio do circulo"<< endl; 
    cin >> c.raio;
}

int CalculaArea(Circulo &c){
    float area = 0;
    area = pow(c.raio,2) * M_PI;

    return area;
}

int CalculaPerimetro(Circulo &c){
    float perimetro = 0; 
    perimetro = 2 * M_PI * c.raio;

    return perimetro;


}

int main (){
    float area, perimetro;
    Circulo c; 
    PreencherDados(c);
    area = CalculaArea(c);
    perimetro = CalculaPerimetro(c);

    cout << " o valor da area é "<< area << endl;
    cout << " O valor do perimetro é" << perimetro << endl;
    return 0;

}