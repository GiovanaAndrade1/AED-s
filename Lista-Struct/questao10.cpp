/* Crie uma struct chamada "Vetor" que armazene as coordenadas x, y e z. Adicione um método para calcular
 o produto escalar entre dois vetores. Adicionar um método significa colocar a função dentro da struct*/

#include <iostream>
#include <cmath>
using namespace std;

 struct Vetor{
    int x;
    int y;
    int z;

    int Escalar(Vetor vetor2){
       return  x * vetor2.x + y * vetor2.y + z * vetor2.z;
    
    }
      

 };

 Vetor PreencherDados(int numero){
    Vetor v;
    cout << " Informe os valores do vetor"<< numero << endl;
    cin >> v.x >> v.y >> v.z;
    return v;
    
}

 int main(){

    Vetor v1 = PreencherDados(1);
    Vetor v2 = PreencherDados(2);

    cout << " O produto escalar do vetor é" << v1.Escalar(v2) << endl;
    return 0;
 }