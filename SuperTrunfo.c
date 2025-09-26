#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estadoCarta1[30];
    char codigoCarta1[5]; // Ex: "A01" + caractere nulo '\0'
    char nomeCidade1[50];
    unsigned long int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char estadoCarta2 [30];
    char codigoCarta2[5];
    char nomeCidade2[50];
    unsigned long int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTuristicos2;

    // Variáveis para cálculos da carta 1
    float densidadePopulacional1;
    float pibPerCapita1;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder1, superPoder2;

    // --- Início do Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o estado (uma letra maiúscula): ");
    scanf(" %c", &estadoCarta1);

    // Adicionei estas linhas para limpar o buffer de entrada
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
printf("Digite o código da cidade (ex: A01): ");
scanf("%s", codigoCarta1); // Removido o '&' 

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nomeCidade1);

    printf("Digite a população: ");
    scanf( "%d", &populacaoCarta1); 
    
    printf("Digite a área (em km²): ");
    scanf( "%f", &areaCarta1);       

    printf("Digite o PIB (em bilhões): ");
    scanf( "%f", &pibCarta1);        
    
    printf("Digite o número de pontos turísticos: ");
    scanf( "%d", &pontosTuristicos1);  
    
    
    // Cálculo da densidade populacional e PIB per capita da carta 1
    // densidade = população / área
    // pib per capita = pib / população
    // Ambos são float para precisão
    if (areaCarta1 > 0 && populacaoCarta1 > 0) {
        densidadePopulacional1 = populacaoCarta1 / areaCarta1;
        pibPerCapita1 = pibCarta1 / populacaoCarta1;
    } else {
        densidadePopulacional1 = 0;
        pibPerCapita1 = 0;
    }
    
    // --- Fim do Cadastro da Carta 1 ---

    // --- Início do Cadastro da Carta 2 ---

    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite o estado (uma letra maiúscula): ");
    scanf(" %c", &estadoCarta2);


    // Adicionei estas linhas para limpar o buffer de entrada
    while ((c = getchar()) != '\n' && c != EOF) { }
    
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigoCarta2); // Repetir o mesmo padrão de remoção do "&"

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nomeCidade2);

    printf("Digite a população: ");
    scanf( "%d", &populacaoCarta2); 

    printf("Digite a área (em km²): ");
    scanf( "%f", &areaCarta2);      

    printf("Digite o PIB (em bilhões): ");
    scanf( "%f", &pibCarta2);

    printf("Digite o número de pontos turísticos: ");
    scanf( "%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita da carta 2
    if (areaCarta2 > 0 && populacaoCarta2 > 0) {
        densidadePopulacional2 = populacaoCarta2 / areaCarta2;
        pibPerCapita2 = pibCarta2 / populacaoCarta2;
    } else {
        densidadePopulacional2 = 0;
        pibPerCapita2 = 0;
    }
    // --- Fim do Cadastro da Carta 2 ---

    // Cálculo do Super Poder
    // superPoder = população + área + PIB + pontos turísticos + PIB per capita + (1.0 / densidade populacional)
    superPoder1 = (float)populacaoCarta1 + areaCarta1 + pibCarta1 + (float)pontosTuristicos1 + pibPerCapita1 + (densidadePopulacional1 > 0 ? (1.0f / densidadePopulacional1) : 0);
    superPoder2 = (float)populacaoCarta2 + areaCarta2 + pibCarta2 + (float)pontosTuristicos2 + pibPerCapita2 + (densidadePopulacional2 > 0 ? (1.0f / densidadePopulacional2) : 0);

    // --- Comparação dos atributos ---
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacaoCarta1 > populacaoCarta2 ? 1 : 2), (populacaoCarta1 > populacaoCarta2 ? 1 : 0));
    printf("Área: Carta %d venceu (%d)\n", (areaCarta1 > areaCarta2 ? 1 : 2), (areaCarta1 > areaCarta2 ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n", (pibCarta1 > pibCarta2 ? 1 : 2), (pibCarta1 > pibCarta2 ? 1 : 0));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2 ? 1 : 2), (pontosTuristicos1 > pontosTuristicos2 ? 1 : 0));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2 ? 1 : 2), (densidadePopulacional1 < densidadePopulacional2 ? 1 : 0));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2 ? 1 : 2), (superPoder1 > superPoder2 ? 1 : 0));

    // Exibir os dados cadastrados para verificação
    
    printf("\n--- Dados da Carta 1 ---\n");
    
    printf("Estado: %c\n", estadoCarta1);
    
    printf("Código da Cidade: %s\n", codigoCarta1);
    
    printf("Nome da Cidade: %s\n", nomeCidade1);
    
    printf("População: %d\n", populacaoCarta1);
    
    printf("Área (km²): %.2f\n", areaCarta1);
    
    printf("PIB (bilhões): %.2f\n", pibCarta1);
    
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    
    printf("PIB per Capita: %.2f\n", pibPerCapita1);       
    
   
   
    printf("\n--- Dados da Carta 2 ---\n");
    
    printf("Estado: %c\n", estadoCarta2);
    
    printf("Código da Cidade: %s\n", codigoCarta2);
    
    printf("Nome da Cidade: %s\n", nomeCidade2);
    
    printf("População: %d\n", populacaoCarta2);
    
    printf("Área (km²): %.2f\n", areaCarta2);
    
    printf("PIB (bilhões): %.2f\n", pibCarta2);
    
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
        

    
}