#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <libio.h>
#include <time.h>


using namespace std;

int main(){

int a,x;

srand(time(NULL));
x = (rand() % 100);

    while(x!=a){
    cout << "Adivinhe o numero: " << endl;
    cin >> a;
    if(a>x){
    cout << "muito alto" << endl;
    }else if(a<x){
    cout <<"muito baixo"<< endl;
    }else if(x=a)
    cout <<"parabens! voce acertou"<<endl;

    }
    return 0;
}
