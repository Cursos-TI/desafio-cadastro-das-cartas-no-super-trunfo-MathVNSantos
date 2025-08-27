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
    printf("Código: %c%s\n", Estado, Codigo);

    return 0;

}