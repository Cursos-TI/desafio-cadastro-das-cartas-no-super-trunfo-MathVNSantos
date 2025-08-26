#include <stdio.h>


int main() {

//Cabeçalho da carta
    printf("Carta 1\n");
//Solicitação de dados da primeira carta.
//Declaração de variáveis - Primeira Carta

    char estado1 = 'A';
    char codigo1[3] = "01";
    char nome_cidade1[50] = "DF";
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turísticos1;
    float per_capita1;
    float densidade1;
    
    /*Atribui-se valores definidos para as variaveis estado e código.
    Os Estados e os Códigos já são pré-definidos. Aparecerão apenas para identificação.*/
    
    printf("Estado: %c\n", estado1); //Saída: Estado: 
    printf("Código: %c%s\n", estado1, codigo1); //Saída: Código: B02
    printf("Nome da Cidade: %c\n", nome_cidade1);
 
    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%.2f", &area1);

    printf("PIB: ");
    scanf("%.2f", &PIB1);

    printf("Pontos Turísticos: ");
    scanf ("%d", &pontos_turísticos1);

    per_capita1 = PIB1 / populacao1; //Cálculo do PIB per capita
    printf("PIB per capita: %.2f\n", per_capita1);

    densidade1 = populacao1 / area1; //Cálculo da densidade demográfica
    printf("Densidade demográfica: %.2f\n", densidade1);
 
//Fim da primeira carta
//Separador entre cartas
    printf("---------------------------\n");

//Cabeçalho da carta
    printf("Carta 2\n");
    //declaração de variáveis - Segunda Carta
    char estado2 = 'B';
    char codigo2[3] = "02";
    char nome_da_cidade2[50] = "São_Paulo";
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turísticos2;
    float per_capita2;
    float densidade2;

    /*Atribui-se valores definidos para as variaveis estado e código.
    Os Estados e os Códigos já são pré-definidos. Aparecerão apenas para identificação.*/

    printf("Estado: %c\n", estado2); //Saída: Estado: B
    printf("Código: %c%s\n", estado2, codigo2); //Saída: Código: B02

    printf("Nome da Cidade: %c\n", nome_da_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%.2f", &area2);

    printf("PIB: ");
    scanf("%.2f", &PIB2);

    printf("Pontos Turísticos: ");
    scanf ("%d", &pontos_turísticos2);

    per_capita2 = PIB2 / populacao2; //Cálculo do PIB per capita
    printf("PIB per capita: %.2f\n", per_capita2); //  Saída: PIB per capita: 35000.00

    densidade2 = populacao2 / area2;
    printf("Densidade demográfica: %.2f\n", densidade2);

//Fim da segunda carta
//Separador entre cartas
    printf("---------------------------\n");

//Cabeçalho da carta
    printf("Carta 3\n");
    //declaração de variáveis - Terceira Carta
    char estado3 = 'C';
    char codigo3[3] = "03";
    char nome_da_cidade3[50] = "Santa_Catarina";
    int populacao3;
    float area3;
    float PIB3;
    int pontos_turísticos3;
    float per_capita3;
    float densidade3;

    /*Atribui-se valores definidos para as variaveis estado e código.
    Os Estados e os Códigos já são pré-definidos. Aparecerão apenas para identificação.*/
    printf("Estado: %c\n", estado3); //Saída: Estado: C
    printf("Código: %c%s\n", estado3, codigo3); //Saída: Código: C03

    printf("Nome da Cidade: %c\n", nome_da_cidade3);
    
    printf("População: ");
    scanf("%d", &populacao3);

    printf("Área (km²): ");
    scanf("%.2f", &area3);

    printf("PIB: ");
    scanf("%.2f", &PIB3);

    printf("Pontos Turísticos: ");
    scanf ("%d", &pontos_turísticos3);

    per_capita3 = PIB3 / populacao3; //Cálculo do PIB per capita
    printf("PIB per capita: %.2f\n", per_capita3);

    densidade3 = populacao3 / area3; //Cálculo da densidade demográfica
    printf("Densidade demográfica: %.2f\n", densidade3);

//Fim da terceira carta

return 0;
}
