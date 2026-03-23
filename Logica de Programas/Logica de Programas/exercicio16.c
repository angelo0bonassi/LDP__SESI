#include <stdio.h>

float IMC_ps(float peso, float altura);
float Media(float num1, float num2);

int EHpi(int (numero))
{
    if (numero % 2 == 0)
    {
        return 0;
    }
    
    else
    {
        return 1;
    }
}

int main()
{
    float imc;
    float media;
    float num1, num2;
    float peso, altura;
    int par_impar;
    int opcao , valor;

    while (opcao != 4)
    {
        printf("\n_______________________________\n");
        printf("\n_____________1-IMC_____________\n");
        printf("\n_____________2-Media___________\n");
        printf("\n_____________3-Par_Impar_______\n");
        printf("\n_______________________________\n");
        printf("Escolha uma Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Digite seu peso e altura: ", peso, altura);
                scanf("%f %f", &peso, &altura);
                imc = IMC_ps(peso, altura);
                printf("Imc: %.2f", imc);
                break;

            case 2:
                printf("Digite suas notas: ", num1);
                scanf("%f %f", &num1, &num2);
                media = Media(num1,num2);
                printf("Media: %.2f", media);
                break;

            case 3:
                printf("Digite um numero inteiro: ");
                scanf("%d", &valor);
                if (EHpi(valor) == 0)
                {
                    printf("O numero %d eh par", valor);
                }
                else
                {
                    printf("O numero %d eh impar", valor);
                }
                break;

            case 4:
                printf("Saindo........");
                break;
                
            default :
            printf("Opcao Invalida");    
                



        }
    }

    return 0;
}

float IMC_ps(float peso, float altura)
{
    float imc;
    imc = peso /(altura*altura);
    return imc;
    
}

float Media(float num1, float num2)
{
    float media;
    media = (num1 + num2)/2;
    return media;
}
