# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){

    setlocale(LC_ALL, "");
    printf("Ol� ");

    int a = 50;
    printf("%d",a);
    printf(" O valor de a � = %d \n", a);
    scanf("%d", &a);
    printf("\n \n O valor de a mudou para: %d ", a);

    float b = 13.10;
    printf(" \n \n O valor de b � = %f \n", b);
    scanf("%f", &b);
    printf("\n O valor de b mudou para: %f ", b);

    char letra = 'c';
    printf("\n \n O valor de c � = %c \n", letra);
    fflush(stdin);
    scanf("%c", &letra);
    printf("\n O valor de c mudou para: %c ", letra);

}
