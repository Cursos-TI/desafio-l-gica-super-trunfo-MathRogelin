#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

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
    
    // --------------------------------------------------------------------------------------------------------------

    // Mensagens de inicio
    printf("\n");
    printf("Programa Super Trunfo de Paises\n");
    printf("Cadastre as cartas com informacoes sobre as cidades.\n");

    //Declaro as variaveis que iram guarda as informacoes das cartas.

    /*
        variavel que ira obter o estado de A a H (Se é uma cidade de primeiro mundo ou abaixo)
        declaro do tipo char --> caracteres
    */
    char estado,estado2;
    /*
        variavel que ira obter o codigo (depois do estado, saber o subgrupo dessa cidade)
        declaro do tipo char(mas vai ser uma array de caracteres) --> caracteres[limite de 4 caracteres e uma quebra de linha (\n)]
        coloquei limite [4]
    */
    char codigo[4],codigo2[4];
    /*
        essa variavel vai obter os nomes, com o limite de ate 50 caracteres
        declaro do tipo char(mas vai ser uma array de caracteres) --> caracteres[limite de 49 caracteres e uma quebra de linha (\n)]
    */
    char nome[50],nome2[50];
    /*
        essa variavel vai obter o numero da populacao da cidade (em numero inteiro)
        ela agora pode ter um armazenamento maior, mas apenas de numeros positivos e foi dobrado seu tamanho
    */
    unsigned long int populacao,populacao2;
    /*
        Declaro duas variaveis do mesmo tipo (float --> numero com ponto fluante)
        Iram guardar o valo da area em Km e PIB(Produto Interno Bruto)
    */
    float area,area2;
    float pib,pib2;
    /*
        E por fim uma variavel guardando o numero de pontos turisticos
    */
    int pontosTuristicos,pontosTuristicos2;

    long double densidadePopulacional,densidadePopulacional2;
    long double pibPerCapital,pibPerCapital2;

    // quebro duas linhas
    printf("\n\n");
    // começo perguntando a primeira carta
    printf("Carta 1\n");
    // Estado (A, B, C, D, F, G ou H)
    printf("Estado(A a H): ");
    scanf(" %c", &estado);
    // Código (01,02,03 OU 04)
    // Defino um limite de caracteres aserem lidos (%4s --> 4 caracteres de uma array)
    // Não coloco o & na variavel pois a variavel já é um ponteiro (index = 0,1,2,3,...)
    printf("Codigo(01 a 04): ");
    scanf(" %4s", codigo);
    // Coloco %[^\n] para na leitura do nome ela considerar os espaco ( ^ = considerar, \n = espaco )
    // ela só quebrara se aperta enter (\n) e não tab
    printf("Nome da cidade: ");
    scanf(" %[^\n]",nome);
    // Pedi a populacao (um numero inteiro, não considera os decimais)
    printf("Populacao: ");
    scanf(" %d", &populacao);
    // Pedi a area total (aqui considera os numeros com decimais)
    printf("Area: ");
    scanf("%f", &area);
    // Pedi o PIB (aqui considera os numeros com decimais)
    printf("PIB: ");
    scanf("%l", &pib);
    // Pedi o numero de pontos turisticos (um numero inteiro, não considera os decimais)
    printf("Pontos Turisticos: ");
    scanf("%d",&pontosTuristicos);
    // Calculando Densidade Populacional e PIB per Capita para Terceira Carta
    densidadePopulacional = populacao / area;
    pibPerCapital = pib / populacao;

    // quebro duas linhas
    printf("\n\n");
    // começo perguntando a segunda carta
    printf("Carta 2\n");
    // Estado (A, B, C, D, F, G ou H)
    printf("Estado(A a H): ");
    scanf(" %c", &estado2);
    // Código (01,02,03 OU 04)
    // Defino um limite de caracteres aserem lidos (%4s --> 4 caracteres de uma array)
    // Não coloco o & na variavel pois a variavel já é um ponteiro (index = 0,1,2,3,...)
    printf("Codigo(01 a 04): ");
    scanf(" %4s", codigo2);
    // Coloco %[^\n] para na leitura do nome ela considerar os espaco ( ^ = considerar, \n = espaco )
    // ela só quebrara se aperta enter (\n) e não tab
    printf("Nome da cidade: ");
    scanf(" %[^\n]",nome2);
    // Pedi a populacao (um numero inteiro, não considera os decimais)
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    // Pedi a area total (aqui considera os numeros com decimais)
    printf("Area: ");
    scanf("%f", &area2);
    // Pedi o PIB (aqui considera os numeros com decimais)
    printf("PIB: ");
    scanf("%l", &pib2);
    // Pedi o numero de pontos turisticos (um numero inteiro, não considera os decimais)
    printf("Pontos Turisticos: ");
    scanf("%d",&pontosTuristicos2);
    // Calculando Densidade Populacional e PIB per Capita para segunda Carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapital2 = pib2 / populacao2;

    // comparaçoes
    int comparacaoPopula = populacao > populacao2;
    int comparacaoArea = area > area2;
    int comparacaoPib = pib > pib2;
    int comparacaoPibCapi = pibPerCapital > pibPerCapital2;
    int comparacaoPontosTuris = pontosTuristicos > pontosTuristicos2;
    int comparacaoDensidade = densidadePopulacional > densidadePopulacional2;
    int comparacaoSuperPoder = superPoder > superPoder2;

    // quebro duas linhas
    printf("\n\n");

    printf("Cartas Cadastradas com Sucesso...\n");
    printf("*******************************\n");
    printf("Cartas:");
    // quebro duas linhas
    printf("\n\n");
    // Apresentar primeira carta
    // um detalhe que coloco e que nas variaveis que guardam valores decimais (float), o sinal de %f mudei para %.2f, para exibir duas casas decimais
    printf("**Carta 1**\nCodigo: %c%s\nNome: %s\nPopulacao: %d\nArea: %.2f Km²\nPIB: %.2f bilhoes de reais\nPontos Turisticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", estado,codigo,nome,populacao,area,pib,pontosTuristicos,densidadePopulacional,pibPerCapital);
    // quebro duas linhas
    printf("\n\n");
    // Apresentar segunda carta
    printf("**Carta 2**\nCodigo: %c%s\nNome: %s\nPopulacao: %d\nArea: %.2f Km²\nPIB: %.2f bilhoes de reais\nPontos Turisticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", estado2,codigo2,nome2,populacao2,area2,pib2,pontosTuristicos2,densidadePopulacional2,pibPerCapital2);

    // quebro duas linhas
    printf("\n\n");
    // exibindo comparacao
    // comparação com if e else
    // variavel para guardar a escolha
    int escolha;
    printf("***Comparacao das Cartas***\n\n");
    printf("Escolha um atributo para comparação digitando o seu número (Exceto os nomes dos paises):\n\n");
    printf(" 1 - Nome do país (Exibe apenas os nomes)\n");
    printf(" 2 - Area \n");
    printf(" 3 - Populacao \n");
    printf(" 4 - PIB \n");
    printf(" 5 - Pontos Turisticos \n");
    printf(" 6 - Densidade Demografica (vence com o menor valor)\n");
    printf("Digite aqui: ");
    scanf("%d",&escolha);

    switch (escolha){
    case 1:
        printf("***Nomes dos paises:***\n\n");
        printf("Carta 1 - %s \n", nome);
        printf("Carta 2 - %s \n\n", nome2);
        break;
    case 2:
        printf("***Comparacao das Cartas (Atributo: Area)***\n\n");
        // se area for maior de area2
        if (area > area2){
            printf("Carta 1 - %s : %f\n", nome,area);
            printf("Carta 2 - %s : %f\n", nome2,area2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome);
        }else if(area2 > area){  // senão se pontosTuristicos2 for maior de pontosTuristicos
            printf("Carta 1 - %s : %d\n", nome,area);
            printf("Carta 2 - %s : %d\n", nome2,area2);
            printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
        }else{ // se pontosTuristicos for igual a pontosTuristicos2
            printf("Ambas as cartas possuem os mesmos valores:\n");
            printf("Carta 1 - %s : %d\n", nome,area);
            printf("Carta 2 - %s : %d\n\n\n", nome2,area2);
        }
        break;
    case 3:
        printf("***Comparacao das Cartas (Atributo: Populacao)***\n\n"); 
        // se populacao for maior que populacao2
        if (populacao > populacao2){
            printf("Carta 1 - %s : %d\n", nome,populacao);
            printf("Carta 2 - %s : %d\n", nome2,populacao2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome);
        }else if(pontosTuristicos2> pontosTuristicos){  // senão se populacao2 for maior de populucao
            printf("Carta 1 - %s : %d\n", nome,populacao);
            printf("Carta 2 - %s : %d\n", nome2,populacao2);
            printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
        }else{ // se populacao for igual a populacao2
            printf("Ambas as cartas possuem os mesmos valores:\n");
            printf("Carta 1 - %s : %d\n", nome, populacao);
            printf("Carta 2 - %s : %d\n\n\n", nome2, populacao2);
        }
        break;
    case 4:
        printf("***Comparacao das Cartas (Atributo: PIB)***\n\n");
        // se pib for maior de pib2
        if (pib > pib2){
            printf("Carta 1 - %s : %d\n", nome,pib);
            printf("Carta 2 - %s : %d\n", nome2,pib2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome);
        }else if(pib2 > pib){  // senão se pib2 for maior de pib
            printf("Carta 1 - %s : %d\n", nome,pib);
            printf("Carta 2 - %s : %d\n", nome2,pib2);
            printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
        }else{ // se pib for igual a pib2
            printf("Ambas as cartas possuem os mesmos valores:\n");
            printf("Carta 1 - %s : %d\n", nome,pib);
            printf("Carta 2 - %s : %d\n\n\n", nome2,pib2);
        }
        break;
    case 5:
        // se pontosTuristicos for maior de pontosTuristicos2
        if (pontosTuristicos > pontosTuristicos2){
            printf("Carta 1 - %s : %d\n", nome,pontosTuristicos);
            printf("Carta 2 - %s : %d\n", nome2,pontosTuristicos2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome);
        }else if(pontosTuristicos2> pontosTuristicos){  // senão se pontosTuristicos2 for maior de pontosTuristicos
            printf("Carta 1 - %s : %d\n", nome,pontosTuristicos);
            printf("Carta 2 - %s : %d\n", nome2,pontosTuristicos2);
            printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
        }else{ // se pontosTuristicos for igual a pontosTuristicos2
            printf("Ambas as cartas possuem os mesmos valores:\n");
            printf("Carta 1 - %s : %d\n", nome,pontosTuristicos);
            printf("Carta 2 - %s : %d\n\n\n", nome2,pontosTuristicos2);
        }
        break;
    case 6:
        // se densidade for menor que densidade2
        if (densidadePopulacional < densidadePopulacional2){
            printf("Carta 1 - %s : %d\n", nome,densidadePopulacional);
            printf("Carta 2 - %s : %d\n", nome2,densidadePopulacional2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nome);
        }else if(densidadePopulacional2 < densidadePopulacional){  // senão se densidade2 for menor de densidade
            printf("Carta 1 - %s : %d\n", nome,densidadePopulacional);
            printf("Carta 2 - %s : %d\n", nome2,densidadePopulacional2);
            printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2);
        }else{ // se pontosTuristicos for igual a pontosTuristicos2
            printf("Ambas as cartas possuem os mesmos valores:\n");
            printf("Carta 1 - %s : %d\n", nome,densidadePopulacional);
            printf("Carta 2 - %s : %d\n\n\n", nome2,densidadePopulacional2);
        }
        break;
    
    default:
        break;
    }
 
    return 0;
}
