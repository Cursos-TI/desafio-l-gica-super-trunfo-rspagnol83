#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1[2];
    char estado2[2];
    char carta1[4];
    char carta2[4];
    char nome_cidade1[30];
    char nome_cidade2[30];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;

    printf("## Cadastro das cartas do Super Trunfo Cidades ##");

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite uma letra para o estado: (A-H): ");
    scanf("%s", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", &carta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade1); 
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite uma letra para o estado: (A-H): ");
    scanf("%s", estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2); 
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Calculo de Densidade Populacional e PIB per Capita
    //Declarando junto as variaveis
    float densidade_poulacional1 = (float) populacao1/area1;
    float densidade_poulacional2 = (float) populacao2/area2;
    float pib_percapita1 = (float) pib1/populacao1;
    float pib_percapita2 = (float) pib2/populacao2;
    
    //Cálculo Super Poder
    float superpoder1 = (float) (populacao1 + area1 +  pib1 + pontos_turisticos1 + pib_percapita1   + (1/densidade_poulacional1)); 
    float superpoder2 = (float) (populacao2 + area2 +  pib2 + pontos_turisticos2 + pib_percapita2   + (1/densidade_poulacional2)); 


    printf("%s\n", nome_cidade1);
    printf("%s\n", nome_cidade2);


    //Comparação
    int opcao;
    //Menu para escolha da comparação
    printf("### Escolha o Atributo para Comparação ###\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Densidade Populacional\n");
    printf("7 - Super Poder\n");
    scanf("%d", &opcao);


    //Realizando as comparações e imprimindo o resultado.
    switch (opcao)
    {
        case 1:
        if (populacao1 > populacao2)
        {
            printf("A carta %s - %s Venceu!\n", carta1, nome_cidade1);
            printf("Populacao: %s: %d -- %s: %d \n", nome_cidade1, populacao1, nome_cidade2, populacao2);
        }
            else if (populacao1 < populacao2)
        {
            printf("A carta %s - %s Venceu!\n", carta2, nome_cidade2);
            printf("Populacao: %s: %d -- %s: %d \n", nome_cidade2, populacao2, nome_cidade1, populacao1);
        }
            else
        {
            printf("Empate! Ambas as cidades possuem a mesma população.\n");
            printf("%s: %d -- %s: %d \n", nome_cidade1, populacao1, nome_cidade2, populacao2);
        }
        break;
    
        case 2:
        if (area1 > area2)
        {
            printf("A carta %s - %s Venceu!\n", carta1, nome_cidade1);
            printf("Area: %s: %.2f km² -- %s: %.2f km²\n", nome_cidade1, area1, nome_cidade2, area2);
        }
            else if (area1 < area2)
        {
            printf("A carta %s - %s Venceu!\n", carta2, nome_cidade2);
            printf("Area: %s: %.2f km² -- %s: %.2f km²\n", nome_cidade2, area2, nome_cidade1, area1);
        }
            else
        {
            printf("Empate! Ambas as cidades possuem a mesma área.\n");
            printf("%s: %.2f km² -- %s: %.2f km²\n", nome_cidade1, area1, nome_cidade2, area2);
        }
         break;

        case 3:
        if (pib1 > pib2)
        {
            printf("A carta %s - %s Venceu!\n", carta1, nome_cidade1);
            printf("PIB: %s: %.2f bilhões -- %s: %.2f bilhões\n", nome_cidade1, pib1, nome_cidade2, pib2);
        }
            else if (pib1 < pib2)
        {
            printf("A carta %s - %s Venceu!\n", carta2, nome_cidade2);
            printf("PIB: %s: %.2f bilhões -- %s: %.2f bilhões\n", nome_cidade2, pib2, nome_cidade1, pib1);
        }
            else
        {
            printf("Empate! Ambas as cidades possuem o mesmo PIB.\n");
            printf("%s: %.2f bilhões -- %s: %.2f bilhões\n", nome_cidade1, pib1, nome_cidade2, pib2);
        }
        break;

         case 4:
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("A carta %s - %s Venceu!\n", carta1, nome_cidade1);
            printf("Pontos Turisticos: %s: %d pontos turísticos -- %s: %d pontos turísticos\n", nome_cidade1, pontos_turisticos1, nome_cidade2, pontos_turisticos2);
        }
            else if (pontos_turisticos1 < pontos_turisticos2)
        {
            printf("A carta %s - %s Venceu!\n", carta2, nome_cidade2);
            printf("Pontos Turisticos: %s: %d pontos turísticos -- %s: %d pontos turísticos\n", nome_cidade2, pontos_turisticos2, nome_cidade1, pontos_turisticos1);
        }
            else
        {
            printf("Empate! Ambas as cidades possuem a mesma quantidade de pontos turísticos.\n");
            printf("%s: %d pontos turísticos -- %s: %d pontos turísticos\n", nome_cidade1, pontos_turisticos1, nome_cidade2, pontos_turisticos2);
        }
        break;

        case 5:
        if (pib_percapita1 > pib_percapita2)
        {
            printf("A carta %s - %s Venceu!\n", carta1, nome_cidade1);
            printf("PIB per Capita: %s: %.2f mil -- %s: %.2f mil\n", nome_cidade1, pib_percapita1, nome_cidade2, pib_percapita2);
        }
            else if (pib_percapita1 < pib_percapita2)
        {
            printf("A carta %s - %s Venceu!\n", carta2, nome_cidade2);
            printf("PIB per Capita: %s: %.2f mil -- %s: %.2f mil\n", nome_cidade2, pib_percapita2, nome_cidade1, pib_percapita1);
        }
            else
        {
            printf("Empate! Ambas as cidades possuem o mesmo PIB per capita.\n");
        }
        break;

        case 6:
        if (densidade_poulacional1 < densidade_poulacional2)
        {
            printf("A carta %s - %s Venceu!\n", carta1, nome_cidade1);
            printf("Densidade Populacional: %s: %.2f hab/km² -- %s: %.2f hab/km²\n", nome_cidade1, densidade_poulacional1, nome_cidade2, densidade_poulacional2);
        }
            else if (densidade_poulacional1 > densidade_poulacional2)
        {
            printf("A carta %s - %s Venceu!\n", carta2, nome_cidade2);
            printf("Densidade Populacional: %s: %.2f hab/km² -- %s: %.2f hab/km²\n", nome_cidade2, densidade_poulacional2, nome_cidade1, densidade_poulacional1);
        }
            else
        {
            printf("Empate! Ambas as cidades possuem a mesma densidade populacional.\n");
        }
        break;

        case 7:
        if (superpoder1 > superpoder2)
        {
            printf("A carta %s - %s Venceu!\n", carta1, nome_cidade1);
            printf("Super Poder: %s: %.2f - %s: %.2f\n", nome_cidade1, superpoder1, nome_cidade2,superpoder2);
        }
        else if (superpoder1 < superpoder2)
        {
            printf("A carta %s - %s Venceu!\n", carta2, nome_cidade2);
            printf("Super Poder: %s: %.2f - %s: %.2f\n", nome_cidade2, superpoder2, nome_cidade1, superpoder1);
        }
        else
        {
            printf("Empate! Ambas as cidades possuem o mesmo nível de superpoder.\n");
        }
        break;
    }

    return 0;
}