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


int main() {
    int populacao, pontoTuristico, pibCidade;
    float areaCidade;
    char nomeCidade[50], codCidade[50];
    
    printf("Cadastro de cartas do jogo Super Trunfo!!!\n");
    printf("Digite o nome da cidade:\n ");
    scanf("%s", &nomeCidade);
    printf("Digite o código da cidade:\n ");
    scanf("%s", &codCidade);    
    printf("Digite o valor da população:\n ");
    scanf("%d", &populacao);
    printf("Digite o valor da área da cidade em km²:\n ");
    scanf("%f", &areaCidade);
    printf("Digite o PIB da cidade em bilhôes:\n ");
    scanf("%d", &pibCidade);
    printf("Digite a quantidade de pontos turísticos da cidade:\n ");
    scanf("%d", &pontoTuristico);
    printf("Cidade: %s\n", nomeCidade);
    printf("Código da cidade: %s\n", codCidade);
    printf("Populção: %d\n", populacao);
    printf("Área da cidade: %f\n", areaCidade);
    printf("PIB: %d\n", pibCidade);
    printf("Pontos turísticos: %d\n", pontoTuristico);

    return 0;
}
