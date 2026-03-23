#include <stdio.h>

int ehMaior(int a, int b)
{
   
   if (a > b)
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

    int valA, valB;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &valA, &valB);

    if (ehMaior(valA, valB))
    {
        printf("%d e maior que %d", valA, valB);
    }
    
    else
    {
        printf("%d e maior que %d", valB, valA);
    }


}