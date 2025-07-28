/* Crie uma struct chamada "Jogo" que armazene o nome (string), a plataforma (string) e a nota (float) de um jogo. Adicione métodos para permitir que os usuários avaliem o jogo
 (adicionando uma nota) e para calcular a média das notas recebidas.*/

#include <iostream> 
using namespace std;
#include <string>

struct Jogo{

    string nome;
    string platarforma;
    int nota;
    float resultado = 0;
    int cont = 0;

    void Avaliacao(){
        cout << " Avalie o jogo com uma nota " << endl;
        cin >> nota;
        resultado = resultado + nota;
        cont = cont + 1;
    }

    float Media(){
        if ( cont == 0){ 
            return  -1;
        }
        else {
            return resultado / cont;
        }
        
    }
};

int main(){
    Jogo j;
    char opcao;

    cout << " Bem vindo a platarforma de avaliações! por favor sinta-se a vontade para voces e seus amigos avaliarem o jogo" << endl;
    cout << " Primeiro, insira os dados do jogo desejado" << endl;
    cout << " Nome do jogo: "<< endl;
    getline(cin, j.nome);
    cout << " Platarforma:" << endl;
    getline(cin, j.platarforma);

    do{
        cout << " Deseja Avaliar calcular media ou sair  ?  A - avaliar ; C - calcular media e S - Sair" << endl;
        cin >> opcao;
        switch (toupper(opcao)){
            case 'A':

                j.Avaliacao();

                break;

            case 'C': 
            float media;
                media = j.Media();
                if (media == -1){
                    cout << " Não existe notas para calcular a media" << endl;
                }
                else{ 
                    cout << " O valor da media é " << media << endl;

                }
                break;

            case 'S': 

                cout << "Saindo do programa"<< endl;

                break;

            default: 

                cout << "Valor errado, tente dnv" << endl;
                
                break; 
            }
        } while( opcao != 'S' && opcao != 's');
        return 0;
    }
    
    


