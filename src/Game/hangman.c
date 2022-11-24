#include <stdio.h>
#include <time.h>
#include "boolean.h"

const int IDX_UNDEF = -1;
const int KESEMPATAN = 10;

typedef struct 
{
    char TabWord[100];
} word;

typedef struct {
    word kata[10];
    word soal[100];
    int panjang;
} ListSoal;

typedef struct {
    char huruf[26];
    int panjang;
} Simpenan;

void CreateSimpenan (Simpenan *S){
    S->panjang = IDX_UNDEF;
}

void variasiSoal(int urutan){
    ListSoal L;
    if (urutan == 1){
        L.kata = "TENAGA";
        L.soal = "Di rumah makan Padang, selain pakai sendok kita makan pakai?";
        L.panjang = 6;
    } else if (urutan == 2){
        L.kata = "NOLEH";
        L.soal = "Seseorang yang memimpin sebuah desa, biasanya dipanggil pak?";
        L.panjang = 5;
    } else if (urutan == 3){
        L.kata = "TELAN";
        L.soal = "Senikmat-nikmatnya makan di luar lebih nikmat makan di?";
        L.panjang = 6;
    } else if (urutan == 4){
        L.kata = "TENANG";
        L.soal = "Ikan bernapas di air dengan?";
        L.panjang = 6;
    } else if (urutan == 5){
        L.kata = "BAYAR";
        L.soal = "Yang dibeli seorang cowok untuk pasangannya di saat Valentine biasanya?";
        L.panjang = 5;
    } else if (urutan == 6){
        L.kata = "GANTIAN";
        L.soal = "Seorang barber mencukur rambut pelanggan dengan?";
        L.panjang = 7;
    } else if (urutan == 7){
        L.kata = "BIARKAN";
        L.soal = "Lorenzo, Marquez, Rossi kejar-kejaran, salip menyalip di?";
        L.panjang = 7;
    } else if (urutan == 8){
        L.kata = "BAKAT";
        L.soal = "Burung bisa terbang karena memiliki?";
        L.panjang = 5;
    } else if (urutan == 9){
        L.kata = "CUMADUAAJA";
        L.soal = "Bendera NKRI warnanya?";
        L.panjang = 10;
    } else if (urutan == 10){
        L.kata = "MAS";
        L.soal = "Galang menyimpan buku di…";
        L.panjang = 3;
    }
}
char TampilanGaris(Simpenan Ssalah){
    if (Ssalah.panjang == 1){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 2){
        printf("======================================\n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                                      \n");
        printf("                   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 3){
        printf("======================================\n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("                   ||                 \n");
        printf("                   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 4){
        printf("======================================\n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("               O   ||                 \n");
        printf("                   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    } else if (Ssalah.panjang == 3){
        printf("======================================\n");
        printf("                                      \n");
        printf("               ______                 \n");
        printf("               O   ||                 \n");
        printf("               I   ||                 \n");
        printf("                   ||                 \n");
        printf("======================================\n");
    }
}
void TampilanGame(){
    printf("Tebakan sebelumnya : ");

    printf("Kata : ");

    printf("Kesempatan : ");

    printf("Masukan tebakan : ");

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