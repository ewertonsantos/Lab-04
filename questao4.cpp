#include <iostream>
#include <stdlib.h>
using namespace std;

int jogador[24];

float ApresentaPorcentagem(int a,int b)
{
    float porcentagem;
    porcentagem = (float)a/b;
    return porcentagem*100;
}
int Maior(int ar[])
{
    int maior2,i,aux;                                     // percorre todos os jogadores e procura qual teve maior votação
    maior2 = 0;
    for(i=0;i<24;i++){
        if(ar[i] != '\0'){                                // senao for vazio ou seja se tiver recebido votos
           if(ar[i] >= maior2){                           // compara com um maior2 que é uma variável auxiliar
            maior2 = ar[i];                               // se for maior que a variavel maior2 auxiliar ela recebe o ar[i]
            aux = i;                                        // este auxiliar foi usado para fixar a posicao do array com maior votação
           }
        }
    }
    return aux;
}

int main()
{
    int n1,aux=0,i,maiorjog;

    cout << "Enquete: Quem foi o melhor jogador" << endl << endl;
    cout << "Os jogadores sao numerados de 1 a 23" << endl;

    while(1){
    cout << "Numero do jogador (0=fim): " << endl;
    cin >> n1;
    if(n1 == 0){
        break;                                                          // sai do while quando apertar '0'

    }
    if(n1 > 23 || n1 < 0){
        cout << "Informe um valor entre 1 e 23 ou 0 para sair" << endl;
        continue;                                                       // volta para o inicio do while se digitado
    }                                                                   // algum numero fora do escopo
    aux++;
    jogador[n1]++;
    }

    cout << "Resultado da votacao" << endl;                             // declara o final da votação
    cout << "Foram computados " << aux <<  " votos" << endl;            // numero total de votos
    cout << "Jogador -- Votos -- Porcentagem" << endl;                  // cabecario para a tabela

    for(i=0;i<24;i++){                                                  // percorre todo o array imprimindo cada jogador
        if(jogador[i] != '\0'){                                         // com o numero e a porcentagem de votos dele
            cout << i << "\t"  << jogador[i] << "\t"  << endl;
            cout << "" << ApresentaPorcentagem(jogador[i],aux) << endl;
        }
    }
    maiorjog = Maior(jogador);
    cout << "O melhor jogador foi o numero " << maiorjog << " , com " << jogador[maiorjog] << " votos" << " , correspondendo a uma porcentagem de " << ApresentaPorcentagem(jogador[maiorjog],aux) << " % do total de votos" << endl;
}
