#include <stdio.h>
    int main(){
        char estado[2], codigodacarta[4], nomedacidade[25];
        int populacao, pontostur;
        float area, pib;

    printf("Nome do estado: \n");
    scanf("%s", estado);

    printf("Código da carta: \n");
    scanf("%s", codigodacarta);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área em KM²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("\n Número de pontos turisticos: \n");
    scanf("%d", &pontostur );

        printf("A carta foi cadastrada com sucesso: \n");
        printf("Carta 1: \n");
        printf("Estado: %s \n", estado);
        printf("Código: %s \n", codigodacarta);
        printf("Nome da cidade: %s \n", nomedacidade);
        printf("População: %d \n", populacao);
        printf("Área: %f KM² \n", area),
        printf("PIB: %f \n", pib);
        printf("Numero de pontos turisticos: %d \n", pontostur);
    
    
    printf("Nome do estado: \n");
    scanf("%s", estado);

    printf("Código da carta: \n");
    scanf("%s", codigodacarta);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área em KM²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &pontostur );

        printf("A carta foi cadastrada com sucesso: \n");
        printf("Carta 2: \n");
        printf("Estado: %s \n", estado);
        printf("Código: %s \n", codigodacarta);
        printf("Nome da cidade: %s \n", nomedacidade);
        printf("População: %d \n", populacao);
        printf("Área: %f KM² \n", area);
        printf("PIB: %f \n", pib);
        printf("Numero de pontos turisticos: %d \n", pontostur);


        return 0;
    }
