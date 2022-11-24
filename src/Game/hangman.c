#include <stdio.h>
#include <time.h>
#include "boolean.h"

const int IDX_UNDEF = -1;
const char MARK = '_';
const int KESEMPATAN = 10;

typedef struct {
    char kata[100];
    int panjang;
} ListSoal;

typedef struct {
    char huruf[26];
    int panjang;
    int digit[26];
} Simpenan;

void CreateSimpenan (Simpenan *S){
    S->panjang = IDX_UNDEF;
}

int printSoal(int urutan){
    if (urutan == 1){
        printf("Di rumah makan Padang, selain pakai sendok kita makan pakai?");
    } else if (urutan == 2){
        printf("Seseorang yang memimpin sebuah desa, biasanya dipanggil pak?");
    } else if (urutan == 3){
        printf("Senikmat-nikmatnya makan di luar lebih nikmat makan di?");
    } else if (urutan == 4){
        printf("Ikan bernapas di air dengan?");
    } else if (urutan == 5){
        printf("Yang dibeli seorang cowok untuk pasangannya di saat Valentine biasanya?");
    } else if (urutan == 6){
        printf("Seorang barber mencukur rambut pelanggan dengan?");
    } else if (urutan == 7){
        printf("Lorenzo, Marquez, Rossi kejar-kejaran, salip menyalip di?");
    } else if (urutan == 8){
        printf("Burung bisa terbang karena memiliki?");
    } else if (urutan == 9){
        printf("Bendera NKRI warnanya?");
    } else if (urutan == 10){
        printf("Galang menyimpan buku di…");
    }
}

void variasiSoal(int urutan){
    ListSoal L;
    if (urutan == 1){
        L.panjang = 6;
        L.kata[0] = "T";
        L.kata[1] = "E";
        L.kata[2] = "N";
        L.kata[3] = "A";
        L.kata[4] = "G";
        L.kata[5] = "A";
    } else if (urutan == 2){
        L.kata[0] = "N";
        L.kata[1] = "O";
        L.kata[2] = "L";
        L.kata[3] = "E";
        L.kata[4] = "H";
        L.panjang = 5;
    } else if (urutan == 3){
        L.kata[0] = "T";
        L.kata[1] = "E";
        L.kata[2] = "L";
        L.kata[3] = "A";
        L.kata[4] = "N";
        L.panjang = 5;
    } else if (urutan == 4){
        L.kata[0] = "T";
        L.kata[1] = "E";
        L.kata[2] = "N";
        L.kata[3] = "A";
        L.kata[4] = "N";
        L.kata[5] = "G";
        L.panjang = 6;
    } else if (urutan == 5){
        L.kata[0] = "B";
        L.kata[1] = "A";
        L.kata[2] = "Y";
        L.kata[3] = "A";
        L.kata[4] = "R";
        L.panjang = 5;
    } else if (urutan == 6){
        L.kata[0] = "G";
        L.kata[1] = "A";
        L.kata[2] = "N";
        L.kata[3] = "T";
        L.kata[4] = "I";
        L.kata[5] = "A";
        L.kata[6] = "N";
        L.panjang = 7;
    } else if (urutan == 7){
        L.kata[0] = "B";
        L.kata[1] = "I";
        L.kata[2] = "A";
        L.kata[3] = "R";
        L.kata[4] = "K";
        L.kata[5] = "A";
        L.kata[6] = "N";
        L.panjang = 7;
    } else if (urutan == 8){
        L.kata[0] = "B";
        L.kata[1] = "A";
        L.kata[2] = "K";
        L.kata[3] = "A";
        L.kata[4] = "T";
        L.panjang = 5;
    } else if (urutan == 9){
        L.kata[0] = "C";
        L.kata[1] = "U";
        L.kata[2] = "M";
        L.kata[3] = "A";
        L.kata[4] = "D";
        L.kata[5] = "U";
        L.kata[6] = "A";
        L.kata[7] = "A";
        L.kata[8] = "J";
        L.kata[9] = "A";
        L.panjang = 10;
    } else if (urutan == 10){
        L.kata[0] = "M";
        L.kata[1] = "A";
        L.kata[2] = "S";
        L.panjang = 3;
    }
}

void TampilanGaris(Simpenan Ssalah){
    if (Ssalah.panjang == 1){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                          ||          \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 2){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 3){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 4){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                   -------||          \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 5){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                   -------||          \n");
        printf("                   O      ||          \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 6){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                   -------||          \n");
        printf("                   O      ||          \n");
        printf("                  /       ||          \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 7){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                   -------||          \n");
        printf("                   O      ||          \n");
        printf("                  / \'    ||          \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 8){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                   -------||          \n");
        printf("                   O      ||          \n");
        printf("                  /|\'    ||          \n");
        printf("                          ||          \n");
        printf("                          ||          \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 9){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                   -------||          \n");
        printf("                   O      ||          \n");
        printf("                  /|\'    ||          \n");
        printf("                  /       ||          \n");
        printf("                          ||          \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 10){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                   -------||          \n");
        printf("                   O      ||          \n");
        printf("                  /|\'    ||          \n");
        printf("                  / \'    ||          \n");
        printf("                          ||          \n");
        printf("======================================\n");
    }
}

void TampilanGame(Simpenan Ssalah, Simpenan *Sbenar){
    printf("Tebakan sebelumnya : ");

    printf("Kata : ");

    printf("Kesempatan : ");

    printf("Masukan tebakan : ");

    TampilanGaris(Ssalah);
}

void TampilanClue(ListSoal Soal){
    int i;
    for(i=0;i<Soal.panjang;i++){
        printf("_ ");
    }
}

int DigitBenar(ListSoal Soal, char huruf, Simpenan Sbenar, Simpenan Ssalah){
    int i = 0;
    while (i<Soal.panjang){
        if(Soal.kata[i] == huruf){
            printf("%c ", huruf);
            Sbenar.panjang++;
            Sbenar.digit[i];
            i++;
        } else {
            printf("%");
            Ssalah.panjang++;
        }

    }
}

boolean IsFinished (Simpenan Sbenar, Simpenan Ssalah, ListSoal Soal){
    return (Sbenar.panjang == Soal.panjang || Ssalah.panjang > KESEMPATAN);
}

void hangman(){
    time_t waktu;
    srand(time(&waktu));
    ListSoal L;
    int acakurutan = (rand()%10) + 1;

}