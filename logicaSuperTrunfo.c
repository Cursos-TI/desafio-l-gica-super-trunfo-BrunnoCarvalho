#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
        //Dados da Carta 1:
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int qtdPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    //Dados da Carta 2:
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int qtdPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    //Variáveis para comparação de atributos das cartas:
    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoQtdPontosTuristicos, resultadoDensidadePopulacional, resultadoPirPerCapita, resultadoSuperPoder;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Cadastro da Carta 1: \n");

    printf("Digite uma letra que representa o estado (A-H): \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", codigo1);
    getchar();  //Usado para remover o "\n" deixado no buffer quando executa o scanf anterior. Desta forma não pulamos a instrução seguinte.

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais, ex: 699.28): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &qtdPontosTuristicos1);

    printf("\n");
    getchar();

    //Cálculo da densidade populacional da Carta 1:

    densidadePopulacional1 = populacao1/area1;

    //Cálculo do PIB per capita da Carta 1:

    pibPerCapita1 = (pib1 * 1000000000.0)/(float) populacao1; //Multiplicação por 1000000000 para transformar em reais.

    //Calculo do super poder da Carta 1:
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)qtdPontosTuristicos1 + pibPerCapita1 + (1.0f/ densidadePopulacional1);
     
    //Início do cadastro da carta 2

    printf("Cadastro da Carta 2: \n");

    printf("Digite uma letra que representa o estado (A-H): \n");
    scanf("%c", &estado2);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", codigo2);
    getchar(); //Usado para remover o "\n" deixado no buffer quando executa o scanf anterior. Desta forma não pulamos a instrução seguinte.

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais, ex: 699.28): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &qtdPontosTuristicos2);

    //Cálculo da densidade populacional da Carta 2:

    densidadePopulacional2 = populacao2/area2;

    //Cálculo do PIB per capita da Carta 2:

    pibPerCapita2 = (pib2 * 1000000000.0)/ (float) populacao2;

    //Calculo do super poder da Carta 1:
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)qtdPontosTuristicos2 + pibPerCapita2 + (1.0f/ densidadePopulacional2);

    printf("\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

     // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    int opcao = 0;
    int opcao2 = 0;
    int resultado1 = 0;
    int resultado2 = 0;

    printf("Escolha o primeiro atributo que deseja comparar:\n");
    printf("1. Nome das cidades (apenas exibirá informações)\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    scanf("%d", &opcao);

    printf("Escolha o segundo atributo que deseja comparar:\n");
    if (opcao != 1)
        printf("1. Nome das cidades (apenas exibirá informações)\n");
    if (opcao != 2)
        printf("2. População\n");
    if (opcao != 3)
        printf("3. Área\n");
    if (opcao != 4)
        printf("4. PIB\n");
    if (opcao != 5)
        printf("5. Número de pontos turísticos\n");
    if (opcao != 6)
        printf("6. Densidade demográfica\n");
    scanf("%d", &opcao2);

    if(opcao2 == opcao){
        printf("Você escolheu opções iguais!");
        return 0;
    }

    switch (opcao)
    {
    case 1:
        printf("Nome das cidades: %s - %s\n", nomeCidade1, nomeCidade2);
        printf("Atributo usado para comparação: nome das cidades\n");
        printf("População das cidades: %lu - %lu\n", populacao1, populacao2);
        printf("Área das cidades: %.2f km² - %.2f km² \n", area1, area2);
        printf("PIB das cidades: %.2f - %.2f \n", pib1, pib2);
        printf("Número de Pontos Turísticos das cidades: %d - %d\n", qtdPontosTuristicos1, qtdPontosTuristicos2);
        printf("Densidade demográfica das cidades: %.2f hab/km² - %.2f hab/km² \n", densidadePopulacional1, densidadePopulacional2);
        return 0;
        break;
    case 2:
        resultado1 = (populacao1 > populacao2) ? 1: 0;
        printf("1º atributo usado para comparação: população\n");
        printf("População das cidades: %lu - %lu\n", populacao1, populacao2);
        break;
    case 3:
        resultado1 = (area1 > area2)? 1: 0;
        printf("1º atributo usado para comparação: área\n");
        printf("Área das cidades: %.2f km² - %.2f km² \n", area1, area2);
        break;
    case 4:
        resultado1 = (pib1 > pib2)? 1: 0;
        printf("1º atributo usado para comparação: PIB\n");
        printf("PIB das cidades: %.2f - %.2f \n", pib1, pib2);
        break;
    case 5:         
        resultado1 = (qtdPontosTuristicos1 > qtdPontosTuristicos2)? 1: 0;
        printf("1º atributo usado para comparação: quantidade de pontos turísticos\n");
        printf("Número de Pontos Turísticos das cidades: %d - %d\n", qtdPontosTuristicos1, qtdPontosTuristicos2);
        break;
    case 6: 
        resultado1 = (densidadePopulacional1 < densidadePopulacional2)? 1: 0;
        printf("1º atributo usado para comparação: densidade demográfica\n");
        printf("Densidade demográfica das cidades: %.2f hab/km² - %.2f hab/km² \n", densidadePopulacional1, densidadePopulacional2);
        break;
    
    default:
        printf("Escolha de opção inválida!");
        break;
    }

    switch (opcao2)
    {
    case 1:
        printf("Nome das cidades: %s - %s\n", nomeCidade1, nomeCidade2);
        printf("Atributo usado para comparação: nome das cidades\n");
        printf("População das cidades: %lu - %lu\n", populacao1, populacao2);
        printf("Área das cidades: %.2f km² - %.2f km² \n", area1, area2);
        printf("PIB das cidades: %.2f - %.2f \n", pib1, pib2);
        printf("Número de Pontos Turísticos das cidades: %d - %d\n", qtdPontosTuristicos1, qtdPontosTuristicos2);
        printf("Densidade demográfica das cidades: %.2f hab/km² - %.2f hab/km² \n", densidadePopulacional1, densidadePopulacional2);
        return 0;
        break;
    case 2:
        resultado2 = (populacao1 > populacao2) ? 1: 0;
        printf("2º atributo usado para comparação: população\n");
        printf("População das cidades: %lu - %lu\n", populacao1, populacao2);
        break;
    case 3:
        resultado2 = (area1 > area2)? 1: 0;
        printf("2º atributo usado para comparação: área\n");
        printf("Área das cidades: %.2f km² - %.2f km² \n", area1, area2);
        break;
    case 4:
        resultado2 = (pib1 > pib2)? 1: 0;
        printf("2º atributo usado para comparação: PIB\n");
        printf("PIB das cidades: %.2f - %.2f \n", pib1, pib2);
        break;
    case 5:         
        resultado2 = (qtdPontosTuristicos1 > qtdPontosTuristicos2)? 1: 0;
        printf("2º atributo usado para comparação: quantidade de pontos turísticos\n");
        printf("Número de Pontos Turísticos das cidades: %d - %d\n", qtdPontosTuristicos1, qtdPontosTuristicos2);
        break;
    case 6: 
        resultado2 = (densidadePopulacional1 < densidadePopulacional2)? 1: 0;
        printf("2º atributo usado para comparação: densidade demográfica\n");
        printf("Densidade demográfica das cidades: %.2f hab/km² - %.2f hab/km² \n", densidadePopulacional1, densidadePopulacional2);
        break;
    
    default:
        printf("Escolha de opção inválida!");
        break;
    }

    if(resultado1 && resultado2){
        printf("Carta 1 venceu!\n");
    }else if(resultado1 != resultado2){
        printf("Empate!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }

    return 0;
}
