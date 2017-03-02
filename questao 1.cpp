#include <iostream>
#include <stdio.h>
#include <libio.h>

using namespace std;

int main(){

    int a, maior;
    maior = 0;


    do{
        printf("digite um numero e digite 0 para calcular: \n");
        scanf("%d", &a);
        if (a>maior){
            maior = a;

            }



    }while(a!=0);

    cout << "o maior numero eh: "<< maior <<  endl;



    return 0;
}
