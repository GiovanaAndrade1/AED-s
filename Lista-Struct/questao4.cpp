/* Crie uma struct chamada "Data" que armazene os seguintes dados: dia (int), mês (int) e ano (int). 
Crie uma função para verificar se uma data é válida.*/

# include <iostream>
using namespace std; 

struct Data{
    int dia;
    int mes;
    int ano;

};

void PreencherDados(Data &d){
    cout << " informe o dia mes e ano" << endl; 
    cin >> d.dia >> d.mes >> d.ano;

}
bool AnoBi(int ano){
    return ( ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

}
bool Validacao(Data &d){
    int diasdomes = 0;
    if ( d.ano < 1 ) return false;
    if ( d.mes < 1 || d.mes > 12) return false;

    switch (d.mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        diasdomes = 31;
        break;
    case 4: case 6: case 9: case 11: 
        diasdomes = 30;
        break;
    case 2:
        diasdomes = AnoBi(d.ano) ? 29 : 28;
        break;

    return false;


    }
    
return d.dia >= 1 && d.dia <= diasdomes;
    
}

int main(){
    Data d;
    PreencherDados(d);
    Validacao(d);

    if (Validacao(d)){
        cout << " Data válida" << endl;
    }
    else {
        cout <<" Data invalida"<< endl;
    }

}