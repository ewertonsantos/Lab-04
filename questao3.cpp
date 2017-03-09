#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main(){

int n,d, i;
cout << "Ola, digite o numero de vezes que deseja jogar o dado: " << endl ;
cin >> n;




    for(i=0;i<n; i++){
    //srand(time(NULL));
    d = (rand() % 6);
    d = d +1;
    //d= d/10;
    cout << "O numero foi: " << d <<endl;
    }

return 0;
}
