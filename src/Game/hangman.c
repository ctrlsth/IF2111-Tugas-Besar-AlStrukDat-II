#include <stdio.h>
#include <time.h>
#include "boolean.h"

const int IDX_UNDEF = -1;
const int KESEMPATAN = 10;

typedef struct {
    char kata[100];
    int panjang;
} ListSoal;

typedef struct {
    char huruf[26];
    int panjang;
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
        L.kata[2] = "E";
        L.kata[0] = "E";
        L.kata[0] = "E";
        L.kata[] = "A";
    } else if (urutan == 2){
        L.kata = "NOLEH";
        L.panjang = 5;
    } else if (urutan == 3){
        L.kata = "TELAN";
        L.panjang = 6;
    } else if (urutan == 4){
        L.kata = "TENANG";
        L.panjang = 6;
    } else if (urutan == 5){
        L.kata = "BAYAR";
        L.panjang = 5;
    } else if (urutan == 6){
        L.kata = "GANTIAN";
        L.panjang = 7;
    } else if (urutan == 7){
        L.kata = "BIARKAN";
        L.panjang = 7;
    } else if (urutan == 8){
        L.kata = "BAKAT";
        L.panjang = 5;
    } else if (urutan == 9){
        L.kata = "CUMADUAAJA";
        L.panjang = 10;
    } else if (urutan == 10){
        L.kata = "MAS";
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
        printf("                          ||           \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 3){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("               O   ||                 \n");
        printf("               I   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 4){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("               O   ||                 \n");
        printf("               I   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 5){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("               O   ||                 \n");
        printf("               I   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 6){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("               O   ||                 \n");
        printf("               I   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 7){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("               O   ||                 \n");
        printf("               I   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 8){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("               O   ||                 \n");
        printf("               I   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 9){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("               O   ||                 \n");
        printf("               I   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 10){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("               O   ||                 \n");
        printf("               I   ||                 \n");
        printf("                   ||                 \n");
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

boolean IsFinished (Simpenan Sbenar, Simpenan Ssalah, ListSoal Soal){
    return (Sbenar.panjang == Soal.panjang || Ssalah.panjang > KESEMPATAN);
}

void hangman(){
    time_t waktu;
    srand(time(&waktu));
    ListSoal L;
    int acakurutan = (rand()%10) + 1;
}