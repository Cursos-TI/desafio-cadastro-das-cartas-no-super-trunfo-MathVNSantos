#include <stdio.h>

int main(){

printf("-----Cartas Super Trunfo-----\n\n");
printf("-----Carta 1-----\n\n");

//declaração das variaveis da carta 1

    char Estado = 'A';
    char Codigo[3] = "01"; 
    char Nome[20] = "Distrito Federal"; 
    int populacao;
    float Area;
    float PIB;
    int pontos_turisticos;

    //impressão dos dados da carta 1
    printf("Estado: %c\n", Estado);
    printf("Código: %c%c\n", Estado, Codigo);
    printf("Nome: %s\n", Nome);

    //entrada dos dados da carta 1
    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &Area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);

    return 0;

}