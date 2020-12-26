#include<stdio.h>
int main(void){
    float x=0, y=0, resultado=0;
    int op=0;
    do{
        printf("\n\t1 - Somar\n\t2 - Subtrair\n\t3 - Multiplicar\n\t4 - Divisão");
        scanf("%i", &op);
        printf("\nPrimeiro Número: ");
        scanf("%f", &x);
        printf("\nSegundo Número: ");
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
                printf("\n Opção Inválida.\n");
                break;
        }
        printf("\n\t O resultado é: %0.2f", resultado);
        printf("\n Digite 1 para continuar: ");
        scanf("%i", &op);
    }while(op==1);
}
