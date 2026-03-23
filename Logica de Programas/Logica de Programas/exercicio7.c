#include  <stdio.h> 

float imc_pessoa(float peso, float altura);

void main ()
{
    float altura;
    float peso;
    float imc;

    printf("Digite seu peso e sua altura ");
    scanf("%f %f", &peso, &altura);
    imc = imc_pessoa(peso, altura);
    printf("%f %f %f ", peso, altura, imc);

    if (imc < 17 &&imc > 0)
    {
        printf("Muito Abaixo do Peso");
    }
    
    else if (imc >= 17 &&imc < 18.49)
    {
        printf("Abaixo do Peso");
    }
    
    else if (imc >= 18.5 &&imc < 24.99)
    {
        printf("Peso Moderado");
    }
    
    else if (imc >= 25 &&imc < 29.99)
    {
        printf("Acima do Peso");
    }
    
    else if (imc >= 30 &&imc < 34.99 )
    {
        printf("Voce Esta Obeso");
    }
    
    else if (imc >= 35 &&imc < 39.99)
    {
        printf("Voce tem Obesidade Grau II");
    }
    
    else if (imc > 40)
    {
        printf("Voce tem Obesidade Morbida(Grau III)");
    }
    
    else
    {
        printf("Numero Invalido");
    }
}

float imc_pessoa(float peso, float altura)
{
    float imc;
    imc = peso /(altura * altura);
    return imc;
}
 