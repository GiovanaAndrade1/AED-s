/*Suponha que está matriz seja um terreno, ou seja, uma matriz de elevação, onde cada
posição dela represente a elevação do terreno naquele ponto.
O dono deste terreno deseja, construir sua casa na região colorida, por isso ele deseja aplainar esta região na altura 10.
1. Quanto de terra ele retirará de seu terreno? Atenção: Não esqueça de computar as células do terreno que receberão terra.
2. Suponha agora que o dono decidiu fazer uma grande piscina nesta área de profundidade 5 metros em relação a borda mais alta.
 Quanto de terra ele deverá retirar do seu terreno? Toda a borda deve ser aterrada à mesma altura.*/

int Nivelamento(int **terreno){
    int tira_qnt = 0; 
    int bota_qnt = 0;
    for (int i = 2 ; i <= 5 ; i ++){
        for (int j = 3 ; j < = 5 ; j ++ ){
            if ( terreno[i][j] < 10 ){
                tira_qnt = terreno[i][j] - 10;
                terreno[i][j] = 10;
                cout << " A parte do terreno "<< i<< ","<< j << " teve que ser retirada" << tira_qnt << " de terra "<<  endl;
            }
            else {
                bota_qnt = 10 - terreno[i][j];
                terreno[i][j] = 10;
                cout << " A parte do terreno "<< i<< ","<< j << " teve que receber"<< bota_qnt << " de terra " << endl;
            }
        }
    }
    return 0;
}

int Piscina(){
    int maior_borda = 0 ;
    for (int i = 2 ; 1 <= 5 ; i++){
        for( int j = 3 ; j <= 5 ; j++){
            if ( i == 2 || i == 5 || j == 3 || j == 5 ){
                if (terreno[i][j] > maior_borda){
                    maior_borda = terreno[i][j];
                }
            }

        }
    }
    fundo = maior_borda - 5;

    int soma_terra = 0; 

    
    }

 int main(){
    // Definindo as dimensões da matriz
    int linhas = 6;
    int colunas = 7;

    // Criando a matriz dinamicamente
    int** terreno = new int*[linhas];
    for (int i = 0; i < linhas; i++) {
        terreno[i] = new int[colunas];
    }

    // Preenchendo a matriz com os valores fornecidos
    int valores[6][7] = {
        {1, 3, 3, 5, 6, 7},
        {2, 1, 2, 5, 7, 9},
        {2, 4, 5, 9, 2, 15},
        {5, 8, 8, 2, 13, 12},
        {5, 6, 5, 8, 14, 16},
        {5, 5, 7, 12, 14, 15}
    };

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            terreno[i][j] = valores[i][j];
        }
    }
    return 0;
 }