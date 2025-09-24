#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estadoCarta1;[30]
    char codigoCarta1[5]; // Ex: "A01" + caractere nulo '\0'
    char nomeCidade1[50];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char estadoCarta2;[30]
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTuristicos2;

    // Variáveis para cálculos da carta 1
float densidadePopulacional1;
float pibPerCapita1;
// Variáveis para cálculos da carta 2
float densidadePopulacional2;
float pibPerCapita2;

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

    // --- Fim do Cadastro da Carta 2 ---

    // Exibir os dados cadastrados para verificação
    
    printf("\n--- Dados da Carta 1 ---\n");
    
    printf("Estado: %c\n", estadoCarta1);
    
    printf("Código da Cidade: %s\n", codigoCarta1);
    
    printf("Nome da Cidade: %s\n", nomeCidade1);
    
    printf("População: %d\n", populacaoCarta1);
    
    printf("Área (km²): %.2f\n", areaCarta1);
    
    printf("PIB (bilhões): %.2f\n", pibCarta1);
    
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);       
    
   
   
    printf("\n--- Dados da Carta 2 ---\n");
    
    printf("Estado: %c\n", estadoCarta2);
    
    printf("Código da Cidade: %s\n", codigoCarta2);
    
    printf("Nome da Cidade: %s\n", nomeCidade2);
    
    printf("População: %d\n", populacaoCarta2);
    
    printf("Área (km²): %.2f\n", areaCarta2);
    
    printf("PIB (bilhões): %.2f\n", pibCarta2);
    
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
        

    
}