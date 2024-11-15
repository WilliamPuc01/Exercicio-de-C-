#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

    setlocale(LC_ALL, "");


    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);



    printf(" O resultado da primeira prova foi: %f \n O resultado da segunda prova foi: %f \n A média : %f", nota1, nota2, (nota1 + nota2)/2);


}
