#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
 
        printf("*** BEM VINDO(A) AO DESAFIO SUPER TRUNFO***\n");
    
        // Dados carta 1
        char Estado1;
        char Codigo1[50];
        char nomecidade1[50];
        int populacao1;
        float Area1;
        float Pib1;
        int Numeropontosturisticos1;
    
        // Dados carta 2
        char Estado2;
        char Codigo2[50];
        char nomecidade2[50];
        int populacao2;
        float Area2;
        float Pib2;
        int Numeropontosturisticos2;
    
        // Entrada e armazenamentos dos dados das cartas.

        // Primeira carta

        printf("Vamos definir os valores das cartas\n");
       
       
        printf("Começando pela Primeira carta:\n");

    
        printf("Defina o Estado:\n");
        scanf(" %c", &Estado1); 
    
        printf("Defina o Código da carta:\n");
        scanf("%s", Codigo1);  
    
        printf("Defina o Nome da cidade (Sem colocar espaço em caso de nome composto) da carta:\n");
        scanf("%s", nomecidade1);
    
        printf("Defina a população da cidade:\n");
        scanf("%d", &populacao1);
    
        printf("Defina a área da cidade em km2:\n");
        scanf("%f", &Area1);
    
        printf("Defina o PIB da cidade:\n");
        scanf("%f", &Pib1);
    
        printf("Defina o número de pontos turísticos da cidade:\n");
        scanf("%d", &Numeropontosturisticos1);
    
        // Segunda carta
        printf("Parabéns, os valores da primeira carta foram definidos\n");
        printf("Agora vamos definir os valores da segunda carta:\n");
    
        printf("Defina o Estado:\n");
        scanf(" %c", &Estado2);
    
        printf("Defina o Código da carta:\n");
        scanf("%29s", Codigo2);
    
        printf("Defina o Nome da cidade (Sem colocar espaço em caso de nome composto) da carta:\n");
        scanf("%29s", nomecidade2);
    
        printf("Defina a população da cidade:\n");
        scanf("%d", &populacao2);
    
        printf("Defina a área da cidade em km2:\n");
        scanf("%f", &Area2);
    
        printf("Defina o PIB da cidade:\n");
        scanf("%f", &Pib2);
    
        printf("Defina o número de pontos turísticos da cidade:\n");
        scanf("%d", &Numeropontosturisticos2);
    
        printf("***PARABÉNS*** os valores das cartas foram definidos com sucesso\n");
    
        // Exibição das informações

        // Carta 1
        printf("\nCARTA 1:\n");
        printf("Estado: %c\n", Estado1);
        printf("Codigo: %s\n", Codigo1);
        printf("Nome da cidade: %s\n", nomecidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", Area1);
        printf("PIB: %.2f bilhões de reais\n", Pib1);
        printf("Número de Pontos Turísticos: %d\n", Numeropontosturisticos1);
    

        //Carta 2

        printf("\nCARTA 2:\n");
        printf("Estado: %c\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Nome da cidade: %s\n", nomecidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", Area2);
        printf("PIB: %.2f bilhões de reais\n", Pib2);
        printf("Número de Pontos Turísticos: %d\n", Numeropontosturisticos2);
    
        return 0;
    }