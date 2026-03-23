#include <stdio.h>

void main(){
   int numero;


   printf("Digite um numero inteiro: ");
   scanf("%d", &numero);

   if( numero > 0)
   {
      printf("O numero e positivo");
   }
 
   else if (numero == 0)
   {
      printf("O numero nao pode ser 0");
   }
   
   else
   {
      printf("O numero e negativo");
   }


}