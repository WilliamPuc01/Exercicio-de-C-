#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>

using namespace std;


int main(){



    int vetor[3], cont, i, j;

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;


    for(cont = 0; cont < 3; cont++){

        cout << vetor[cont] << "\n";


    }

    cont = 0;

    while( cont < 3){

        cout << vetor[cont] << "\n";
        cont++;


    }


    int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
     for(i = 0; i < 3; i++){
         for(j = 0; j < 3; j++){
            cout << matriz[i][j] ;


    }
    cout << "\n";
     }
  return 0;
}
