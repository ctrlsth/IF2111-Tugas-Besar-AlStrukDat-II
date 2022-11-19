#ifndef MAP_H
#define MAP_H

#include "boolean.h"
#include "point.h"
#include "charmatrix.h"

/* *** Definisi Tipe Makanan *** */
typedef struct
{
    CharMatrix map;
    POINT B;
    POINT F;
    POINT C;
    POINT T;
    POINT M;
} Map;

/* *** SELEKTOR *** */
#define MAP(m) (m).map
#define B(m) (m).B
#define F(m) (m).F
#define C(m) (m).C
#define T(m) (m).T
#define M(m) (m).M

extern Map map;

/* *** KONSTRUKTOR *** */
void CreateMap(CharMatrix m, POINT B, POINT F, POINT C, POINT T, POINT M);
/* I.S. Sebuah matriks karakter m terdefinisi */
/* F.S. Terbentuk map*/

/* *** VALIDASI *** */
boolean isBoilLoc(POINT p);
/* Mengembalikan true jika p merupakan lokasi aksi BOIL */

boolean isFryLoc(POINT p);
/* Mengembalikan true jika p merupakan lokasi aksi Fry */

boolean isChopLoc(POINT p);
/* Mengembalikan true jika p merupakan lokasi aksi Chop */

boolean isTelephoneLoc(POINT p);
/* Mengembalikan true jika p merupakan lokasi aksi Telephone */

boolean isMixLoc(POINT p);
/* Mengembalikan true jika lokasi aksi Mix berada di sekitar p*/

boolean isBoilAdj(POINT p);
/* Mengembalikan true jika lokasi aksi BOILberada di sekitar p */

boolean isFryAdj(POINT p);
/* Mengembalikan true jika lokasi aksi Fry berada di sekitar p*/

boolean isChopAdj(POINT p);
/* Mengembalikan true jika lokasi aksi Chopberada di sekitar p */

boolean isTelephoneAdj(POINT p);
/* Mengembalikan true jika lokasi aksi Telephone berada di sekitar p */

boolean isMixAdj(POINT p);
/* Mengembalikan true jika lokasi aksi Mix berada di sekitar p*/

/* *** INPUT/ OUTPUT *** */
void PrintMap(POINT locSimulator);
/* I.S. Sebuah Map map terdefinisi */
/* F.S. Map ditampilkan di layar */

void PrintCommand(POINT p);
/* I.S. Sebuah Map map terdefinisi dan sebuah POINT p terdefinisi */
/* F.S. Sabuah command ditampilkan ke layar */

#endif