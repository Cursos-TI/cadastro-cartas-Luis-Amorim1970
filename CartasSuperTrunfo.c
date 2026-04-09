#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
 /* Declaração das variáveis para a Carta 1 */
    char estado1;                // letra de 'A' a 'H'
    char codigo1[5];             // ex: "A01" + '\0' -> tamanho 5 para folga
    char cidade1[100];           // nome da cidade (pode conter espaços)
    int populacao1;              // número de habitantes
    float area1;                 // área em km²
    float pib1;                  // PIB (assumido em bilhões)
    int pontos_tur1;             // número de pontos turísticos

     /* Declaração das variáveis para a Carta 2 */
    char estado2;
    char codigo2[5];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_tur2;

     /* Declaração das variáveis para a Carta 3 */
    char estado3;
    char codigo3[5];
    char cidade3[100];
    int populacao3;
    float area3;
    float pib3;
    int pontos_tur3;

     /* Declaração das variáveis para a Carta 4 */
    char estado4;
    char codigo4[5];
    char cidade4[100];
    int populacao4;
    float area4;
    float pib4;
    int pontos_tur4;


  // Área para entrada de dados

   // Área para entrada de dados

   /* ---------- Entrada de dados da Carta 1 ---------- */
    printf("Cadastro da Carta 1:\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);            // espaço antes de %c para ignorar whitespace

    printf("Código da Carta (ex: A01): ");
    scanf("%4s", codigo1);             // lê string sem espaços (A01)

    // CORREÇÃO 1: consumir o restante da linha antes de usar fgets
    // isto evita que o '\n' deixado por scanf seja lido pelo fgets abaixo
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) { /* consume */ }

    // CORREÇÃO 2: usar fgets para permitir nomes com espaços
    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remover '\n' final, se houver

    printf("População (inteiro): ");
    scanf("%d", &populacao1);

    printf("Área (em km², use ponto decimal): ");
    scanf("%f", &area1);

    printf("PIB (use valor em bilhões, use ponto decimal): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos (inteiro): ");
    scanf("%d", &pontos_tur1);

    // consumir newline antes da próxima leitura de linha
    while ((ch = getchar()) != '\n' && ch != EOF) { /* consume */ }

     /* ---------- Entrada de dados da Carta 2 ---------- */
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%4s", codigo2);

    while ((ch = getchar()) != '\n' && ch != EOF) { /* consume */ }

    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População (inteiro): ");
    scanf("%d", &populacao2);

    printf("Área (em km², use ponto decimal): ");
    scanf("%f", &area2);

    printf("PIB (use valor em bilhões, use ponto decimal): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos (inteiro): ");
    scanf("%d", &pontos_tur2);

    while ((ch = getchar()) != '\n' && ch != EOF) { /* consume */ }

    /* ---------- Entrada de dados da Carta 3 ---------- */
    printf("\nCadastro da Carta 3:\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado3);

    printf("Código da Carta (ex: C03): ");
    scanf("%4s", codigo3);

    while ((ch = getchar()) != '\n' && ch != EOF) { /* consume */ }

    printf("Nome da Cidade: ");
    fgets(cidade3, sizeof(cidade3), stdin);
    cidade3[strcspn(cidade3, "\n")] = '\0';

    printf("População (inteiro): ");
    scanf("%d", &populacao3);

    printf("Área (em km², use ponto decimal): ");
    scanf("%f", &area3);

    printf("PIB (use valor em bilhões, use ponto decimal): ");
    scanf("%f", &pib3);

    printf("Número de Pontos Turísticos (inteiro): ");
    scanf("%d", &pontos_tur3);

    while ((ch = getchar()) != '\n' && ch != EOF) { /* consume */ }

    /* ---------- Entrada de dados da Carta 4 ---------- */
    printf("\nCadastro da Carta 4:\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado4);

    printf("Código da Carta (ex: D04): ");
    scanf("%4s", codigo4);

    while ((ch = getchar()) != '\n' && ch != EOF) { /* consume */ }

    printf("Nome da Cidade: ");
    fgets(cidade4, sizeof(cidade4), stdin);
    cidade4[strcspn(cidade4, "\n")] = '\0';

    printf("População (inteiro): ");
    scanf("%d", &populacao4);

    printf("Área (em km², use ponto decimal): ");
    scanf("%f", &area4);

    printf("PIB (use valor em bilhões, use ponto decimal): ");
    scanf("%f", &pib4);

    printf("Número de Pontos Turísticos (inteiro): ");
    scanf("%d", &pontos_tur4);

  // Área para exibição dos dados da cidade

   printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur2);

    printf("\nCarta 3:\n");
    printf("Estado: %c\n", estado3);
    printf("Código: %s\n", codigo3);
    printf("Nome da Cidade: %s\n", cidade3);
    printf("População: %d\n", populacao3);
    printf("Área: %.2f km²\n", area3);
    printf("PIB: %.2f bilhões de reais\n", pib3);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur3);

    printf("\nCarta 4:\n");
    printf("Estado: %c\n", estado4);
    printf("Código: %s\n", codigo4);
    printf("Nome da Cidade: %s\n", cidade4);
    printf("População: %d\n", populacao4);
    printf("Área: %.2f km²\n", area4);
    printf("PIB: %.2f bilhões de reais\n", pib4);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur4);

  return 0;
} 
