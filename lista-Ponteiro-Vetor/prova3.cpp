#include <iostream>

using namespace std;


int Func(int n){
    float media, somaMedia;
    float *vetor = new float[n];
    float *novoVetor = new float[n];

    for (int i = 0 ; i < n ; i ++){
        cout << " Informe os numeros dentro do vetor"<< endl;
        cin >> vetor[i];
    }

    // Dividir e armazenar em outro vetor
    for (int i = 0 ; i < n ; i ++){
        novoVetor[i] = vetor[i] / 3;
    }

    // Valor medio
    for (int i = 0 ; i < n ; i ++){
        somaMedia = somaMedia + novoVetor[i];
    }
    media = somaMedia / n;

    //imprimir valores maior que a media
    for (int i = 0 ; i < n ; i ++){
        if (novoVetor[i] > media){
            cout << " Os valor" << novoVetor[i] << "È maior que a media"<< endl;
        }
    }
    cout <<" o penultimo numero é" << novoVetor[n - 1] << endl;
    
    return 0;
}





int main (){
    int n;
    cout << " Informe a quantidade de posições no vetor"<< endl;
    cin >> n;
    Func(n);

    return 0;

}
