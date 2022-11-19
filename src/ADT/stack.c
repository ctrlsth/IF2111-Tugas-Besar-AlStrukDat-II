/* File : stack.c */
/* Implementasi stack yang diimplementasi dengan tabel kontigu dan ukuran sama */

#include "stack.h"

/* ************ Prototype ************ */
/* *** Konstruktor/Kreator *** */
void CreateEmpty(Stack *S)
{
    /* I.S. sembarang; */
    /* F.S. Membuat sebuah stack S yang kosong berkapasitas MaxElStack */
    /* jadi indeksnya antara 0.. MaxElStack */
    /* Ciri stack kosong : TOP bernilai Nil */
    // KAMUS

    // ALGORITMA
    Top(*S) = Nil;
}

void MakeEmptyStack(Stack *S)
{
    /* I.S. S sudah terdefinisi sebelumnya */
    /* F.S. Menghapus semua elemen stack dan mendealokasi elemen-elemen stack
            S menjadi kosong */

    /* KAMUS */
    stacktype pop;

    /* ALGORITMA */
    while (!IsEmptyStack(*S))
    {
        Pop(S, &pop);
        DeAlokasi(&INVENTORY(pop));
        // DeAlokasi(&DELIVERY(pop));
        dealocateList(&EVENT_NOTIF(NOTIFICATION(pop)));
    }

    Top(*S) = Nil;
}

/* ************ Predikat Untuk test keadaan KOLEKSI ************ */
boolean IsEmptyStack(Stack S)
{
    /* Mengirim true jika Stack kosong: lihat definisi di atas */

    // KAMUS

    // ALGORITMA
    return Top(S) == Nil;
}
boolean IsFullStack(Stack S)
{
    /* Mengirim true jika tabel penampung nilai elemen stack penuh */

    // KAMUS

    // ALGORITMA
    return Top(S) == MaxElStack - 1;
}

/* ************ Menambahkan sebuah elemen ke Stack ************ */
void Push(Stack *S, stacktype X)
{
    /* Menambahkan X sebagai elemen Stack S. */
    /* I.S. S mungkin kosong, tabel penampung elemen stack TIDAK penuh */
    /* F.S. X menjadi TOP yang baru,TOP bertambah 1 */

    // KAMUS

    // ALGORITMA
    if (IsEmptyStack(*S))
    {
        Top(*S) = 0;
    }
    else
    {
        Top(*S) += 1;
    }
    InfoTop(*S) = X;
}

/* ************ Menghapus sebuah elemen Stack ************ */
void Pop(Stack *S, stacktype *X)
{
    /* Menghapus X dari Stack S. */
    /* I.S. S  tidak mungkin kosong */
    /* F.S. X adalah nilai elemen TOP yang lama, TOP berkurang 1 */

    // KAMUS

    // ALGORITMA
    *X = InfoTop(*S);
    Top(*S) -= 1;
}