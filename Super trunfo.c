#include <stdio.h>
#include <string.h>  // necessário para strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades
// utilizando scanf para entrada de dados e printf para exibir as informações.
// Nível intermediário: cálculo de densidade populacional e PIB per capita.

int main() {

    // =========================================================
    // Declaração das variáveis para a Carta 1
    // =========================================================
    char  estado1;             // letra de 'A' a 'H'
    char  codigo1[5];          // ex: "A01" + '\0' -> tamanho 5 para folga
    char  cidade1[100];        // nome da cidade (pode conter espaços)
    int   populacao1;          // número de habitantes
    float area1;               // área em km²
    float pib1;                // PIB (em bilhões de reais)
    int   pontos_tur1;         // número de pontos turísticos
    float densidade1;          // densidade populacional (hab/km²)
    float pib_per_capita1;     // PIB per capita (reais por habitante)
    float superpoder1;         // soma de todos os atributos numéricos

    // =========================================================
    // Declaração das variáveis para a Carta 2
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
    // CORREÇÃO: o bloco /* estava aberto e nunca fechado, tornando
    //           todas essas declarações um comentário — o que causava
    //           erro de "variável não declarada" mais abaixo.
    // =========================================================
    int resultado_populacao;     // 1 = carta 1 vence, 0 = carta 2 vence
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_tur;
    int resultado_densidade;     // menor densidade = melhor
    int resultado_pib_per_capita;
    int resultado_superpoder;

    // Variável auxiliar para consumir caracteres residuais do buffer de entrada
    int ch;

    // =========================================================
    // Entrada de dados — Carta 1
    // =========================================================
    printf("========================================\n");
    printf("   SUPER TRUNFO - Cadastro de Cartas\n");
    printf("========================================\n\n");

    printf("Cadastro da Carta 1:\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);            // espaço antes de %c ignora whitespace anterior

    printf("Código da Carta (ex: A01): ");
    scanf("%4s", codigo1);             // lê string sem espaços, limitado a 4 chars

    // Consumir o '\n' deixado pelo scanf antes de usar fgets
    while ((ch = getchar()) != '\n' && ch != EOF) { /* descarta */ }

    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);  // fgets permite nomes com espaços
    cidade1[strcspn(cidade1, "\n")] = '\0';  // remove o '\n' final

    printf("População (inteiro): ");
    scanf("%d", &populacao1);

    printf("Área (em km², use ponto decimal): ");
    scanf("%f", &area1);

    printf("PIB (valor em bilhões, use ponto decimal): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos (inteiro): ");
    scanf("%d", &pontos_tur1);

    // Consumir '\n' antes da próxima leitura com fgets
    while ((ch = getchar()) != '\n' && ch != EOF) { /* descarta */ }

    // =========================================================
    // Entrada de dados — Carta 2
    // =========================================================
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%4s", codigo2);

    while ((ch = getchar()) != '\n' && ch != EOF) { /* descarta */ }

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

    while ((ch = getchar()) != '\n' && ch != EOF) { /* descarta */ }

    // =========================================================
    // Cálculos — densidade, PIB per capita e superpoder
    //
    // densidade   = população / área
    // pib_per_cap = (pib * 1e9) / população   [pib em bilhões → reais]
    // superpoder  = população + área + pib_per_capita + pontos_turísticos
    //               + (1 / densidade)          [inverso da densidade]
    // =========================================================

    /* Cálculos para a Carta 1 */
    densidade1      = (float)populacao1 / area1;                        
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superpoder1     = populacao1 + area1 + pib_per_capita1              
       + pontos_tur1 + (1.0f / densidade1);             
                                                                        

    /* Cálculos para a Carta 2 */
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

    /* Carta 1 */
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

    /* Carta 2 */
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
    // Comparação entre as cartas
    // Os operadores > e < retornam 1 (verdadeiro) ou 0 (falso).
    // resultado = 1 → Carta 1 vence nesse atributo
    // resultado = 0 → Carta 2 vence (ou empate)
    //
    // Atenção: para DENSIDADE, menor valor é melhor,
    // portanto a Carta 1 vence quando densidade1 < densidade2.
    // =========================================================
    resultado_populacao     = populacao1     > populacao2;
    resultado_area          = area1          > area2;
    resultado_pib           = pib1           > pib2;
    resultado_pontos_tur    = pontos_tur1    > pontos_tur2;
    resultado_densidade     = densidade1     < densidade2;    
    resultado_pib_per_capita= pib_per_capita1> pib_per_capita2;
    resultado_superpoder    = superpoder1    > superpoder2;   

    // CORREÇÃO: os printf abaixo tinham \n fora das aspas e outros erros de sintaxe.
    // Resultado é int (0 ou 1), então o formato correto é %d, não %.4f.
    printf("\n========================================\n");
    printf("         COMPARAÇÃO DAS CARTAS\n");
    printf("  (1 = Carta 1 vence | 0 = Carta 2 vence)\n");
    printf("========================================\n");
    printf("  Comparação População:            %d\n", resultado_populacao);
    printf("  Comparação Área:                 %d\n", resultado_area);
    printf("  Comparação PIB:                  %d\n", resultado_pib);
    printf("  Comparação Pontos Turísticos:    %d\n", resultado_pontos_tur);
    printf("  Comparação Densidade Popul.:     %d\n", resultado_densidade);
    printf("  Comparação PIB per Capita:       %d\n", resultado_pib_per_capita);
    printf("  Comparação Super Poder:          %d\n", resultado_superpoder);

    printf("\n========================================\n");
    printf("    Comparação concluída com sucesso!\n");
    printf("========================================\n");

    return 0; // encerra o programa com sucesso
}