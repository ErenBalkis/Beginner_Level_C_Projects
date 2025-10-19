#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

/*
 * Armstrong Sayısı: Bir sayının Armstrong sayısı olup olmadığını
 * kontrol eden bool isArmstrong(int sayi) fonksiyonunu yazın.
 * (Armstrong sayısı: Basamaklarının küplerinin toplamına eşit olan sayı)
 * Bazı örnek Armstrong sayıları = 153, 370, 1634, 9474.
 */

// Bu fonksiyon sayının basamaklarıyla bir vector oluşturur.
// Böylece basamaklar üzerinde işlem yapılabilir.
std::vector<int> sayiDizisiOlustur(int sayi) {
    std::vector<int> sayilar; // Basamakları saklamak için bir vector
    int mevcutSayi = 0; // Geçici değişken

    while (sayi > 0) { // sayi pozitif olduğu sürece devam et
        mevcutSayi = sayi % 10; // Sayının son basamağını al
        sayi = sayi / 10; // Sayıyı bir basamak küçült
        sayilar.push_back(mevcutSayi); // Alınan basamağı vektöre ekle
    }

    std::reverse(sayilar.begin(), sayilar.end()); // Vektörü ters çevir (doğru sıraya getir)
    return sayilar;
}

bool isArmstrong(int sayi) {
    int basKupToplami = 0; // Sayının basamaklarının küplerinin toplamı
    std::vector<int> sayiDizisi; // Sayının basamaklarını tutacak vektör
    sayiDizisi = sayiDizisiOlustur(sayi);

    // Her basamağın küpünü topla
    for (int i = 0; i < sayiDizisi.size(); i++) {
        basKupToplami += std::pow(sayiDizisi[i], 3); // Basamağın küpünü ekle
    }

    // Eğer toplam, orijinal sayıya eşitse, sayi bir Armstrong sayısıdır
    if (basKupToplami == sayi) {
        return true;
    }
    return false;
}

int main() {
    int sayi;
    std::cout << "Bir tam sayı giriniz: ";
    if (!(std::cin >> sayi) || sayi < 0) { // Geçerli bir sayı kontrolü
        std::cout << "Sayı pozitif veya 0 olmalı!" << std::endl;
    } else {
        if (isArmstrong(sayi)) {
            std::cout << sayi << " bir Armstrong sayısıdır." << std::endl;
        } else {
            std::cout << sayi << " bir Armstrong sayısı değildir." << std::endl;
        }
    }

    return 0;
}
