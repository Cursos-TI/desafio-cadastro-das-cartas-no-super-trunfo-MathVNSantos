#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /* O que você vai fazer
    Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

    - Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    - Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    - Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    - População: O número de habitantes da cidade. Tipo: int
    - Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    - PIB: O Produto Interno Bruto da cidade. Tipo: float
    - Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    
    Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. 
    Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo:

    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30 

    */

int main() {
// Declaração de variáveis
    char estado1 = 'A', estado2 = 'B';
    char codigo1[2] = '01', codigo2[2] = '02';
    char nome_da_cidade1[50], nome_da_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turísticos1, pontos_turísticos2;    


//Solicitação de dados da primeira carta.
    printf("Carta 1 \n");
    //Atribui-se valores definidos para as variaveis estado e código.
    //Os Estados e os Códigos já são pré-definidos. Aparecerão apenas para identificação.
    printf("Estado: %c\n", estado1);
    printf("Código: %c%c\n", estado1, codigo1);
    
    printf("Nome da Cidade: ");
    scanf("%s", nome_da_cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &float PIB1);

    printf("Pontos Turísticos: ");
    scanf ("%d", &pontos_turísticos1);

    printf("---------------------------\n");

    //Solicitação de dados da segunda carta.
    printf("Carta 2 \n");
    //Atribui-se valores definidos para as variaveis estado e código.
    //Os Estados e os Códigos já são pré-definidos. Aparecerão apenas para identificação.
    printf("Estado: %c\n", estado1);
    printf("Código: %c%c\n", estado1, codigo1);
    
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
