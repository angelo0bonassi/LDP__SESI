#include <stdio.h>

int main (){
    int notaMaior, notaMenor;

    printf("Digite um numero maior e depois um menor ");
    scanf("%d %d", &notaMaior, &notaMenor);

    if (notaMaior == 0 && notaMenor == 0)
    {
        printf("0 nao pode nao ");
    } 
    else if (notaMaior >= notaMenor)
    {
        if(notaMaior % notaMenor == 0)
        {
            printf("nota maior e multiplo de nota menor");
        }
        
        else
        {
            printf("Nao e multiplo");
        }
    }
    
    else if (notaMaior < notaMenor)
    {
        printf("Ordem errada");
    }
}