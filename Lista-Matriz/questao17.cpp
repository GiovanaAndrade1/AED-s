/* 17. Escreva um algoritmo em C++ que leia um conjunto de 50 fichas de produtos de um supermercado e armazene-as em vetores. 
Cada ficha deve conter o **nome**, o **preço** e a **categoria** do produto (um número de 1 a 10). O algoritmo deve calcular e imprimir:
    1. O produto mais caro e o mais barato.
    2. Os produtos da categoria 5 que possuem preço acima da média dos produtos dessa categoria.
    3. Os produtos que possuem preço abaixo da média geral de todos os produtos.*/

    #include <iostream>
    #include <string>
    using namespace std;

    int leituraDados(string *nome, float *preco, int *categoria){
        int cat = 0; 
        for (int i = 0 ; i < 5 ; i ++){
            cout << " Informe o nome do " << i + 1 << "produto:" << endl;
            cin >> nome[i];
            cout << " Informe o preco do "<< i + 1 << "produto:"<< endl;
            cin >> preco[i];
            cout  << " Informe a categoria do "<< i + 1 << "produto:"<< endl;
            cin >> cat;
                while (cat < 1 || cat > 10){
                    cout << " Somente numeros de 1 a 10!"<< endl;
                    cin >> cat;
                }
            categoria[i] = cat;
        

        }
        return 0;
        
    }


    float ProdutoCaro(float *preco){
        float maiscaro = preco[0];

        for (int i = 0 ; i < 5 ; i ++){
            if (maiscaro < preco[i]){
                maiscaro = preco[i];
            }
        }
        cout << " o produto mais caro  custa " << maiscaro << endl;
        return 0;
    }

    float ProdutoBarato(float *preco){
        float maisbarato = preco[0];

        for (int i = 0 ; i < 5 ; i ++){
            if (maisbarato > preco[i]){
                maisbarato = preco[i];
            }
        }
        cout << " O produto mais barato custa" << maisbarato << endl;
        return 0;
    }
    float MediaCategoria(string *nome, float *preco, int *categoria){
        float soma = 0;
        bool encontrou = false;
        int cont = 0;
        for (int i = 0 ; i < 5 ; i++){
            if ( categoria[i] == 5){
                soma = soma + preco[i];
                cont++;
            }
        }
        float resultado = soma/ cont;
        for (int i = 0 ; i < 5 ; i ++){
            if ( preco [i] > resultado){
                cout << " O produto " << nome[i] << " está acima da média!" <<endl;
                encontrou = true;
            }
        }
        if (!encontrou){
            cout << " Não existe produto acima da media!"<< endl;
        }
        return 0;

    }
    float MediaGeral(string *nome, float *preco){
        bool encontrou = false;
        float soma = 0, resultado = 0;
        for (int i = 0 ; i < 5 ; i ++){
            soma = soma + preco[i];
            resultado = soma / 5;

        }
        for (int i = 0 ; i < 5 ; i ++){
            if (resultado > preco[i]){
                cout << " os produtos "<< nome[i]<< " estão com os precos abaixo da media"<< endl;
                encontrou = true;
            }
        }
        if (!encontrou){
            cout << " Nao existe produtos abaixo da media"<< endl;
        }
        return 0;
    }



    






    int main(){
        string *nome = new string[5];
        float *preco = new float[5];
        int *categoria = new int[5];
        leituraDados(nome, preco, categoria);
        ProdutoBarato(preco);
        ProdutoCaro(preco);
        MediaCategoria(nome, preco, categoria);
        MediaGeral(nome, preco);
        return 0;
    }