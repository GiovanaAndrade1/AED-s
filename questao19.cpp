/* Escreva um algoritmo em C++ que leia um vetor com 30 elementos representando as temperaturas diárias de um mês. 
O algoritmo deve calcular e imprimir:

1. A maior e a menor temperatura registrada no mês.
2. A média das temperaturas diárias.
3. A quantidade de dias em que a temperatura foi superior à média mensal.*/

#include <iostream> 
using namespace std;


int leituraDados(int *temperatura){
    for (int i = 0 ; i <5 ; i ++){
        cout << "Informe a "<< i + 1 << "temperatura";
        cin >> temperatura[i];
        }
        return 0;
    }
    int Maiortemperatura(int *temperatura){
       int maior = temperatura[0];
        for ( int i = 0 ; i < 5 ; i ++){
            if (temperatura[i] > maior){
                maior = temperatura[i];
            }
        }
        cout << " A maior temperatura é " << maior << endl;

        return 0;
    }
    int Menortemperatura(int *temperatura){
       int  menor = temperatura[0];
        for ( int i = 0 ; i < 5 ; i ++){
            if (temperatura[i] < menor){
                menor = temperatura[i];
            }
        }
        cout << " A menor temperatura é " << menor << endl;
        return 0;
    }
    int MediaTemperatura(int *temperatura){
        bool encontrado = false;
        int soma = 0;
        int resultado = 0;
        for (int i = 0; i < 5 ; i ++){
            soma = soma + temperatura[i];
            resultado = soma / 5;
        }
        cout << " A média das temperaturas é : " << resultado << endl;
        for (int i = 0 ; i < 5 ; i ++){
            if (resultado < temperatura[i]){
                cout << " A temperatura do dia"<< i + 1 << " marcando" << temperatura[i]<< " está maior que a média mensal" << endl;
                encontrado = true;
            }
        }
        if (!encontrado){
            cout<< " Nenhuma temperatura esta maior que a media"<< endl;
        }
        

        return 0;
    }





int main(){
    int *temperatura = new int[5];
    leituraDados(temperatura);
    Maiortemperatura(temperatura);
    Menortemperatura(temperatura);
    MediaTemperatura(temperatura);

    return 0;
}