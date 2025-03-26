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
    int result_compara1, result_compara2;

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
    printf("Digite a área: ");
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
    printf("Digite a área: ");
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


    // Exibição dos dados
    printf("\nDados da primeira carta %s:\n", carta1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_poulacional1);
    printf("PIB per capita: %.2f\n", pib_percapita1);
    printf("Super Poder: %.f\n", superpoder1);

    printf("\nDados da segunda carta %s:\n", carta2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_poulacional2);
    printf("PIB per capita: %.2f\n", pib_percapita2);
    printf("Super Poder: %.f\n", superpoder2);

    //Comparação

    //O escolhido para comparação foi o PIB
    printf("\nComparação de cartas (Atributo PIB):\n");
    printf("Carta 1 - %s: %.2f\n",nome_cidade1, pib1);
    printf("Carta 2 - %s: %.2f\n",nome_cidade2, pib2);
    if (pib1 > pib2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n",nome_cidade1);
    }else{
        if (pib1 < pib2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n",nome_cidade2);
        }else{
            printf("Resultado: O PIB das cidades são iguais!");
        }  
    }
    return 0;
}