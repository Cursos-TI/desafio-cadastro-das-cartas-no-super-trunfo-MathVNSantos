#include <stdio.h>

int main(){

printf("-----Cartas Super Trunfo-----\n\n");
printf("-----Carta 1-----\n\n");

//declaração das variaveis da carta 1

    char EstadoA = 'A';
    char CodigoA[3] = "01"; 
    char NomeA[50]; 
    unsigned int populacaoA;
    float AreaA;
    float PIBA;
    unsigned int pontos_turisticosA;
    float densidadeA;
    float pib_per_capitaA;

    //impressão dos dados da carta 1
    printf("Estado: %c\n", EstadoA);
    printf("Código: %c%s\n", EstadoA, CodigoA);
    
    //entrada dos dados da carta 1

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", NomeA); //lê o nome com espaços
    
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
    char NomeB[50]; 
    unsigned int populacaoB;
    float AreaB;
    float PIBB;
    unsigned int pontos_turisticosB;
    float densidadeB;
    float pib_per_capitaB;

    //impressão dos dados da carta 2
    printf("Estado: %c\n", EstadoB);
    printf("Código: %c%s\n", EstadoB, CodigoB);
    
   //entrada dos dados da carta 2
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", NomeB); //lê o nome com espaços
    
    printf("População: ");
    scanf(" %d", &populacaoB);

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
    inverso_densidadeB = 1 / densidadeB;
    super_poderB = (float) populacaoB + AreaB + PIBB + (float) pontos_turisticosB + pib_per_capitaB + inverso_densidadeB;

    printf("Super Poder: %2.f\n", super_poderB);

    printf("\n\n");

    //Comparação Cartas
    printf("-----Comparação das Cartas-----\n\n");

    printf("População: Carta %d venceu (%d)\n",
        (populacaoA > populacaoB) * 1 + (populacaoB > populacaoA) * 2,
        (populacaoA > populacaoB));

    printf("Área: Carta %d venceu (%d)\n",
        (AreaA > AreaB) * 1 + (AreaB > AreaA) * 2,
        (AreaA > AreaB));                           

    printf("PIB: Carta %d venceu (%.d)\n",
        (PIBA > PIBB) * 1 + (PIBB > PIBA) * 2,
        (PIBA > PIBB));
    
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
        (pontos_turisticosA > pontos_turisticosB) * 1 + (pontos_turisticosB > pontos_turisticosA) * 2,
        (pontos_turisticosA > pontos_turisticosB));
    
    printf("Densidade Demográfica: Carta %d venceu (%d)\n",
        (densidadeA < densidadeB) * 1 + (densidadeB < densidadeA) * 2,
        (densidadeA < densidadeB));

    printf("PIB per capita: Carta %d venceu (%d)\n",
        (pib_per_capitaA > pib_per_capitaB) * 1 + (pib_per_capitaB > pib_per_capitaA) * 2,
        (pib_per_capitaA > pib_per_capitaB));

    printf("Super Poder: Carta %d venceu (%d)\n",
        (super_poderA > super_poderB) * 1 + (super_poderB > super_poderA) * 2,
        (super_poderA > super_poderB));

//Comparação - Estrutura de Decisão if-else

//Algoritmo para jogar escolher atributo.

    int escolha;

    printf("Selecione o atributo para comparar: \n");
    printf("1 - População\n");
    printf("2 -  Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder");
    scanf("%d", &escolha);

// Estrutura de Decisão - Comparação entre atributos

//Variáveis para copiar e colar
/* 
NomeA[50]
populacaoA
AreaA
PIBA
int pontos_turisticosA
densidadeA
pib_per_capitaA
super_poderA

NomeB[50]
populacaoB
AreaB
PIBB
pontos_turisticosB
densidadeB
pib_per_capitaB
super_poderB*/

//Escolha População
    if ( escolha == 1 ) {
        if (populacaoA > populacaoB) {
            printf("Populacao: Carta 1 (%s) venceu (1)\n", NomeA);
        }
        else if (populacaoB > populacaoA) {
            printf("Populacao: Carta 2 (%s) venceu (1)\n", NomeB);    
        } 
        else if (populacaoA == populacaoB) {
            printf("Populacao: Empate entre %s e %s(0)\n", NomeA, NomeB)
        }
    }
//Escolha Area
    if ( escolha == 2 ) {
        if (AreaA > AreaB) {
            printf("Area: Carta 1 (%s) venceu (1)\n", NomeA);
        }
        else if (AreaB > AreaA) {
            printf("Area: Carta 2 (%s) venceu (1)\n", NomeB);
        }
        else if ( AreaA == AreaB) {
            printf("Populacao: Empate entre %s e %s(0)\n", NomeA, NomeB);
        }
    }
//Escolha PIB
    if ( escolha == 3 ) {
        if ( PIBA > PIBB) {
            printf("PIB: Carta 1 (%s) venceu (1)\n", NomeA);
        }
        else if (PIBB > PIBA) {
            printf("PIB: Carta 2 (%s) venceu (1)\n", NomeB);            
        }
        else if (PIBA == PIBB) {
            printf("PIB: Empate entre %s e %s(0)\n", NomeA, NomeB);
        }
    }
//Escolha Número de Pontos Turísticos
    if ( escolha == 4 ){
        if (pontos_turisticosA > pontos_turisticosB) {
            printf("Pontos Turísticos: Carta 1 (%s) venceu (1)\n", NomeA);
        }
        else if (pontos_turisticosB > pontos_turisticosA) {
            printf("Pontos Turísticos: Carta 2 (%s) venceu (1)\n", NomeB);
        }
        else if (pontos_turisticosA == pontos_turisticosB){
            printf("Pontos Turísticos: Empate entre %s e %s(0)\n", NomeA, NomeB);
        }
    }

//Escolha Densidade Populacional densidadeA densidadeB
    if ( escolha == 5 ){
        if (densidadeA > densidadeB) {
            printf("Densidade Populacional: Carta 1 (%s) venceu (1)\n", NomeA);
        }
        else if (densidadeB > densidadeA){
            printf("Densidade Populacional: Carta 2 (%s) venceu (1)\n", NomeB);
        }
        else if (densidadeA == densidadeB){
            printf("Densidade Populacional: Empate entre %s e %s(0)\n", NomeA, NomeB);
        }
    }
//Escolha PIB per Capita pib_per_capitaA pib_per_capitaB
    if ( escolha == 6 ) {
        if (pib_per_capitaA > pib_per_capitaB){
            printf("PIB per Capita: Carta 1 (%s) venceu (1)\n", NomeA);
        }
        else if (pib_per_capitaB > pib_per_capitaA){
            printf("PIB per Capita: Carta 2 (%s) venceu (1)\n", NomeB);
        }
        else if (pib_per_capitaA == pib_per_capitaB){
            printf("Densidade Populacional: Empate entre %s e %s(0)\n", NomeA, NomeB);
        }    
    }
//Escolha Super Poder super_poderA super_poderB
    if ( escolha == 7 ) {
        if (super_poderA > super_poderB){
            printf("Super Poder: Carta 1 (%s) venceu (1)\n", NomeA);
        }
        else if (super_poderB > super_poderA){
            printf("Super Poder: Carta 2 (%s) venceu (1)\n", NomeB);
        }
        else if (super_poderA == super_poderB){
            printf("Super Poder: Empate entre %s e %s(0)\n", NomeA, NomeB);
        } 
    }
    return 0;

}