#include <stdio.h>
#include <stdlib.h>


int main(){
int a, b, c;
printf("Digite os 3 numeros: ");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

if(a > b < c){
    printf("%d", a);

}else if(b > a < c){
    printf("%d", b);

}else{
    printf("%d", c);
}

}
