#include <stdio.h>

int main(){

int opcao;


    printf("\n________________________________\n");
    printf("\n_____________1-Captalismo_______\n");
    printf("\n_____________2-Socioalismo______\n");
    printf("\n_____________3-Fascismo_________\n");
    printf("\n_____________4-Comunismo________\n");
    printf("\n_____________5-Nazismo__________\n");
    printf("\n________________________________\n");

    printf("Escolha um Partido: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
        case 1:
            printf("Voce escolheu O partido Capitalista", opcao);
            break;

        case 2:
            printf("Voce escolheu O partido Socialista", opcao);
            break;

        case 3:
            printf("Voce escolheu O partido Fascista", opcao);
            break;

        case 4:
            printf("Voce escolheu O partido Comunista", opcao);
            break;

        case 5:
            printf("Voce escolheu O partido Nazista", opcao);
            break;   

        case 6:
            printf("Saindo.......");
            break;
            
        default:
            printf("Opcao Invalida");
    
    }   

    return 0;

}