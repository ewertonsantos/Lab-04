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
    int maior2,i,aux;
    maior2 = 0;
    for(i=0;i<24;i++){
        if(ar[i] != '\0'){
           if(ar[i] >= maior2){
            maior2 = ar[i];
            aux = i;
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
        break;
    }
    if(n1 > 23 || n1 < 0){
        cout << "Informe um valor entre 1 e 23 ou 0 para sair" << endl;
        continue;
    }
    aux++;
    jogador[n1]++;
    }

    cout << "Resultado da votacao" << endl;
    cout << "Foram computados " << aux <<  " votos" << endl;
    cout << "Jogador -- Votos -- Porcentagem" << endl;

    for(i=0;i<24;i++){
        if(jogador[i] != '\0'){
            cout << i << "\t"  << jogador[i] << "\t"  << ApresentaPorcentagem(jogador[i],aux) << endl;
        }
    }
    maiorjog = Maior(jogador);
    cout << "O melhor jogador foi o numero " << maiorjog << " , com " << jogador[maiorjog] << " votos" << " , correspondendo a uma porcentagem de " << ApresentaPorcentagem(jogador[maiorjog],aux) << " % do total de votos" << endl;
}
