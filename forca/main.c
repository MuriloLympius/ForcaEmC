#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pre jogo

    #define qtdResp 15


    char resp[qtdResp][14] = {"pao", "tres", "fruta", "batman", "monstro", "claudio", "garrafa", "cafe", "luigi", "usuario", "queijo", "zebra", "zimbabwe", "chupchup", "ioio"};
    char respReal[14];
    char letreiro[14];
    char tentativa;



    //faz o aleatorio baseado no tempo
    srand(time(NULL));
    //gera numero random entre 0 e a qtd de palavras dentre as respostas
    int random_number = rand() % qtdResp;

    //vincula palavra da lista com a resposta real
    strcpy(respReal, resp[random_number]);

    int i=0;
    int fim = 0;
    int erros = 0;
    int numLetras = strlen(respReal);

    for(i=0;i<numLetras;i++){
        letreiro[i] = '_';
    }
    letreiro[numLetras] = '\0';  // add null terminator to end of string

    //comeca loop
    while(fim == 0){
    system("cls");//limpa tela


    //criar interface
    printf("Jogo de Forca\n");

    switch(erros){
        case 0:
    printf("   _______    \n");
    printf(" |/      |    \n");
    printf(" |            \n");
    printf(" |            \n");
    printf(" |            \n");
    printf(" |            \n");
    printf(" |            \n");
    printf("_|___         \n");
        break;
        case 1:
    printf("   _______    \n");
    printf(" |/      |    \n");
    printf(" |      (_)    \n");
    printf(" |            \n");
    printf(" |            \n");
    printf(" |            \n");
    printf(" |            \n");
    printf("_|___         \n");
        break;
        case 2:
    printf("   _______    \n");
    printf(" |/      |    \n");
    printf(" |      (_)    \n");
    printf(" |       |     \n");
    printf(" |       |     \n");
    printf(" |            \n");
    printf(" |            \n");
    printf("_|___         \n");
        break;
        case 3:
    printf("   _______    \n");
    printf(" |/      |    \n");
    printf(" |      (_)    \n");
    printf(" |      \\|     \n");
    printf(" |       |     \n");
    printf(" |            \n");
    printf(" |            \n");
    printf("_|___         \n");
        break;
        case 4:
    printf("   _______    \n");
    printf(" |/      |    \n");
    printf(" |      (_)    \n");
    printf(" |      \\|/     \n");
    printf(" |       |     \n");
    printf(" |            \n");
    printf(" |            \n");
    printf("_|___         \n");
        break;
        case 5:
    printf("   _______    \n");
    printf(" |/      |    \n");
    printf(" |      (_)    \n");
    printf(" |      \\|/     \n");
    printf(" |       |     \n");
    printf(" |      /     \n");
    printf(" |            \n");
    printf("_|___         \n");
        break;
        case 6:
    printf("   _______    \n");
    printf(" |/      |    \n");
    printf(" |      (_)    \n");
    printf(" |      \\|/     \n");
    printf(" |       |     \n");
    printf(" |      / \\   \n");
    printf(" |            \n");
    printf("_|___         \n");
        break;

    }
    //cheats
    //printf("\n%s\n", respReal);

    //printf("%d\n", numLetras);


    //contador de erros
    printf("%d erros foram cometidos\n", erros);


    //letreiro
    for(i=0;i<numLetras;i++){

    printf("%c", letreiro[i]);
    printf(" ");
    }

    printf("\nletra abaixo:\n");

    tentativa = getch();

    //sistema abaixo confere se a letra existe na palavra e substitui no letreiro se falhar em todos os espacos um erro sera adicionado
    int falha=0;//se o falhas forem iguais ao numero de letras na palavra vidas serao perdidas
    for(i=0;i<numLetras;i++){
        if (tentativa == respReal[i]){
            letreiro[i] = tentativa;
            falha = 0;
        } else{
        falha = falha + 1;
            if(falha == numLetras){
                erros = erros + 1;
                falha = 0;
            }
        }
    }

    //checar vitoria/derrota
    if(erros >= 6){
            system("cls");
            printf("seu fim chegou, poxa vida\n");
            printf("    _______________\n");
            printf("   /               \ \n");
            printf("  /                 \ \n");
            printf("//                   \/\ \n");
            printf("\|   XXXX     XXXX   | / \n");
            printf(" |   XXXX     XXXX   |/ \n");
            printf(" |   XXX       XXX   | \n");
            printf(" |                   | \n");
            printf(" \__      XXX      __/ \n");
            printf("   |\     XXX     /| \n");
            printf("   | |           | | \n");
            printf("   | I I I I I I I | \n");
            printf("   |  I I I I I I  | \n");
            printf("   \_             _/ \n");
            printf("     \_         _/ \n");
            printf("       \_______/ \n");

            //n permite continuar
            erros = 6;
            for(i=0;i<numLetras;i++){
            letreiro[i] = '_';
            }
            printf("a palavra era: %s", respReal);
            getch();

    }
    int acerto = 0;
    for(i=0;i<numLetras;i++){
        if(letreiro[i] != '_'){
            acerto = acerto + 1;
        }
    }

    if(acerto >= numLetras){
        getch();
        system("cls");

printf("E para o vencedor, as batatas\n");
printf("       ___________      \n");
printf("      '._==_==_=_.'     \n");
printf("      .-\:      /-.    \n");
printf("     | (|:.     |) |    \n");
printf("      '-|:.     |-'     \n");
printf("        \::.    /      \n");
printf("         '::. .'        \n");
printf("           ) (          \n");
printf("         _.' '._        \n");
printf("        '-------'       \n");
        getch();

    }





    }


    return 0;
}
