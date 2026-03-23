#include <stdio.h>

void main()
{

    float valor_compra, resto;

    printf("Qual foi o valor da compra? ");
    scanf("%f", &valor_compra);

    if (valor_compra <= 30)
    {
        printf("A compra nao tera desconto");
    }
    
    else if (valor_compra <= 100)
    {
        resto = valor_compra - (valor_compra * 0.10);
        printf("Voce obteve desconto em sua compra: %.2f", resto);
    }
    
    else if (valor_compra <= 500)
    {
        resto = valor_compra - (valor_compra * 0.19);
        printf("Voce obteve desconto em sua compra: %.2f", resto);
    }
    
    else if (valor_compra >501 && valor_compra < 1200)
    {
        resto = valor_compra - (valor_compra * 0.24);
        printf("Voce obteve desconto em sua compra: %.2f", resto);
    }
    
    else if (valor_compra <= 3000)
    {
        resto = valor_compra - (valor_compra * 0.27);
        printf("Voce obteve desconto em sua compra: %.2f", resto);
    }

}