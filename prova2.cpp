#include <iostream>
#include <math.h>
using namespace std;

int main(){
    char resposta;
    float salarioatual,novosalario;

    cout << "Deseja alterar algum salario? " << endl;
    cin >> resposta;

    if ( resposta == 'N'){
        cout << " Finalizado" << endl;
    }
    else{

        cout << " Informe seu salário atual" << endl;
        cin >> salarioatual;

        if (salarioatual > 1500 && salarioatual < 2500 ){
            novosalario = salarioatual  * 1.12;
            
        }
        else if (salarioatual >= 2500 && salarioatual < 3000) {
            novosalario = salarioatual * 1.1;
            
            
        }
        else if( salarioatual >= 3000){
            novosalario = salarioatual * 1.05;
           
        }
        else {
            novosalario = salarioatual * 1.15;
            
        }
        cout << "O seu novo salário é: R$" << novosalario << endl;
    }
    return 0;
}