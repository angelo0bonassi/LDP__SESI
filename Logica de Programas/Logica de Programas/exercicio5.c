#include <stdio.h>
void main(){
    int opcao;
    float num1, num2;

    printf("___________________________________\n");
    printf("_____________1-Soma________________\n");
    printf("_____________2-Subtracao___________\n");
    printf("_____________3-Multiplicacao_______\n");
    printf("_____________4-Divisao_____________\n");
    printf("___________________________________\n");

    printf("Digite um numero inteiro:  ");
    scanf("%f %f", &num1, &num2);
  
    printf("escolha uma opcao:  ");
    scanf("%d", &opcao);

    
    switch (opcao)
    {
        case 1:
            printf("%.2f", num1 + num2);
            break;

        case 2:
            printf("%.2f", num1 - num2);    
            break;

        case 3:
            printf("%.2f", num1 * num2);
            break; 

        case 4:
            printf("%.2f", num1 / num2);
            break;
            
        default:
        printf("opcao invalida");    

    }  



 }