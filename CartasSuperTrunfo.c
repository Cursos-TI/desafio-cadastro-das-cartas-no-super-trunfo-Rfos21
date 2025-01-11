#include <stdio.h>

int main() {
    int populacao, pontoTuristico, pibCidade;
    float areaCidade;
    char nomeCidade[50], codCidade[50];
    char estado;
    
    
    printf("Cadastro de cartas do jogo Super Trunfo!!!\n");
    printf("Digite o nome do estado, podendo ser apenas uma sigla de A a H:\n ");
    scanf("%c", &estado);
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
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", nomeCidade);
    printf("Código da cidade: %s\n", codCidade);
    printf("Populção: %d\n", populacao);
    printf("Área da cidade: %f\n", areaCidade);
    printf("PIB: %d\n", pibCidade);
    printf("Pontos turísticos: %d\n", pontoTuristico);

    return 0;
}
