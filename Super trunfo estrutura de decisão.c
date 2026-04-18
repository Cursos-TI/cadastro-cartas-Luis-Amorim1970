#include <stdio.h>
#include <string.h>  // necessário para strcspn
 
// Desafio Super Trunfo - Países
// Tema 3 - Cadastro das cartas

// =========================================================
// Autor Luís Eduardo Amorim
// Data: 17/06/2024
// =========================================================
 
int main() {
 
    // =========================================================
    // Declaração das variáveis — Carta 1
    // =========================================================
    char  estado1;
    char  codigo1[5];
    char  cidade1[100];
    int   populacao1;
    float area1;
    float pib1;
    int   pontos_tur1;
    float densidade1;
    float pib_per_capita1;
    float superpoder1;
 
    // =========================================================
    // Declaração das variáveis — Carta 2
    // =========================================================
    char  estado2;
    char  codigo2[5];
    char  cidade2[100];
    int   populacao2;
    float area2;
    float pib2;
    int   pontos_tur2;
    float densidade2;
    float pib_per_capita2;
    float superpoder2;
 
    // =========================================================
    // Declaração das variáveis de comparação
    // Cada variável armazena 1 (Carta 1 vence) ou 0 (Carta 2 vence)
    // =========================================================
    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_tur;
    int resultado_densidade;      // menor densidade = melhor
    int resultado_pib_per_capita;
    int resultado_superpoder;
 
    int ch; // auxiliar para limpar o buffer de entrada
 
    // =========================================================
    // Entrada de dados — Carta 1
    // =========================================================
    printf("========================================\n");
    printf("   SUPER TRUNFO - Cadastro de Cartas\n");
    printf("========================================\n\n");
 
    printf("Cadastro da Carta 1:\n");
 
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);
 
    printf("Código da Carta (ex: A01): ");
    scanf("%4s", codigo1);
 
    while ((ch = getchar()) != '\n' && ch != EOF) { /* limpa buffer */ }
 
    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
 
    printf("População (inteiro): ");
    scanf("%d", &populacao1);
 
    printf("Área (em km², use ponto decimal): ");
    scanf("%f", &area1);
 
    printf("PIB (valor em bilhões, use ponto decimal): ");
    scanf("%f", &pib1);
 
    printf("Número de Pontos Turísticos (inteiro): ");
    scanf("%d", &pontos_tur1);
 
    while ((ch = getchar()) != '\n' && ch != EOF) { /* limpa buffer */ }
 
    // =========================================================
    // Entrada de dados — Carta 2
    // =========================================================
    printf("\nCadastro da Carta 2:\n");
 
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);
 
    printf("Código da Carta (ex: B02): ");
    scanf("%4s", codigo2);
 
    while ((ch = getchar()) != '\n' && ch != EOF) { /* limpa buffer */ }
 
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
 
    while ((ch = getchar()) != '\n' && ch != EOF) { /* limpa buffer */ }
 
    // =========================================================
    // Cálculos — densidade, PIB per capita e superpoder
    //
    // densidade   = população / área
    // pib_per_cap = (pib_bilhões * 1e9) / população
    // superpoder  = população + área + pib_per_capita
    //               + pontos_turísticos + (1 / densidade)
    // =========================================================
 
    densidade1      = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superpoder1     = populacao1 + area1 + pib_per_capita1
                      + pontos_tur1 + (1.0f / densidade1);
 
    densidade2      = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superpoder2     = populacao2 + area2 + pib_per_capita2
                      + pontos_tur2 + (1.0f / densidade2);
 
    // =========================================================
    // Exibição das cartas cadastradas
    // =========================================================
    printf("\n========================================\n");
    printf("    DADOS DAS CARTAS CADASTRADAS\n");
    printf("========================================\n");
 
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
    printf("  Superpoder: %.2f\n",                     superpoder1);
 
    printf("\nCarta 2:\n");
    printf("  Estado: %c\n",                          estado2);
    printf("  Código: %s\n",                          codigo2);
    printf("  Nome da Cidade: %s\n",                  cidade2);
    printf("  População: %d habitantes\n",             populacao2);
    printf("  Área: %.2f km²\n",                      area2);
    printf("  PIB: %.2f bilhões de reais\n",           pib2);
    printf("  Pontos Turísticos: %d\n",                pontos_tur2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("  PIB per Capita: R$ %.2f\n",              pib_per_capita2);
    printf("  Superpoder: %.2f\n",                     superpoder2);
 
    printf("\n========================================\n");
    printf("    Cadastro concluído com sucesso!\n");
    printf("========================================\n");
 
    // =========================================================
    // Comparações entre as cartas
    // O operador == compara valores (retorna 1 ou 0).
    // O operador =  é ATRIBUIÇÃO — nunca use = dentro de um if
    //               para comparar; sempre use ==.
    // =========================================================
    resultado_populacao      = populacao1     > populacao2;
    resultado_area           = area1          > area2;
    resultado_pib            = pib1           > pib2;
    resultado_pontos_tur     = pontos_tur1    > pontos_tur2;
    resultado_densidade      = densidade1     < densidade2;  // menor = melhor
    resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    resultado_superpoder     = superpoder1    > superpoder2;
 
    printf("\n========================================\n");
    printf("         COMPARAÇÃO DAS CARTAS\n");
    printf("========================================\n");
 
    
    printf("\n  População:         ");
    if (resultado_populacao == 1)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");
 
    printf("  Área:              ");
    if (resultado_area == 1)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");
 
    printf("  PIB:               ");
    if (resultado_pib == 1)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");
 
    printf("  Pontos Turísticos: ");
    if (resultado_pontos_tur == 1)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");
 
    printf("  Densidade Popul.:  ");
    if (resultado_densidade == 1)
        printf("Carta 1 venceu!\n");  // menor densidade = melhor
    else
        printf("Carta 2 venceu!\n");
 
    printf("  PIB per Capita:    ");
    if (resultado_pib_per_capita == 1)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");
 
    printf("  Super Poder:       ");
    if (resultado_superpoder == 1)
        printf("Carta 1 venceu!\n");
    else
        printf("Carta 2 venceu!\n");
 
    printf("\n========================================\n");
    printf("    Comparação concluída com sucesso!\n");
    printf("========================================\n");
 
    return 0;
}
 