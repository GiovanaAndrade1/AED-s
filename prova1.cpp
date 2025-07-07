#include <iostream>
#include <math.h>
using namespace std;



int casos(int n1, int n2, int n3){
    if (n1 % 2 == 0 ){
        if (n3 % 2 == 0){
            cout << " Os numeros n1 e n3 são pares" << endl;
        }
        else{
            cout << " os numeros n1 e n3 não são pares"<< endl;
        }
    }
    else if(n3 =  n2 || n3 > n1){
        cout <<" Quintal" << endl;

    }
    else{
        return 25;
    }

    return 0;

}

int main(){
    int n1, n2, n3, resposta;
    cout << "Informe o valor de 3 numeros inteiros"<< endl;
    cin >> n1 >> n2 >> n3;
    resposta = casos(n1, n2, n3);

    if (resposta == 25){
        cout << "Prova legal" << endl;
    }
    else {
        cout << "feito" << endl;
    }


    return 0;

}