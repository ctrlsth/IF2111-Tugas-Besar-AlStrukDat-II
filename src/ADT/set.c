#include "set.h"
#include <stdio.h>

void CreateSet(Set *s)
{
    /* I.S. sembarang; */
    /* F.S. Membuat sebuah set S yang kosong berkapasitas CAPACITY*/
    /* jadi indeksnya antara 0..CAPACITY */
    /* Ciri set kosong : semua elemennya bernilai 0 */
    LENGTH(*s) = 0;
    for (int i = 0; i < CAPACITY; i++)
    {
        (*s).T[i] = 0;
    }
}
/* ************ Predikat Untuk test keadaan KOLEKSI ************ */
boolean IsEmptySet(Set s)
{
    boolean empty = true;
    for (int i = 0; i < CAPACITY; i++)
    {
        if (s.T[i] != 0)
        {
            empty = false;
        }
    }
    return empty;
}
/* Mengirim true jika Set kosong: lihat definisi di atas */

int lengthSet(Set s)
{
    /*Mengirimkan banyaknya elemen S*/
    int count = 0;
    for (int i = 0; i < CAPACITY; i++)
    {
        if (s.T[i] == 1)
        {
            count++;
        }
    }
    return count;
}

void addSet(Set *s, int id, ListStatik l)
{
    /* Menambahkan X sebagai elemen Set S. */
    int index = indexOf(l, id, true);
    (*s).T[index] = 1;
    LENGTH(*s)
    ++;
}
void removeSet(Set *s, int id, ListStatik l)
{
    /* Menghapus elemen x dari Set S*/
    int index = indexOf(l, id, true);
    (*s).T[index] = 0;
    LENGTH(*s)
    --;
}

boolean isInSet(Set s, int id, ListStatik l)
{
    /* Mengembalikan true jika makanan x ada di dalam Set S*/
    int index = indexOf(l, id, true);
    return s.T[index] == 1;
}
boolean isEqualSet(Set s1, Set s2)
{
    /* Mengembalikan true jika s1 dan s2 memiliki elemen yang sama*/
    boolean equal = true;
    for (int i = 0; i < CAPACITY; i++)
    {
        if (s1.T[i] != s2.T[i])
        {
            equal = false;
        }
    }
    return equal;
}
Set unionSet(Set s1, Set s2)
{
    /* Menghasilkan gabungan s1 dan s2 */
    Set s3;
    CreateSet(&s3);
    for (int i = 0; i < CAPACITY; i++)
    {
        if (s1.T[i] == 1 || s1.T[i] == 1)
        {
            s3.T[i] = 1;
            LENGTH(s3)
            ++;
        }
    }
    return s3;
}

Set intersectionSet(Set s1, Set s2)
{
    /* Menghasilkan irisan S1 dan S2*/
    Set s3;
    CreateSet(&s3);
    for (int i = 0; i < CAPACITY; i++)
    {
        if (s1.T[i] == 1 && s2.T[i] == 1)
        {
            s3.T[i] = 1;
            LENGTH(s3)
            ++;
        }
    }
    return s3;
}
Set setDifferenceSet(Set s1, Set s2)
{
    /* Menghasilkan s1 dikurangi s2 */

    Set s3;
    CreateSet(&s3);
    for (int i = 0; i < CAPACITY; i++)
    {
        if (s1.T[i] == 1 && s2.T[i] == 0)
        {
            s3.T[i] = 1;
            LENGTH(s3)
            ++;
        }
    }
    return s3;
}

void copySet(Set s1, Set *s2)
{
    /* Mengcopy set s1 ke set s2 */
    CreateSet(s2);
    for (int i = 0; i < CAPACITY; i++)
    {
        if (s1.T[i] == 1)
        {
            (*s2).T[i] = 1;
            LENGTH(*s2)
            ++;
        }
    }
}

boolean isSubset(Set s1, Set s2)
{
    /* Mengembalikan true jika s1 adalah subset dari s2 */
    boolean subset = true;
    for (int i = 0; i < CAPACITY; i++)
    {
        if (s1.T[i] == 1 && s2.T[i] == 0)
        {
            subset = false;
        }
    }
    return subset;
}
