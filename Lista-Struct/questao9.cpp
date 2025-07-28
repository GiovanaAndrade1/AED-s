/*Crie uma struct chamada "Triângulo" que armazene as coordenadas de três pontos: A, B e C. 
Adicione um método para calcular a área do triângulo. Adicionar um método significa colocar a função dentro da struct*/
#include <iostream>
#include <cmath>
using namespace std;

struct Calculo{
    int x; 
    int y;
};

struct Triangulo{
     Calculo PontoA; 
     Calculo PontoB;
     Calculo PontoC;

     double CalculaArea(){
        return 0.5 * fabs(PontoA.x * ( PontoB.y - PontoC.y )+
                        PontoB.x * (PontoA.y - PontoC.y)+
                        PontoC.x * (PontoA.y - PontoB.y));
        

     }
};

void PreencherDados(Triangulo &t){
    cout << " Digite as cordenadas x e y do  PontoA " << endl;
    cin >> t.PontoA.x >> t.PontoA.y;

    cout << " Digite as cordenadas x e y do  PontoB" << endl;
    cin >> t.PontoB.x >> t.PontoB.y;

    cout << " Digite as cordenadas x e y do  PontoC " << endl;
    cin >> t.PontoC.x >> t.PontoC.y;



}

int main(){
    Triangulo t;
    PreencherDados(t);
    cout << " A Area do triangulo é " << t.CalculaArea() << endl;
    return 0;
  

}



