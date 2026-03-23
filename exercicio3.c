#include <stdio.h>

void main(){
    int numero1, numero2, numero3;
    
    
    
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    if (numero1 > numero2 &&numero3)
    {
        printf("O numero %d e maior que %d e %d.\n", numero1, numero2, numero3);
    }
    
    else if (numero2 > numero1 &&numero3)
    {
        printf("O numero %d e maior que %d e %d.\n", numero2, numero1, numero3);
    }
    
    else if (numero3 > numero1 &&numero2)
    {
        printf("O numero %d e maior que %d e %d.\n ", numero3, numero1, numero2);
    }
    
    else
    {
        printf("Os numero sao iguais");
    }






}
