#include<stdio.h>
int main(void){
    float x=0, y=0, resultado=0;
    int op=0;
    do{
        printf("\n\t1 - Somar\n\t2 - Subtrair\n\t3 - Multiplicar\n\t4 - Divis�o");
        scanf("%i", &op);
        printf("\nPrimeiro N�mero: ");
        scanf("%f", &x);
        printf("\nSegundo N�mero: ");
        scanf("%f", &y);
        switch(op){
            case 1:
                resultado = x+y;
                break;
            case 2:
                resultado = x-y;
                break;
            case 3:
                resultado = x*y;
                break;
            case 4:
                resultado = x/y;
                break;
            default:
                printf("\n Op��o Inv�lida.\n");
                break;
        }
        printf("\n\t O resultado �: %0.2f", resultado);
        printf("\n Digite 1 para continuar: ");
        scanf("%i", &op);
    }while(op==1);
}
