/* Crie uma struct chamada "Funcionário" que armazene o nome (string), salário (float) e data de admissão 
(struct "Data" com dia, mês e ano). Adicione métodos para calcular o tempo de serviço (em anos) do funcionário 
e para reajustar o salário com base em um percentual fornecido.*/

#include <iostream>
#include <string>
using namespace std;

struct Data{
    int dia; 
    int mes; 
    int ano;
};

struct Funcionario{
    string nome; 
    float salario; 
    Data dataAdmissao;


    int TempoServico(){
        return 2025 - dataAdmissao.ano;

    }

    float Reajuste(float porcentagem){
        float resultado = salario + (salario * (porcentagem/ 100));
        return resultado;

    }



};




int main(){
   Funcionario f;
   char opcao; 
   float porcentagem;
   
   

   cout <<" Informe o nome do funcionario" << endl;
   cin >> f.nome;

   cout << " Informe o seu salario" << endl; 
   cin >> f.salario;

   cout << "Informe a data de admissão (dia, mes, ano)" << endl;
   cin  >> f.dataAdmissao.dia >> f.dataAdmissao.mes >> f.dataAdmissao.ano;


   cout << " O tempo de serviço trabalhado foi"<< f.TempoServico() << " anos " << endl;
   

   do{ 
    cout << " Deseja reajustar o salário do funcionario? S - sim , N - nao" << endl;
    cin >> opcao;
    if (toupper(opcao) == 'S'){
        cout << " Informe o valor do reajuste em porcentagem "<< endl; 
        cin >> porcentagem; 
        cout << " O novo salário será: " << f.Reajuste(porcentagem) << endl;
    }
    else { 
        cout << " Encerrando o programa" << endl;
    }
   }while(opcao == 'S' || opcao == 's');




    return 0;
}
