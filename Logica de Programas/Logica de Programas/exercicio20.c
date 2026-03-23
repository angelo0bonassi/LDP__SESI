#include <stdio.h>

int main()
{

    int ladoDeTriangulosIguais;
    
    printf("Quantos lados tem seu triangulo? ");
    scanf("%d", &ladoDeTriangulosIguais);

    if(ladoDeTriangulosIguais == 3)
    {
        printf("Seu triangulo e equilatero.");
    }
    
    else if(ladoDeTriangulosIguais == 2)
    {
        printf("Seus triangulo e isoceles.");
    }
    
    else if (ladoDeTriangulosIguais < 1 || ladoDeTriangulosIguais > 3)
    {
        printf("Seu triangulo nao pode ter mais lados que 3 ou menos que 1");
    }
    
    else 
    {
        printf("Seu triangulo e escaleno");
    }

    return 0;
}