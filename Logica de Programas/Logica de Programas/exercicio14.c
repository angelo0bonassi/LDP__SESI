#include <stdio.h>

int main()
{
     int moedasDe1, notasDe10, notasDe100, resto, saldoRetirado;

     printf("Quanto de saldo voce quer retirar? ");
     scanf("%d", &saldoRetirado);

     resto = saldoRetirado % 100;
     notasDe100 = (saldoRetirado - resto) / 100;
     notasDe10 = (resto - (resto % 10)) / 10;
     moedasDe1 = resto % 10;


     printf("Moedas de 1: %d\n", moedasDe1);   
     printf("Notas de 10: %d\n", notasDe10);   
     printf("Notas de 100: %d\n", notasDe100);   

     return 0;
}