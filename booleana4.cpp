#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornabool(){

   return true;

}

int main(){

    bool variavelbool;


    variavelbool = retornabool();

    if(variavelbool){
        printf("verdadeiro");

    }else{
        printf("falso");

    }




    printf("%d", variavelbool);


    return 0;


}
