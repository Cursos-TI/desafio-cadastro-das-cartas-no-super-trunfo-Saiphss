//Diretiva de pré-processamento
#include <stdio.h>
//Biblioteca para manipular Strings
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Declaração de variáveis
    char estado;
    char codigoCarta[4];
    char nomeCidade[20];
    int populacao;
    float areaTotal;
    float pib;
    int pontosTuristicos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
      

    printf("Super Trunfo em C\n");

    printf("Considerando os estados de A a H, digite o estado:\n");
    scanf(" %c", &estado);

    printf("Digite o código da carta (Estado + número entre 01 a 04):\n");
    scanf("%s", codigoCarta);

    
    getchar();
    printf("Digite o nome da cidade:\n");
    //Utilizar a função fgets para pegar múltiplas palavras
    //Referência: https://www.w3schools.com/c/c_user_input.php
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    //procurando a ocorrencia de quebra de linha com a função strcspn()
    //Referência: https://www.w3schools.com/c/ref_string_strcspn.php 
    nomeCidade[strcspn(nomeCidade, "\n")] = 0;

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", &areaTotal);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Digite os pontos turisticos da cidade:\n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    

    printf("\n\nInformações da carta:\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %.3f\nPIB: %.3f\nPontos Turísticos: %d\n",
           estado, codigoCarta, nomeCidade, populacao, areaTotal, pib, pontosTuristicos);

    return 0;
}
