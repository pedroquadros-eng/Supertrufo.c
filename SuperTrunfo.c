#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estadoCarta1;
    char codigoCarta1[5]; // Ex: "A01" + caractere nulo '\0'
    char nomeCidade1[50];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char estadoCarta2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTuristicos2;

    // --- Início do Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

   printf("Digite o estado (uma letra maiúscula): ");
scanf(" %c", &estadoCarta1);

// Adicione estas linhas para limpar o buffer de entrada
int c;
while ((c = getchar()) != '\n' && c != EOF) { }

printf("Digite o código da cidade (ex: A01): ");
scanf("%s", codigoCarta1); // Removido o '&' - veja a observação abaixo

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

    // Adicione estas linhas para limpar o buffer de entrada
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

    
}