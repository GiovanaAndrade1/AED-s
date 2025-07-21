/*16. Escreva um algoritmo em C++ que leia um conjunto de 50 fichas de funcionários de uma empresa e armazene-as em vetores. Cada ficha deve conter o nome, o salário e o código do setor (um número de 1 a 5).
 O algoritmo deve calcular e imprimir:
    1. O maior e o menor salário da empresa.
    2. A média salarial de cada setor.
    3. Os funcionários com salários abaixo da média salarial da empresa.*/

#include <string>
#include <iostream> 
using namespace std;

int leituraDados(string *nome, float *salario, int *cod){
    int codigo = 0;
    for (int i = 0 ; i < 5 ; i ++){
        cout << "Informe o nome da "<< i + 1 << "Ficha: "<< endl;
        cin >> nome[i];
        cout << " Informe o salario da "<< i + 1 << "Ficha: " << endl;
        cin >> salario[i];
        cout << " Informe o código da "<< i+ 1 << "ficha: " << endl;
        cin >> codigo;
        while ( codigo < 1 || codigo > 5){
            cout << " tente de novo,  numero de 1 a 5 "<< endl;
            cin >> codigo;
        }
        cod[i] = codigo;

        }

return 0;
    }
    


    int main(){
        string *nome = new string[5];
        float *salario = new float[5];
        int *cod = new int[5];


        

        return 0;
    }