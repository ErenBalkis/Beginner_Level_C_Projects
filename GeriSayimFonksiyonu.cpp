#include <iostream>

/* Geri Sayım Fonksiyonu:
 * Parametre olarak bir tamsayı n alan ve n’den 1’e kadar geri sayım yapan
 * void geriSay(int n) adında bir fonksiyon yazın. for döngüsü kullanın. */

void geriSay(int n) {
    for (int i = n; i >= 1; i--) {
        std::cout << i << " ";
    }
}

int main() {
    int sayi;
    while (true) {
        std::cout << "Sayi: ";
        if (!(std::cin >> sayi) || sayi <= 0) {
            std::cout << "Hatalı Giris Lütfen POZITIF Bir TAM SAYI Giriniz: " << std::endl;
        } else {
            geriSay(sayi);
            break;
        }
    }

    std::cout << "\nGeri Sayim Tamamlandi!" << std::endl;

    return 0;
}
