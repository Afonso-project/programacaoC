#include <stdio.h>

int main() {
    printf("Desafio Cartas Super Trunfo!\n");

    char estado[30];
    char estado2[30];
    char codigo[20];
    char codigo2[20];
    unsigned long int populacao;
    unsigned long int populacao2;
    float area;
    float area2;
    float PIB;
    float PIB2;
    unsigned long int pontos;
    unsigned long int pontos2;
    char cidade[50];
    char cidade2[50];
    float densidadepopulacional;
    float densidadepopulacional2;
    float PIBpercapita;
    float PIBpercapita2;
    float Superpoder;
    float Superpoder2;
    int opcao;

    printf("[Carta 1] Digite o nome do Estado: \n");
    scanf("%s", estado);
    printf("O nome do Estado é: %s\n", estado);

    printf("[Carta 1] Digite o código da cidade: \n");
    scanf("%s", codigo);  
    printf("O código da cidade é: %s\n", codigo); 

    printf("[Carta 1] Digite sua população: \n");
    scanf("%lu", &populacao);  
    printf("A população é: %lu\n", populacao);  

    printf("[Carta 1] Digite o tamanho da área: \n");
    scanf("%f", &area);  
    printf("A área da cidade é: %f\n", area);  

    printf("[Carta 1] Digite o PIB: \n");
    scanf("%f", &PIB);  
    printf("O PIB da cidade é: %f\n", PIB);  

    printf("[Carta 1] Digite os pontos da cidade: \n");
    scanf("%lu", &pontos);  
    printf("Os pontos são: %lu\n", pontos); 

    printf("[Carta 1] Digite o nome da cidade: \n");
    scanf("%s", cidade);  
    printf("O nome da cidade é: %s\n", cidade); 

    // Exibição das informações [carta 1]
    printf("codigo da cidade: %s\n", codigo);
    printf("população: %lu\n", populacao);
    printf("área: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("pontos: %lu\n", pontos);
    printf("cidade: %s\n", cidade);

    // Cálculo da densidade populacional [carta 1]
    densidadepopulacional = (float) populacao / area;
    printf("A densidade populacional é de: %f \n", densidadepopulacional);

    // Cálculo do PIB per capita [carta 1]
    PIBpercapita = (float) PIB / populacao;
    printf("O PIB per capita é de: %f \n", PIBpercapita);

    // Cálculo do Superpoder [carta 1]
    Superpoder = (float) populacao + area + PIB + pontos + (1 / densidadepopulacional);
    printf("O Superpoder é de: %f \n", Superpoder);

    // Carta 2
    printf("[Carta 2] Digite o nome do Estado: \n");
    scanf("%s", estado2);
    printf("O nome do Estado é: %s\n", estado2);

    printf("[Carta 2] Digite o código da cidade: \n");
    scanf("%s", codigo2);  
    printf("O código da cidade é: %s\n", codigo2);

    printf("[Carta 2] Digite sua população: \n");
    scanf("%lu", &populacao2);  
    printf("A população é: %lu\n", populacao2);

    printf("[Carta 2] Digite para saber o tamanho da área: \n");
    scanf("%f", &area2);  
    printf("A área da cidade é: %f\n", area2);

    printf("[Carta 2] Digite o PIB: \n");
    scanf("%f", &PIB2);  
    printf("O PIB da cidade é: %f\n", PIB2);  

    printf("[Carta 2] Digite os pontos da cidade: \n");
    scanf("%lu", &pontos2);  
    printf("Os pontos são: %lu\n", pontos2); 

    printf("[Carta 2] Digite o nome da cidade: \n");
    scanf("%s", cidade2);  
    printf("O nome da cidade é: %s\n", cidade2); 

    // Exibição das informações [carta 2]
    printf("codigo da cidade: %s\n", codigo2);
    printf("população: %lu\n", populacao2);
    printf("área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("pontos: %lu\n", pontos2);
    printf("cidade: %s\n", cidade2);

    // Cálculo da densidade populacional [carta 2]
    densidadepopulacional2 = (float) populacao2 / area2;
    printf("A densidade populacional é de: %f \n", densidadepopulacional2);

    // Cálculo do PIB per capita [carta 2]
    PIBpercapita2 = (float) PIB2 / populacao2;
    printf("O PIB per capita é de: %f \n", PIBpercapita2);

    // Cálculo do Superpoder [carta 2]
    Superpoder2 = (float) populacao2 + area2 + PIB2 + pontos2 + (1 / densidadepopulacional2);
    printf("O Superpoder é de: %f \n", Superpoder2);

    // Menu de Comparação de Cartas
    printf("\nMenu de Comparação de Cartas\n");
    printf("Escolha uma opção para comparar as cartas:\n");
    printf("1. Exibir informações das cartas\n");
    printf("2. Comparar População\n");
    printf("3. Comparar Área\n");
    printf("4. Comparar PIB\n");
    printf("5. Comparar Pontos\n");
    printf("6. Comparar Densidade Populacional\n");
    printf("7. Comparar PIB per Capita\n");
    printf("8. Comparar Superpoder\n");
    printf("9. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) { 
        case 1:
            // Exibindo as informações das cartas 1 e 2
            printf("\nInformações da Carta 1:\n");
            printf("Estado: %s\n", estado);
            printf("Código da cidade: %s\n", codigo);
            printf("População: %lu\n", populacao);
            printf("Área: %.2f\n", area);
            printf("PIB: %.2f\n", PIB);
            printf("Pontos: %lu\n", pontos);
            printf("Cidade: %s\n", cidade);
            printf("Densidade populacional: %.2f\n", densidadepopulacional);
            printf("PIB per capita: %.2f\n", PIBpercapita);
            printf("Superpoder: %.2f\n", Superpoder);

            printf("\nInformações da Carta 2:\n");
            printf("Estado: %s\n", estado2);
            printf("Código da cidade: %s\n", codigo2);
            printf("População: %lu\n", populacao2);
            printf("Área: %.2f\n", area2);
            printf("PIB: %.2f\n", PIB2);
            printf("Pontos: %lu\n", pontos2);
            printf("Cidade: %s\n", cidade2);
            printf("Densidade populacional: %.2f\n", densidadepopulacional2);
            printf("PIB per capita: %.2f\n", PIBpercapita2);
            printf("Superpoder: %.2f\n", Superpoder2);
            break;
     
        case 2:
            printf("Comparando População:\n");
            printf("População de %s: %lu\n", cidade, populacao);
            printf("População de %s: %lu\n", cidade2, populacao2);
            if (populacao > populacao2) {
                printf("A população de %s é maior que a população de %s\n", cidade, cidade2);
                printf("[Carta 1] Venceu!\n");
            } else if (populacao < populacao2) {
                printf("A população de %s é menor que a população de %s\n", cidade, cidade2);
                printf("[Carta 2] Venceu!\n");
            } else {
                printf("A população de %s é igual a população de %s\n", cidade, cidade2);
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Comparando Área:\n");
            printf("Área de %s: %.2f\n", cidade, area);
            printf("Área de %s: %.2f\n", cidade2, area2);
            if (area > area2) {
                printf("A área de %s é maior que a área de %s\n", cidade, cidade2);
                printf("[Carta 1] Venceu!\n");
            } else if (area < area2) {
                printf("A área de %s é menor que a área de %s\n", cidade, cidade2);
                printf("[Carta 2] Venceu!\n");
            } else {
                printf("A área de %s é igual a área de %s\n", cidade, cidade2);
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Comparando PIB:\n");
            printf("PIB de %s: %.2f\n", cidade, PIB);
            printf("PIB de %s: %.2f\n", cidade2, PIB2);
            if (PIB > PIB2) {
                printf("O PIB de %s é maior que o PIB de %s\n", cidade, cidade2);
                printf("[Carta 1] Venceu!\n");
            } else if (PIB < PIB2) {
                printf("O PIB de %s é menor que o PIB de %s\n", cidade, cidade2);
                printf("[Carta 2] Venceu!\n");
            } else {
                printf("O PIB de %s é igual ao PIB de %s\n", cidade, cidade2);
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Comparando Pontos:\n");
            printf("Pontos de %s: %lu\n", cidade, pontos);
            printf("Pontos de %s: %lu\n", cidade2, pontos2);
            if (pontos > pontos2) {
                printf("Os pontos de %s são maiores que os pontos de %s\n", cidade, cidade2);
                printf("[Carta 1] Venceu!\n");
            } else if (pontos < pontos2) {
                printf("Os pontos de %s são menores que os pontos de %s\n", cidade, cidade2);
                printf("[Carta 2] Venceu!\n");
            } else {
                printf("Os pontos de %s são iguais aos pontos de %s\n", cidade, cidade2);
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("Comparando Densidade Populacional:\n");
            printf("Densidade populacional de %s: %.2f\n", cidade, densidadepopulacional);
            printf("Densidade populacional de %s: %.2f\n", cidade2, densidadepopulacional2);
            if (densidadepopulacional < densidadepopulacional2) {
                printf("A densidade populacional de %s é menor que a densidade populacional de %s\n", cidade, cidade2);
                printf("[Carta 1] Venceu!\n");
            } else if (densidadepopulacional2 < densidadepopulacional) {
                printf("A densidade populacional de %s é menor que a densidade populacional de %s\n", cidade2, cidade);
                printf("[Carta 2] Venceu!\n");
            } else {
                printf("A densidade populacional de %s é igual a densidade populacional de %s\n", cidade, cidade2);
                printf("Empate!\n");
            }
            break;

        case 7:
            printf("Comparando PIB per Capita:\n");
            printf("PIB per capita de %s: %.2f\n", cidade, PIBpercapita);
            printf("PIB per capita de %s: %.2f\n", cidade2, PIBpercapita2);
            if (PIBpercapita > PIBpercapita2) {
                printf("O PIB per capita de %s é maior que o PIB per capita de %s\n", cidade, cidade2);
                printf("[Carta 1] Venceu!\n");
            } else if (PIBpercapita < PIBpercapita2) {
                printf("O PIB per capita de %s é menor que o PIB per capita de %s\n", cidade, cidade2);
                printf("[Carta 2] Venceu!\n");
            } else {
                printf("O PIB per capita de %s é igual ao PIB per capita de %s\n", cidade, cidade2);
                printf("Empate!\n");
            }
            break;

        case 8:
            printf("Comparando Superpoder:\n");
            printf("Superpoder de %s: %.2f\n", cidade, Superpoder);
            printf("Superpoder de %s: %.2f\n", cidade2, Superpoder2);
            if (Superpoder > Superpoder2) {
                printf("O Superpoder de %s é maior que o Superpoder de %s\n", cidade, cidade2);
                printf("[Carta 1] Venceu!\n");
            } else if (Superpoder < Superpoder2) {
                printf("O Superpoder de %s é menor que o Superpoder de %s\n", cidade, cidade2);
                printf("[Carta 2] Venceu!\n");
            } else {
                printf("O Superpoder de %s é igual ao Superpoder de %s\n", cidade, cidade2);
                printf("Empate!\n");
            }
            break;

        case 9:
            printf("Saindo do jogo...\n");
            break;

        default:
            printf("Opção inválida\n");
            break;  
    }

    return 0;
}
