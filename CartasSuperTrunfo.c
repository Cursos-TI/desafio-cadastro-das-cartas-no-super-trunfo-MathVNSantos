#include <stdio.h>


int main() {
// Declaração de variáveis
    char estado1 = 'A', estado2 = 'B';
    char codigo1[3] = "01", codigo2[3] = "02";
    char nome_da_cidade1[50], nome_da_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turísticos1, pontos_turísticos2;    


//Solicitação de dados da primeira carta.
    printf("Carta 1\n");
    //Atribui-se valores definidos para as variaveis estado e código.
    //Os Estados e os Códigos já são pré-definidos. Aparecerão apenas para identificação.
    printf("Estado: %c\n", estado1); //Saída: Estado: B
    printf("Código: %c%s\n", estado1, codigo1); //Saída: Código: B02
    
    printf("Nome da Cidade: ");
    scanf("%s", &nome_da_cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%.2f", &area1);

    printf("PIB: ");
    scanf("%.2f", &PIB1);

    printf("Pontos Turísticos: ");
    scanf ("%d", &pontos_turísticos1);

    printf("---------------------------\n");

    //Solicitação de dados da segunda carta.
    printf("Carta 2\n");
    //Atribui-se valores definidos para as variaveis estado e código.
    //Os Estados e os Códigos já são pré-definidos. Aparecerão apenas para identificação.
    printf("Estado: %c\n", estado2); // Saída: Estado: B
    printf("Código: %c%s\n", estado2, codigo2); // Saída: Código: B02
    
    printf("Nome da Cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &float PIB2);

    printf("Pontos Turísticos: ");
    scanf ("%d", &pontos_turísticos2);

    printf("---------------------------\n");

    return 0;
}
