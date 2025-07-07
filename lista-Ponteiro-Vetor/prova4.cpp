# include <iostream>
using namespace std;


int funcfatorial(int fatorial){
    if( fatorial < 0 || fatorial > 10){
        return 0;

    }
    else{
        if( fatorial == 0 ) {
            return 1;
        }
        else {
        
            return fatorial * funcfatorial(fatorial - 1);
        }
    }
   
}

int FuncVetor(int *vetor, int tam){
    int i;
    for (i = 0 ; i < 10 ; i ++){
        vetor[i] = funcfatorial(i + 1 );
    }

    return vetor[i];
    
}

int main(){
    int n;
    int fatorial, resultado;
    int *vetor = new int [10];
    cout << funcfatorial(3);
    resultado = FuncVetor(vetor, 10);  
    cout << " Informe um numero"<< endl;
    cin >> n;

        if (n > 10 || n < 1 ){
            cout << "não armazenado"<< endl;
        }
        else{
                cout << " o valor armazenado é " << vetor[n - 1];

        }






    return 0;
}