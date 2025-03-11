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

    float densidadePopulacional,densidadePopulacional2;
    float pibPerCapital,pibPerCapital2;

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
    scanf("%f", &pib);
    // Pedi o numero de pontos turisticos (um numero inteiro, não considera os decimais)
    printf("Pontos Turisticos: ");
    scanf("%d",&pontosTuristicos);
    // Calculando Densidade Populacional e PIB per Capita para Terceira Carta
    densidadePopulacional = populacao / area;
    pibPerCapital = pib / populacao;

    float superPoder = populacao + area + pib + pontosTuristicos + pibPerCapital - (densidadePopulacional);

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
    scanf("%f", &pib2);
    // Pedi o numero de pontos turisticos (um numero inteiro, não considera os decimais)
    printf("Pontos Turisticos: ");
    scanf("%d",&pontosTuristicos2);
    // Calculando Densidade Populacional e PIB per Capita para segunda Carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapital2 = pib2 / populacao2;

    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapital2 - (densidadePopulacional2);
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
    printf("***Comparacoes de Cartas (0 --> Carta 2 venceu)***");

    // quebro duas linhas
    printf("\n\n");

    printf("Populacao: Carta %d venceu (%d)\nArea: Carta %d venceu (%d)\nPIB: Carta %d venceu (%d)\nPontos Turisticos: Carta %d venceu (%d)\nDensidade Populacional: Carta %d venceu (%d)\nPIB per Capita: Carta %d venceu (%d)\nSuper Poder: Carta %d venceu (%d)", comparacaoPopula, comparacaoPopula, comparacaoArea, comparacaoArea, comparacaoPib, comparacaoPib, comparacaoPontosTuris, comparacaoPontosTuris, comparacaoDensidade, comparacaoDensidade, comparacaoPibCapi, comparacaoPibCapi, comparacaoSuperPoder, comparacaoSuperPoder);

    printf("\n\n");
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

    switch (escolha){
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;
    
    default:
        break;
    }
 
    return 0;
}
