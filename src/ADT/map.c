#include "map.h"
#include <stdio.h>

Map map;

/* *** KONSTRUKTOR *** */
void CreateMap(CharMatrix m, POINT B, POINT F, POINT C, POINT T, POINT M)
{
    /* I.S. Sebuah matriks karakter m terdefinisi */
    /* F.S. Terbentuk map*/

    /* KAMUS */

    /* ALGORITMA */
    MAP(map) = m;
    B(map) = B;
    F(map) = F;
    C(map) = C;
    T(map) = T;
    M(map) = M;
}

/* *** VALIDASI *** */
boolean isBoilLoc(POINT p)
{
    /* Mengembalikan true jika p merupakan lokasi aksi BOIL */

    return EQ(p, B(map));
}

boolean isFryLoc(POINT p)
{
    /* Mengembalikan true jika p merupakan lokasi aksi Fry */

    return EQ(p, F(map));
}

boolean isChopLoc(POINT p)
{
    /* Mengembalikan true jika p merupakan lokasi aksi Chop */

    return EQ(p, C(map));
}

boolean isTelephoneLoc(POINT p)
{
    /* Mengembalikan true jika p merupakan lokasi aksi Telephone */

    return EQ(p, T(map));
}

boolean isMixLoc(POINT p)
{
    /* Mengembalikan true jika p merupakan lokasi aksi Mix */

    return EQ(p, M(map));
}

boolean isBoilAdj(POINT p)
{
    /* Mengembalikan true jika lokasi aksi BOILberada di sekitar p */

    return IsAdjacent(p, B(map));
}

boolean isFryAdj(POINT p)
{
    /* Mengembalikan true jika lokasi aksi Fry berada di sekitar p*/

    return IsAdjacent(p, F(map));
}

boolean isChopAdj(POINT p)
{
    /* Mengembalikan true jika lokasi aksi Chopberada di sekitar p */

    return IsAdjacent(p, C(map));
}

boolean isTelephoneAdj(POINT p)
{
    /* Mengembalikan true jika lokasi aksi Telephone berada di sekitar p */

    return IsAdjacent(p, T(map));
}

boolean isMixAdj(POINT p)
{
    /* Mengembalikan true jika lokasi aksi Mix berada di sekitar p*/

    return IsAdjacent(p, M(map));
}

/* *** INPUT/ OUTPUT *** */
void PrintMap(POINT locSimulator)
{
    /* I.S. Sebuah Map map terdefinisi */
    /* F.S. Map ditampilkan di layar */

    /* KAMUS */
    char del;

    /* ALGORITMA */
    setElmt(&MAP(map), locSimulator, 'S');
    displayBatas(MAP(map), '*');
    delElmt(&MAP(map), locSimulator, &del);
}

void PrintCommand(POINT p)
{
    /* I.S. Sebuah Map map terdefinisi dan sebuah POINT p terdefinisi */
    /* F.S. Sabuah command ditampilkan ke layar */

    /* KAMUS */

    /* ALGORITMA */
    if (isBoilLoc(p))
    {
        printf("BOIL");
    }
    else if (isFryLoc(p))
    {
        printf("FRY");
    }
    else if (isChopLoc(p))
    {
        printf("CHOP");
    }
    else if (isTelephoneLoc(p))
    {
        printf("BUY");
    }
    else if (isMixLoc(p))
    {
        printf("MIX");
    }
}