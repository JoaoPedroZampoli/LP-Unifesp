    #include <stdio.h>
    #include <locale.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>

    //Criando uma função pra não ter que repetir essa condição gigantesca
    int VerificacaoPartida(char MatrizTabuleiro[3][3][6]){
        //Horizontais Início
        for(int i = 0; i < 3; i++){
            if(strcmp(MatrizTabuleiro[i][0], MatrizTabuleiro[i][1]) == 0 && strcmp(MatrizTabuleiro[i][1], MatrizTabuleiro[i][2]) == 0 && strcmp(MatrizTabuleiro[i][0], "[ X ]") == 0) {
                printf("\nO Jogador 1 (X) Venceu a partida\n");
                return 1;
            } 
            else if(strcmp(MatrizTabuleiro[i][0], MatrizTabuleiro[i][1]) == 0 && strcmp(MatrizTabuleiro[i][1], MatrizTabuleiro[i][2]) == 0 && strcmp(MatrizTabuleiro[i][0], "[ O ]") == 0) {
                printf("\nO Jogador 2 (O) Venceu a partida\n");
                return 2;
            }
        }
        //Horizontais Fim
        //Verticais Início
        for (int j = 0; j < 3; j++) {
            if(strcmp(MatrizTabuleiro[0][j], MatrizTabuleiro[1][j]) == 0 && strcmp(MatrizTabuleiro[1][j], MatrizTabuleiro[2][j]) == 0 && strcmp(MatrizTabuleiro[0][j], "[ X ]") == 0) {
                printf("\nO Jogador 1 (X) Venceu a partida\n");
                return 1;
            }
            else if(strcmp(MatrizTabuleiro[0][j], MatrizTabuleiro[1][j]) == 0 && strcmp(MatrizTabuleiro[1][j], MatrizTabuleiro[2][j]) == 0 && strcmp(MatrizTabuleiro[0][j], "[ O ]") == 0) {
                printf("\nO Jogador 2 (O) Venceu a partida\n");
                return 2;
            }
        }
        //Verticais Fim
        //Diagonais Início
        if(strcmp(MatrizTabuleiro[0][0], MatrizTabuleiro[1][1]) == 0 && strcmp(MatrizTabuleiro[1][1], MatrizTabuleiro[2][2]) == 0 && strcmp(MatrizTabuleiro[0][0], "[ X ]") == 0) {
            printf("\nO Jogador 1 (X) Venceu a partida\n");
            return 1;
        } 
        else if(strcmp(MatrizTabuleiro[0][0], MatrizTabuleiro[1][1]) == 0 && strcmp(MatrizTabuleiro[1][1], MatrizTabuleiro[2][2]) == 0 && strcmp(MatrizTabuleiro[0][0], "[ O ]") == 0) {
            printf("\nO Jogador 2 (O) Venceu a partida\n");
            return 2;
        }

        if(strcmp(MatrizTabuleiro[0][2], MatrizTabuleiro[1][1]) == 0 && strcmp(MatrizTabuleiro[1][1], MatrizTabuleiro[2][0]) == 0 && strcmp(MatrizTabuleiro[0][2], "[ X ]") == 0) {
            printf("\nO Jogador 1 (X) Venceu a partida\n");
            return 1;  
        } 
        else if(strcmp(MatrizTabuleiro[0][2], MatrizTabuleiro[1][1]) == 0 && strcmp(MatrizTabuleiro[1][1], MatrizTabuleiro[2][0]) == 0 && strcmp(MatrizTabuleiro[0][2], "[ O ]") == 0) {
            printf("\nO Jogador 2 (O) Venceu a partida\n");
            return 2;
        }
        //Diagonais Fim

        return 0;
    }

    int main(){
        char MatrizTabuleiro[3][3][6];
        int Linha, Coluna, i, j, Escolha = 0, VezJogador = 1, VerificadorVitoria = 0, JogadaValida = 0, EspacosVazios = 9;

        srand(time(NULL));
        setlocale(LC_ALL, "Portuguese_Brazil");
        printf("Jogo da Velha\n");
        do{
            printf("\nDigite a quantidade de jogadores, podendo ser 1 ou 2: ");
            scanf("%i", &Escolha);
        }while(Escolha != 1 && Escolha != 2);
        printf("\n\nEsse é o tabuleiro que você(s) irão jogar: \n");
        for(Linha = 0; Linha<3; Linha++){
            for(Coluna=0; Coluna<3; Coluna++){
                strcpy(MatrizTabuleiro[Linha][Coluna], "[ - ]");
            }
        }
        do{
            for(Linha = 0; Linha<3; Linha++){
                for(Coluna=0; Coluna<3; Coluna++){
                    printf("%s\t", MatrizTabuleiro[Linha][Coluna]);
                }
                printf("\n");
            }
            do{
                printf("\nVez do Jogador 1 (X):");
                printf("\nEscolha uma Linha (de 1 a 3):");
                scanf("%i", &Linha);
                Linha -= 1;
                printf("\nEscolha uma Coluna (de 1 a 3):");
                scanf("%i", &Coluna);
                Coluna -= 1;
                JogadaValida = 0;
                if(strcmp(MatrizTabuleiro[Linha][Coluna], "[ - ]") == 0){
                    strcpy(MatrizTabuleiro[Linha][Coluna], "[ X ]");
                    JogadaValida = 1;
                    EspacosVazios--;
                }
                else{
                    printf("\nJogada Inválida, tente novamente\n");
                }
            }while(JogadaValida == 0);
            VerificadorVitoria = VerificacaoPartida(MatrizTabuleiro);
            if(VerificadorVitoria != 0){
                break;
            }
            else if(EspacosVazios == 0){
                printf("\nNinguém ganhou\n");
                break;
            }
            if(Escolha == 1){
                do{
                    Linha = rand() % 3;
                    Coluna = rand() % 3;
                    JogadaValida = 0;
                    if(strcmp(MatrizTabuleiro[Linha][Coluna], "[ - ]") == 0){
                        strcpy(MatrizTabuleiro[Linha][Coluna], "[ O ]");
                        JogadaValida = 1;
                        EspacosVazios--;
                    }
                }while(JogadaValida == 0);
            }
            else{
                for(Linha = 0; Linha<3; Linha++){
                    for(Coluna=0; Coluna<3; Coluna++){
                        printf("%s\t", MatrizTabuleiro[Linha][Coluna]);
                    }
                    printf("\n");
                }
                do{
                    printf("\nVez do Jogador 2 (O):");
                    printf("\nEscolha uma Linha (de 1 a 3):");
                    scanf("%i", &Linha);
                    Linha -= 1;
                    printf("\nEscolha uma Coluna (de 1 a 3):");
                    scanf("%i", &Coluna);
                    Coluna -= 1;
                    JogadaValida = 0;
                    if(strcmp(MatrizTabuleiro[Linha][Coluna], "[ - ]") == 0){
                        strcpy(MatrizTabuleiro[Linha][Coluna], "[ O ]");
                        JogadaValida = 1;
                        EspacosVazios--;
                    }
                    else{
                        printf("\nJogada Inválida, tente novamente\n");
                    }
                }while(JogadaValida == 0);
            }
            VerificadorVitoria = VerificacaoPartida(MatrizTabuleiro);
            if(VerificadorVitoria != 0){
                break;
            }
            else if(EspacosVazios == 0){
                printf("\nNinguém ganhou\n");
                break;
            }
        }while(VerificadorVitoria == 0);
    }