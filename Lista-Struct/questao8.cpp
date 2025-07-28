/* Crie uma struct chamada "Ponto2D" que armazene as coordenadas x e y. 
Adicione um método para calcular a distância entre dois pontos. Adicionar um método significa colocar a função dentro da struct*/

#include <iostream>
#include <cmath>
using namespace std;

struct Ponto2D {
    float x, y;

    // Método para calcular a distância até outro ponto
    float distancia(Ponto2D p) {
        float dx = x - p.x;
        float dy = y - p.y;
        return sqrt(dx * dx + dy * dy);
    }
};

// Função para ler um ponto
Ponto2D PreencherDados(int numero) {
    Ponto2D p;
    cout << "Digite as coordenadas do ponto " << numero << ":\n";
    cout << "  x: ";
    cin >> p.x;
    cout << "  y: ";
    cin >> p.y;
    return p;
}

int main() {
    Ponto2D ponto1 = PreencherDados(1);
    Ponto2D ponto2 = PreencherDados(2);

    float d = ponto1.distancia(ponto2);
    cout << "A distância entre os pontos é: " << d << endl;

    return 0;
}
