#include <stdio.h>
#include <string.h>  // necessário para strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades
// utilizando scanf para entrada de dados e printf para exibir as informações.
// Nível intermediário: cálculo de densidade populacional e PIB per capita.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    /* Declaração das variáveis para a Carta 1 */
    char  estado1;             // letra de 'A' a 'H'
    char  codigo1[5];          // ex: "A01" + '\0' -> tamanho 5 para folga
    char  cidade1[100];        // nome da cidade (pode conter espaços)
    int   populacao1;          // número de habitantes
    float area1;               // área em km²
    float pib1;                // PIB (em bilhões de reais)
    int   pontos_tur1;         // número de pontos turísticos
    float densidade1;          // densidade populacional (hab/km²)
    float pib_per_capita1;     // PIB per capita (reais por habitante)
	float superpoder1;         // somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional
	

    /* Declaração das variáveis para a Carta 2 */
    char  estado2;
    char  codigo2[5];
    char  cidade2[100];
    int   populacao2;
    float area2;
    float pib2;
    int   pontos_tur2;
    float densidade2;          // densidade populacional
    float pib_per_capita2;     // PIB per capita
	float superpoder2          // somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional 

    /* Declaração das Variaveis de comparacao
	float resultado_populacao1;
	float resultado_area1;
	float resultado_pib1;
	float resultado_pontos_tur1;
	float resultado_densidade1;
	float resultado_pib_per_capita1;
	float resultado_superpoder1;
	
    // -------------------------------------------------------------------------
    int ch;  // variável auxiliar para consumir caracteres residuais do buffer

    // =========================================================
    // Área para entrada de dados
    // =========================================================

    /* ---------- Entrada de dados da Carta 1 ---------- */
    printf("========================================\n");
    printf("   SUPER TRUNFO - Cadastro de Cartas\n");
    printf("========================================\n\n");

    printf("Cadastro da Carta 1:\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);            // espaço antes de %c para ignorar whitespace

    printf("Código da Carta (ex: A01): ");
    scanf("%4s", codigo1);             // lê string sem espaços (A01)

    // Consumir o restante da linha antes de usar fgets
    // (evita que o '\n' deixado por scanf seja lido pelo fgets abaixo)
    while ((ch = getchar()) != '\n' && ch != EOF) { /* consume */ }

    // fgets permite nomes com espaços
    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remover '\n' final, se houver

    printf("População (inteiro): ");
    scanf("%d", &populacao1);

    printf("Área (em km², use ponto decimal): ");
    scanf("%f", &area1);

    printf("PIB (valor em bilhões, use ponto decimal): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos (inteiro): ");
    scanf("%d", &pontos_tur1);

    // Consumir newline antes da próxima leitura de linha
    while ((ch = getchar()) != '\n' && ch != EOF) { /* consume */ }

    /* ---------- Entrada de dados da Carta 2 ---------- */
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

  
    // -------------------------------------------------------------------------
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

    printf("PIB (valor em bilhões, use ponto decimal): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos (inteiro): ");
    scanf("%d", &pontos_tur2);

    while ((ch = getchar()) != '\n' && ch != EOF) { /* consume */ }

    // =========================================================
    // Cálculos de densidade e PIB per capita
    // Fórmula densidade   = população / área
    // Fórmula pib_per_cap = (pib * 1.000.000.000) / população
    //   -> pib está em bilhões, então multiplicamos por 1e9 para
    //      obter o valor em reais antes de dividir por habitante
    // =========================================================

    /* Cálculos para a Carta 1 */
    densidade1      = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
	superpoder1 = (populacao1 + area1 + pib_per_capita1 + pontos_tur1 + (1 / densidade1))

    /* Cálculos para a Carta 2 */
    densidade2      = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;
	superpoder1 = (populacao2 + area2 + pib_per_capita2 + pontos_tur2 (1 / densidade2))

    // =========================================================
    // Exibição de todas as cartas com os resultados
    // =========================================================

    printf("\n========================================\n");
    printf("    DADOS DAS CARTAS CADASTRADAS\n");
    printf("========================================\n");

    /* ---------- Exibição da Carta 1 ---------- */
    printf("\nCarta 1:\n");
    printf("  Estado: %c\n",                          estado1);
    printf("  Código: %s\n",                          codigo1);
    printf("  Nome da Cidade: %s\n",                  cidade1);
    printf("  População: %d habitantes\n",             populacao1);
    printf("  Área: %.2f km²\n",                      area1);
    printf("  PIB: %.2f bilhões de reais\n",           pib1);
    printf("  Pontos Turísticos: %d\n",                pontos_tur1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("  PIB per Capita: R$ %.2f\n",              pib_per_capita1);

    /* ---------- Exibição da Carta 2 ---------- */
    printf("\nCarta 2:\n");
    printf("  Estado: %c\n",                          estado2);
    printf("  Código: %s\n",                          codigo2);
    printf("  Nome da Cidade: %s\n",                  cidade2);
    printf("  População: %d habitantes\n",             populacao2);
    printf("  Área: %.2f km²\n",                      area2);
    printf("  PIB: %.2f bilhões de reais\n",           pib2);
    printf("  Pontos Turísticos: %d\n",                pontos_tur2);

    printf("\n========================================\n");
    printf("    Cadastro concluído com sucesso!\n");
    printf("========================================\n");
  
    // -------------------------------------------------------------------------
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("  PIB per Capita: R$ %.2f\n",              pib_per_capita2);
	
	// -----------------Comparação Cartas--------------------------------------
	
	resultado_populacao1 = populacao1 > populacao2;
    resultado_area1 = area1 > area2;
	resultado_pib1 = pib1 > pib2;
	resultado_pontos_tur1 = pontos_tur1 > pontos_tur2;
	resultado_densidade1 = densidade1 < densidade2;
	resultado_pib_per_capita1 = pib_per_capita1 < pib_per_capita2;
	resultado_superpoder1 = superpoder1 < superpoder2;
	
	printf(" Se resultado comparação carta 1 for igual a 1 venceu !!!"\n);
	printf(" Comparacao Populacao Carta1: %.4f",           resultado_populacao1\n)
	printf(" Comparacao area Carta1: %.4f",           resultado_area1\n);
	printf(" Comparacao PIB Carta1: %.4f",           resultado_pib1\n);
	printf(" Comparacao Pontos Turisticos Carta1: %.4f",           resultado_pontos_tur1\n);
	printf(" Comparacao Densidade Populacional Carta1: %.4f",           resultado_densidade1\n);
	printf(" Comparacao PIB Per Capita Carta1: %.4f",           resultado_pib_per_capita1\n);
	printf(" Comparacao Super Poder Carta1: %.4f",           resultado_superpoder1\n);

    printf("\n========================================\n");
    printf("    Comparação concluída com sucesso!\n");
    printf("========================================\n");

    return 0; // Encerra o programa com sucesso
}