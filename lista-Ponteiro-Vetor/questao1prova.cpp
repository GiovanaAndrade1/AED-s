//receber continuamente a entrada do usuario, conte e imprima quantos numeros que quando divididos por 17 dão o resto multiplo de 5 o resto e os numeros multiplos de 3 conjuntamente

#include <iostream>

using namespace std; 

int funcDados(){
    int num, multiplos, multiplosT;
        cout << " Informe um numero: "<< endl;
        cin >> num;

    while(num != 0){
    
        if (num % 17 != 0){
            if (num % 5 == 0)
            multiplos = multiplos + 1;
            
    }
    else if(num / 3 == 0) {
        if (num % 17 != 0){
            if (num % 3 == 0)
            multiplosT = multiplosT + 1;
        }
    
    
    }
    }

    
    cout<< " A quantidade de numeros quando divididos por 17 possem um resultado multiplo de 5 são"<< multiplos << endl;
    cout << " a Quantidade de numeros divisiveis por 3 e quando divididos por 17 possuem um resto multiplo de 3 são "<< multiplosT<< endl;


    return 0;


}

int main(){
    funcDados();

}