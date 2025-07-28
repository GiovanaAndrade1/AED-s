/*Seja a seguinte matriz (6x6) abaixo:
1. Faça uma função que determine a coluna que possui o maior somatório.
2. Faça uma função que determine a linha de maior somatório. 
3. Faça uma função que percorra a matriz e quando ele encontrar um valor maior que 10,
ele troque pelo valor 10.*/

# include <iostream> 
using namespace std; 


int PreencherMatriz(int **matriz){
    cout << " Informe os numeros dentro da matriz"<< endl; 
    for (int l = 0 ; l < 3 ; l++){
        for ( int c = 0 ; c < 3 ; c ++){
            cout << " Matriz [" << l << "] [" << c << "]: ";
            cin >> matriz[l][c];
        }
    }
    return 0;
}

int colunaSomatorio(int **matriz){
        int maiorsoma = 0;
        int indicec = 0;

    for (int c = 0 ; c < 3 ; c++){
         int somatorio = 0;

    for (int l = 0 ; l < 3 ; l ++){
        somatorio = somatorio + matriz[l][c];
    }

    cout << " Soma da coluna "<< c <<  " : " << somatorio<< endl;
    if (c== 0 || somatorio > maiorsoma){
        maiorsoma = somatorio;
        indicec = c;
        
    }

        }
    cout << " A coluna que possui a maior soma é : " << indicec << " com :" << maiorsoma << endl;
        return 0;
    }

    int LinhasSomatorio(int **matriz){
        int maiorsoma = 0; 
        int indiceL = 0;

        for (int l = 0 ; l < 3 ; l ++){
            int somatorio = 0; 

            for (int c = 0 ; c < 3; c ++){
                somatorio = somatorio + matriz[l][c];
            }
            cout << " Soma da Linha "<< l << ": " << somatorio<< endl;
            if (l == 0 || maiorsoma < somatorio){
                maiorsoma = somatorio;
                indiceL = l;
            }
        }
        cout << " A linha que possui a maior soma é : " << indiceL << " com :" << maiorsoma << endl;

        return 0;
    }

    int AtualizarMatriz(int **matriz){
        for (int l = 0 ; l < 3 ; l ++){
            for (int c = 0 ; c < 3 ; c ++){
                if (matriz[l][c] > 10 ){
                    matriz[l][c] = 10;
                }

            }
        }
        cout << " Matriz sem valores maiores que dez"<< endl; 
        for ( int l = 0 ; l < 3 ; l++){
            for (int c = 0 ; c <3 ; c++){
                cout << matriz[l][c] << "\t";
            }
            cout << endl;
        }
        return 0;
    }

int main(){
    int **matriz;
    matriz = new int*[3]; 
    for (int i = 0 ; i < 3 ; i ++){
        matriz[i] = new int[3];
    }
     PreencherMatriz(matriz);
    colunaSomatorio(matriz);
    LinhasSomatorio(matriz);
    AtualizarMatriz(matriz);
    return 0;
}