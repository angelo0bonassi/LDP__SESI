#include <stdio.h>
#include <math.h>

int main()
{

    float juros = 0.15;
    float financiamento;
    int parcelas;
    
    printf("Digite o valor do fianciamento: ");
    scanf("%f", &financiamento);
    printf("Digite o numero de parcelas: ");
    scanf("%d", &parcelas);

    juros = (juros * financiamento);
    printf("Seu financiamento: %.2f\nSeu juros: %.2f\nFinanciamento com juros: %.2f\n",financiamento, juros, financiamento + juros);

    return 0;
}