#include <cmath>
#include <iostream>

/* Dizideki en küçük elemanı bulan fonksiyon:
 * Parametre olarak bir tamsayı dizisi ve dizinin boyutunu alan,
 * dizideki en küçük elemanı bulan ve bu elemanı döndüren
 * int enKucuguBul(int dizi[], int boyut) adında bir fonksiyon yazın. */

int enKucuguBul(int dizi[], int boyut) {
    int min = dizi[0];
    for (int i = 0; i < boyut; i++) {
        if (dizi[i] < min) {
            min = dizi[i];
        }
    }
    return min;
}

int main() {
    int dizi[8] = {189,25,45,21354,87456,5412,14,89};
    int boyut = 8;
    std::cout << "Dizideki en küçük eleman: " <<enKucuguBul(dizi, boyut) << std::endl;

    return 0;
}
