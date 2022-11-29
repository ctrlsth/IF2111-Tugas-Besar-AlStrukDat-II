#include <stdio.h>
#include "towerOfHanoi.h"
#include "../src/ADT/mesinkata.h"

void piringan(Stack S, int a, int wmax){
    if (a<=Top(S)){
        int pjg;
        pjg = 2 * S.T[a] - 1;

        for (int k=0; k<(wmax-pjg)/2; k++){
            printf(" ");
        }
        for (int k=0; k<pjg; k++){
            printf("*");
        }
        for (int k=0; k<(wmax - pjg)/2; k++){
            printf(" ");
        }
    }
    else{
        for (int k=0; k<wmax/2; k++){
            printf(" ");
        }
        printf("|");
        for (int k=0; k<wmax/2; k++){
            printf(" ");
        }
    }
    for (int k=0; k<3; k++){
        printf(" ");
    }
}

void showTiang(Stack S1, Stack S2, Stack S3){
    int a;
    for (a=5; a>=0; a--){
        piringan(S1, a, 9);
        piringan(S2, a, 9);
        piringan(S3, a, 9);
        printf("\n");
    }
    printf("\n");
}

boolean finalGame(Stack S){
    Stack tes;
    int a;
    infotype x;
    boolean finalGame = true;
    CreateEmptyStack(&tes);

    for(a=5; a>0 ; a--){
        Push(&tes,a);
    }

    while (!IsStackEmpty(tes) && !IsStackEmpty(S)){
        if (InfoTop(S) != InfoTop(tes)){
            finalGame = false;
        }
        Pop(&S, &x);
        Pop(&tes, &x);
    }

    if (IsStackEmpty(S) && IsStackEmpty(tes)){
        return finalGame;
    }
    else{
        return false;
    }
}

void proceedTiang(Stack *S1, Stack *S2){
    infostack X;
    Pop(S1, &X);
    Push(S2, X);
}

void towerOfHanoi(){
    //KAMUS//
    int move, i, finalscore, start, end;
    move = 0;
    boolean cekinput;
    cekinput = false;
    Stack tiang1, tiang2, tiang3;

    //ALGORITMA//
    printf("Selamat datang di Tower of Hanoi!\n Selamat bermain !! >< \n");
    
    CreateEmptyStack(&tiang1);
    CreateEmptyStack(&tiang2);
    CreateEmptyStack(&tiang3);

    for (i=5; i>0; i--){
        Push(&tower1, i);
    }

    while (!finalGame(tower3)){
        printf("Moves = %d\n", move);
        printf("Minimum moves = 31\n\n");

        showTiang(tiang1, tiang2, tiang3);

        while(!cekinput){
            printf("Tiang asal = ");
            STARTCMD();
            start = currentCommand;
            printf("Tiang akhir = ");
            STARTCMD();
            end = currentCommand;
            printf("\n");
            if (start >=1 && start <=3 && end >=1 && end <=3){
                if (start != end){
                    if (start == 1){
                        if (IsStackEmpty(tiang1)){
                            printf("Input tidak valid! Tiang 1 kosong! \n\n");
                        }
                        else if (end == 2){
                            if (IsStackEmpty(tiang2)){
                                proceedTiang(&tiang1, &tiang2);
                                cekinput = true;
                            }
                            else if (InfoTop(tiang1) > InfoTop(tiang2)){
                                printf("Input tidak valid! Ukuran piringan harus lebih kecil dari piringan dibawahnya!\n\n");
                            }
                            else{
                                proceedTiang(&tiang1, &tiang2);
                                cekinput = true;
                            }
                        }
                        else if (end == 3){
                            if (IsStackEmpty(tiang3)){
                                proceedTiang(&tiang1, &tiang3);
                                cekinput = true;
                            }
                            else if (InfoTop(tiang1) > InfoTop(tiang3)){
                                printf("Input tidak valid! Ukuran piringan harus lebih kecil dari piringan dibawahnya!\n\n");
                            }
                            else{
                                proceedTiang(&tiang1, &tiang3);
                                cekinput = true;
                            }
                        }
                    }
                    else if (start == 2){
                        if (IsStackEmpty(tiang2)){
                            printf("Input tidak valid! Tiang 2 kosong!\n\n");
                        }
                        else if (end == 1){
                            if (IsStackEmpty(tiang1)){
                                proceedTiang(&tiang2, &tiang1);
                                cekinput = true;
                            }
                            else if (InfoTop(tiang2) > InfoTop(tiang1)){
                                printf("Valid input tidak valid! Ukuran piringan harus lebih kecil dari piringan dibawahnya!\n\n")
                            }
                            else {
                                proceedTiang(&tiang2, &tiang1);
                                cekinput = true;
                            }
                        }
                        else if (end == 3){
                            if (IsStackEmpty(tiang3)){
                                proceedTiang(&tiang2, &tiang3);
                                cekinput = true;
                            }
                            else if (InfoTop(tiang2) > InfoTop(tiang3)){
                                printf("Valid input tidak valid! Ukuran piringan harus lebih kecil dari piringan dibawahnya!\n\n")
                            }
                            else {
                                proceedTiang(&tiang2, &tiang3);
                                cekinput = true;
                            }
                        }
                    }
                    else if (start == 3){
                        if (IsStackEmpty(tiang3)){
                            printf("Input tidak valid! Tiang 3 kosong!\n\n");
                        }
                        else if (end == 1){
                            if (IsStackEmpty(tiang1)){
                                proceedTiang(&tiang3, &tiang1);
                                cekinput = true;
                            }
                            else if (InfoTop(tiang3) > InfoTop(tiang1)){
                                printf("Valid input tidak valid! Ukuran piringan harus lebih kecil dari piringan dibawahnya!\n\n")
                            }
                            else {
                                proceedTiang(&tiang3, &tiang1);
                                cekinput = true;
                            }
                        }
                        else if (end == 2){
                            if (IsStackEmpty(tiang2)){
                                proceedTiang(&tiang3, &tiang2);
                                cekinput = true;
                            }
                            else if (InfoTop(tiang3) > InfoTop(tiang2)){
                                printf("Valid input tidak valid! Ukuran piringan harus lebih kecil dari piringan dibawahnya!\n\n")
                            }
                            else {
                                proceedTiang(&tiang3, &tiang2);
                                cekinput = true;
                            }
                        }
                    }
                }
                else {
                    printf("Input tidak valid, tiang awal dan tiang akhir harus berbeda! \n\n");
                }
            }
            else {
                printf("Input tidak valid, tiang tidak tersedia! \n\n");
            }
        }
        move+=1;
        cekinput = false;
    }
    if (move = 31){
        finalscore = 10;
    }
    else if (move >=50 && move <70){
        finalscore = 8;
    }
    else if (move >=70 && move <90){
        finalscore = 7;
    }
    else if (move >=90 && move <100){
        finalscore = 6;
    }
    else{
        finalscore = 5;
    }
    showTiang(tiang1,tiang2,tiang3);
    printf("Yey! Kamu berhasil selesai memainkan game Tower of Hanoi dengan berjalan sebanyak %d langkah! \n", move);
    printf("Nilai kamu : %d\n", finalscore);
}
