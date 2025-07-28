/* Crie uma struct chamada "Aluno" que armazene os seguintes dados: matrícula (int), nome (string) e notas (array de floats). 
Crie uma função para preencher as notas de um aluno e outra função para calcular a média das notas.*/

# include <iostream> 
using namespace std; 
#include <string> 


struct Aluno{
    int matricula;
    string nome;
    float* notas;
};

void PreencherDados(Aluno &a, int qntNota){
    cout << " Informe o nome e matricula do aluno"<< endl; 
    cin >> a.nome >> a.matricula;
    a.notas = new float[qntNota];

    for (int i = 0 ; i < qntNota ; i++){
        cout << " Informe a "<< i + 1 << "Nota do aluno"<< endl;
        cin >> a.notas[i];
    }
}

float CalculaMedia(Aluno &a, int qntNota){
    int somatorio = 0;
    for( int i = 0 ; i < qntNota; i++){
        somatorio = somatorio + a.notas[i];
    }
    float resultado = somatorio/qntNota;
    return resultado;
}

void ImprimirDados(Aluno &a, int qntNota, float resultado ){
    cout << " O nome do aluno e"<< a.nome<< endl;
    cout << " A sua matricula é" << a.matricula << endl; 
    cout << " A suas notas são:" << endl; 
    for (int i = 0 ; i < qntNota ; i ++){
        cout << a.notas[i] << endl;
    }
    cout << " A media das notas: "<< resultado<<  endl;

}

int main(){
    Aluno a;
    int qntNota = 0;
    cout << " Informe a quantidade de notas que esse aluno irá receber"<< endl;
    cin >> qntNota;
    PreencherDados(a, qntNota);
    float resultado = CalculaMedia(a, qntNota);
    ImprimirDados(a, qntNota, resultado);
    return 0;
}