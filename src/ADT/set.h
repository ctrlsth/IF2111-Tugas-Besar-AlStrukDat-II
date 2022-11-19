/* File : set.h */

#ifndef SET_H
#define SET_H

#include "../Boolean/boolean.h"
#include "../Makanan/makanan.h"
#include "../ListStatik/liststatik.h"

#define CAPACITY 100
/* Nil adalah stack dengan elemen kosong . */

/* Contoh deklarasi variabel bertype stack dengan ciri TOP : */
/* Versi I : dengan menyimpan tabel dan alamat top secara eksplisit*/
typedef struct
{
    int T[CAPACITY];
    int LENGTH; /* tabel penyimpan elemen */
} Set;

/* Definisi akses dengan Selektor : Set dan Get */
#define LENGTH(S) (S).LENGTH
/* ************ Prototype ************ */
/* *** Konstruktor/Kreator *** */
void CreateSet(Set *S);
/* I.S. sembarang; */
/* F.S. Membuat sebuah set S yang kosong berkapasitas CAPACITY*/
/* jadi indeksnya antara 0..CAPACITY */
/* Ciri set kosong : semua elemennya bernilai 0 */

/* ************ Predikat Untuk test keadaan KOLEKSI ************ */
boolean IsEmptySet(Set S);
/* Mengirim true jika Set kosong: lihat definisi di atas */

int lengthSet(Set S);
/*Mengirimkan banyaknya elemen S*/

void addSet(Set *S, int id, ListStatik l);
/* Menambahkan X sebagai elemen Set S. */

void removeSet(Set *S, int id, ListStatik l);
/* Menghapus elemen x dari Set S*/

boolean isInSet(Set s, int id, ListStatik l);
/* Mengembalikan true jika makanan x ada di dalam Set S*/

boolean isEqualSet(Set s1, Set s2);
/* Mengembalikan true jika s1 dan s2 memiliki elemen yang sama*/

Set unionSet(Set s1, Set s2);
/* Menghasilkan gabungan s1 dan s2 */

Set intersectionSet(Set s1, Set s2);
/* Menghasilkan irisan S1 dan S2*/

Set setDifferenceSet(Set s1, Set s2);
/* Menghasilkan s1 dikurangi s2 */

void copySet(Set s1, Set *s2);
/* Mengcopy set s1 ke set s2 */

boolean isSubset(Set s1, Set s2);
/* Mengembalikan true jika s1 adalah subset dari s2 */

#endif