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

    //cálculo densidade Populacional e Pib Per Capta carta 1
    densidadeA = populacaoA / AreaA;
    pib_per_capitaA = (PIBA * 1000000000) / (float) populacaoA;

    //impressão dos atributos derivados da carta 1
    printf("Densidade Demográfica: %.2f\n", densidadeA);
    printf("PIB per capita: %.2f reais\n", pib_per_capitaA);

    //variável super poder e inverso da densidade populacional carta 1
    float super_poderA;
    float inverso_densidadeA = 1 / densidadeA;

    /* Calculo o Super Poder: soma todos atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e 
    o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    */
    inverso_densidadeA = 1 / densidadeA;

    super_poderA = (float) populacaoA + AreaA + PIBA + (float) pontos_turisticosA + pib_per_capitaA + inverso_densidadeA;

    printf("Super Poder: %.2f\n", super_poderA);

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

    //cálculo Densidade Populacional e Pib Per Capta carta 2
    densidadeB = populacaoB / AreaB;
    pib_per_capitaB = (PIBB * 1000000000) / (float) populacaoB;

    //impressão dos atributos derivados da carta 2
    printf("Densidade Demográfica: %.2f\n", densidadeB);
    printf("PIB per capita: %.2f reais\n", pib_per_capitaB);

    //variável super poder e inverso da densidade populacional carta 2
    float super_poderB;
    float inverso_densidadeB;
    
    /* Calculo o Super Poder: soma todos atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e 
    o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    */
    inverso_densidadeB;
    super_poderB = (float) populacaoB + AreaB + PIBB + (float) pontos_turisticosB + pib_per_capitaB + (1 / densidadeB);

    printf("Super Poder: %2.f\n", super_poderB);

    printf("\n\n");


    //Comparação dos Super Poderes
    

    return 0;

}