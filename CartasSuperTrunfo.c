#include <stdio.h>

int main(){

printf("-----Cartas Super Trunfo-----\n\n");
printf("-----Carta 1-----\n\n");

//declaração das variaveis da carta 1

    char EstadoA = 'A';
    char CodigoA[3] = "01"; 
    char NomeA[20] = "Distrito Federal"; 
    unsigned int populacaoA;
    float AreaA;
    float PIBA;
    unsigned int pontos_turisticosA;
    float densidadeA;
    float pib_per_capitaA;

    //impressão dos dados da carta 1
    printf("Estado: %c\n", EstadoA);
    printf("Código: %c%s\n", EstadoA, CodigoA);
    printf("Nome: %s\n", NomeA);

    //entrada dos dados da carta 1
    printf("População: ");
    scanf("%d", &populacaoA);

    printf("Área: ");
    scanf("%f", &AreaA);

    printf("PIB: ");
    scanf("%f", &PIBA);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticosA);

    //cálculo dos atributos derivados da carta 1
    densidadeA = populacaoA / AreaA;
    pib_per_capitaA = (PIBA * 1000000000) / (float) populacaoA;

    //impressão dos atributos derivados da carta 1
    printf("Densidade Demográfica: %.2f\n", densidadeA);
    printf("PIB per capita: %.2f reais\n", pib_per_capitaA);

    printf("\n\n");
//Início Carta 2
printf("-----Carta 2-----\n\n");

    char EstadoB = 'B';
    char CodigoB[3] = "01"; 
    char NomeB[20] = "São Paulo"; 
    unsigned int populacaoB;
    float AreaB;
    float PIBB;
    unsigned int pontos_turisticosB;
    float densidadeB;
    float pib_per_capitaB;

    //impressão dos dados da carta 2
    printf("Estado: %c\n", EstadoB);
    printf("Código: %c%s\n", EstadoB, CodigoB);
    printf("Nome: %s\n", NomeB);

    //entrada dos dados da carta 2
    printf("População: ");
    scanf("%d", &populacaoB);

    printf("Área: ");
    scanf("%f", &AreaB);

    printf("PIB: ");
    scanf("%f", &PIBB);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticosB);

    //cálculo dos atributos derivados da carta 2
    densidadeB = populacaoB / AreaB;
    pib_per_capitaB = (PIBB * 1000000000) / (float) populacaoB;

    //impressão dos atributos derivados da carta 2
    printf("Densidade Demográfica: %.2f\n", densidadeB);
    printf("PIB per capita: %.2f reais\n", pib_per_capitaB);

    printf("\n\n");

    return 0;

}