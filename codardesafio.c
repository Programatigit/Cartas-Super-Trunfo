#include <stdio.h>

int main() {
    char estado;   
    char codigo[4];    
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    printf("Digite o estado (ex: A):\n");
    scanf(" %c", &estado); // O espaço ignora espaços em branco pendentes

    printf("Digite o código da cidade (ex: A01):\n");
    scanf("%s", codigo); // Usar %s para ler a string

    printf("Digite o nome da cidade:\n");
    getchar(); // Limpa o buffer para evitar problemas com \n
    fgets(cidade, sizeof(cidade), stdin); // Lê o nome da cidade, incluindo espaços

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a área:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados
    printf("\nEstado: %c\n", estado);
    printf("Código: %s\n", codigo); // Corrigido para %s
    printf("Nome da Cidade: %s", cidade); // Exibe o nome da cidade
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area); // Formatação da área
    printf("PIB: %.2f\n", pib); 
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}