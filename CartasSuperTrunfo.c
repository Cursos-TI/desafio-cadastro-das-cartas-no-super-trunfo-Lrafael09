#include <stdio.h>
int main(){

    //carta 1 
    int pontot;
    double populacao, pib;
    float area;
    char estado;
    char codigo [20];
    char nome [50];



    printf("________JOGO SUPER TRUNFO________\n");
    printf("*****CARTA- 01*******\n");

// informações da carta 01:

    printf("digite uma letra de A a H representando seu estado: \n");
    scanf("%c", &estado);
    
    //teste de leitura: printf("letra escolhida: %c\n", estado);

    printf("digite um codigo do estado (ex:01,02):\n");
    scanf("%s", codigo);
    
    //teste de leitura: printf(" codigo escolhido:%c%s\n", estado, codigo);
    
    getchar();
    
    printf("\ndigite nome do estado: ");
    fgets(nome, 50, stdin);

    // teste de leitura:printf("\n estado escolhido é: %s\n", nome);

    printf("digite numero da população:\n");
    scanf("%lf", &populacao);

    //teste de leitura: printf("numero de população é:%.lf \n", populacao);

    printf("digite a area em km do estado escolhido:\n");
    scanf("%f", &area);

    //teste de leitura printf("Área do seu estado é:%.f \n", area);

    printf("digite o PIB do estado:\n");
    scanf("%lf", &pib);

    //teste de leitura printf("pib do estado é: %.2lf\n", pib);


    printf("digite o número de pontos turísticos do estado:\n");
    scanf("%d", &pontot);

    //teste de leitura  printf("o numero de pontos turisticos é de: %d", pontot);


//carta 2
    int pontot2;
    double populacao2, pib2;
    float area2;
    char estado2;
    char codigo2 [20];
    char nome2 [50];



   
    printf("*****CARTA- 02*******\n");

// informações da carta 02:
getchar();



    printf("digite uma letra de A a H representando seu estado: \n");
    scanf("%c", &estado2);
    
    //teste de leitura: printf("letra escolhida: %c\n", estado);

    printf("digite um codigo do estado (ex:01,02):\n");
    scanf("%s", codigo2);
    
    //teste de leitura: printf(" codigo escolhido:%c%s\n", estado, codigo2);
    
    getchar();
    
    printf("\ndigite nome do estado: ");
    fgets(nome2, 50, stdin);

    // teste de leitura:printf("\n estado escolhido é: %s\n", nome2);

    printf("digite numero da população:\n");
    scanf("%lf", &populacao2);

    //teste de leitura: printf("numero de população é:%.lf \n", populacao2);

    printf("digite a area em km do estado escolhido:\n");
    scanf("%f", &area2);

    //teste de leitura printf("Área do seu estado é:%.f \n", area2);

    printf("digite o PIB do estado:\n");
    scanf("%lf", &pib2);

    //teste de leitura printf("pib do estado é: %.2lf\n", pib2);


    printf("digite o número de pontos turísticos do estado:\n");
    scanf("%d", &pontot2);

    //teste de leitura printf("o numero de pontos turisticos é de: %d", pontot2);








return 0;
}


