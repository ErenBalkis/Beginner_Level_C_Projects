#include <cmath>
#include <iostream>

/* Asal Sayı Bulucu: Kullanıcıdan bir pozitif tamsayı alan ve bu sayının
 * asal olup olmadığını kontrol eden bir fonksiyon (bool asalMi(int sayi)) yazın.
 * Fonksiyon, sayının asallık durumuna göre true veya false dönmelidir.
 * (ipucu: 2’den kareköküne kadar olan sayılara bölünüp bölünmediğini kontrol etmek) */


bool asalMi (int sayi) {
    if (sayi < 2) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(sayi); i++) {
        if (sayi % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int sayi;
    std::cout << "Pozitif bir sayi giriniz: ";
    std::cin >> sayi;
    if (asalMi(sayi)) {
        std::cout << sayi << " Asal Sayidir! " << std::endl;
    } else {
        std::cout << sayi << " Asal Sayi Değildir! " << std::endl;
    }

    return 0;
}
