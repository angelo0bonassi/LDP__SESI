#include <stdio.h>

void main(){
    int numero1, numero2;
    
    
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2 )
    {
        printf("O numero %d e maior que %d.\n", numero1, numero2);
    }
    
    else if ( numero1 == numero2)
    {
        printf("Os numeros %d e %d são iguais.\n", numero1, numero2);
    }
    
    else
    {
        printf("O numero %d e maior que %d.\n ", numero2, numero1);
    }






}
