#include <stdio.h>

int main() {
    printf("Desafio Cartas Super Trunfo!\n");

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
    int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;

    printf("[Carta 1] Digite o código da cidade: \n");
    scanf("%s",codigo);  
    printf("O código da cidade é: %s\n",codigo); 

    printf("[Carta 1] Digite sua população: \n");
    scanf("%lu", &populacao);  
    printf("A população é: %lu\n",populacao);  

    printf("[Carta 1] Digite o tamanho da área: \n");
    scanf("%f", &area);  
    printf("A área da cidade é: %f\n", area);  

    printf("[Carta 1] Digite o PIB: \n");
    scanf("%f",&PIB);  
    printf("O PIB da cidade é: %f\n", PIB);  

    printf("[Carta 1] Digite os pontos da cidade: \n");
    scanf("%lu", &pontos);  
    printf("Os pontos são: %lu\n",pontos); 

    printf("[Carta 1] Digite o nome da cidade: \n");
    scanf("%s", cidade);  
    printf("O nome da cidade é: %s\n",cidade); 

    //Exibição das informações [carta 1]
    printf("codigo da cidade: %s\n", codigo);
    printf("população: %lu\n", populacao);
    printf("área: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("pontos: %lu\n", pontos);
    printf("cidade: %s\n", cidade);

    //Calculo da densidade populacional [carta 1]
    densidadepopulacional = (float) populacao / area;
    printf("A densidade populacional é de: %f \n", densidadepopulacional);

    //Calculo do PIB per capita [carta 1]
    PIBpercapita = (float) PIB / populacao;
    printf("O PIB per capita é de: %f \n", PIBpercapita);

    //Calculo do Superpoder [carta 1]
    Superpoder = (float) populacao + area + PIB + pontos + (1 /densidadepopulacional);
    printf("O Superpoder é de: %f \n", Superpoder);

    printf("[Carta 2] Digite o código da cidade: \n");
    scanf("%s",codigo2);  
    printf("O código da cidade é: %s\n",codigo2);

    printf("[Carta 2] Digite sua população: \n");
    scanf("%lu", &populacao2);  
    printf("A população é: %lu\n",populacao2);

    printf("[Carta 2] Digite para saber o tamanho da área: \n");
    scanf("%f", &area2);  
    printf("A área da cidade é: %f\n", area2);

    printf("[Carta 2] Digite o PIB: \n");
    scanf("%f",&PIB2);  
    printf("O PIB da cidade é: %f\n", PIB2);  

    printf("[Carta 2] Digite os pontos da cidade: \n");
    scanf("%lu", &pontos2);  
    printf("Os pontos são: %lu\n",pontos2); 

    printf("[Carta 2] Digite o nome da cidade: \n");
    scanf("%s", cidade2);  
    printf("O nome da cidade é: %s\n",cidade2); 

    //Exibição das informações [carta 2]
    printf("codigo da cidade: %s\n", codigo2);
    printf("população: %lu\n", populacao2);
    printf("área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("pontos: %lu\n", pontos2);
    printf("cidade: %s\n", cidade2);

    //Calculo da densidade populacional [carta 2]
    densidadepopulacional2 = (float) populacao2 / area2;
    printf("A densidade populacional é de: %f \n", densidadepopulacional2);

    //Calculo do PIB per capita [carta 2]
    PIBpercapita2 = (float) PIB2 / populacao2;
    printf("O PIB per capita é de: %f \n", PIBpercapita2);

    //Calculo do Superpoder [carta 2]
    Superpoder2 = (float) populacao2 + area2 + PIB2 + pontos2 + (1 /densidadepopulacional2);
    printf("O Superpoder é de: %f \n", Superpoder2);

    //Comparação de cartas 1 e 2

    printf("Comparação de cartas 1 e 2\n");
    printf("As pontuações serão dadas pelas numerações 1 para carta1 e 0 para carta 2\n");
    printf("Comparando população: %lu > %lu\n", populacao, populacao2);
    resultadoA = populacao > populacao2;
    printf("Vencedor: %d\n", resultadoA);

    printf("Comparando área: %f > %f\n", area, area2);
    resultadoB = area > area2;
    printf("Vencedor: %d\n", resultadoB);

    printf("Comparando PIB: %f > %f\n", PIB, PIB2);
    resultadoC = PIB > PIB2;
    printf("Vencedor: %d\n", resultadoC);

    printf("Comparando pontos: %lu > %lu\n", pontos, pontos2);
    resultadoD = pontos > pontos2;
    printf("Vencedor: %d\n", resultadoD);

    printf("Comparando densidade populacional: %f > %f\n", densidadepopulacional, densidadepopulacional2);
    resultadoE = densidadepopulacional < densidadepopulacional2;
    printf("Vencedor: %d\n", resultadoE);

    printf("Comparando PIB per capita: %f > %f\n", PIBpercapita, PIBpercapita2);
    resultadoF = PIBpercapita > PIBpercapita2;
    printf("Vencedor: %d\n", resultadoF);

    printf("Comparando Superpoder: %f > %f\n", Superpoder, Superpoder2);
    resultadoG = Superpoder > Superpoder2;
    printf("Vencedor: %d\n", resultadoG);


    


    return 0;
}
