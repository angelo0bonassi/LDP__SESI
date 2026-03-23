#include <stdio.h>

int ehPar(int numero)
{
    
    if (numero % 2 == 0)
    {
        return 1;
    }
    
    else 
    {
        return 0;
    }
}

int main()
{

    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    if (ehPar(valor))
    {
        printf("%d e par", valor);
        printf("\n numero de return: %d", ehPar(valor));
    }
        
    else
    {
        printf("%d e impar", valor);
        printf("\n numero de return: %d", ehPar(valor));
    }

        return 0;
}
