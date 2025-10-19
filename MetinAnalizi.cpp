#include <iostream>
#include <algorithm>
#include <string>
/*
 * Metin Analizi Fonksiyonu:
 * Parametre olarak bir std::string alan ve metin içindeki
 * sesli harf, sessiz harf ve rakam sayısını hesaplayıp
 * ekrana yazdıran void metniAnalizEt(std::string metin) fonksiyonunu yazın.
 * For döngüsü idealdir.
 */

const char sesliHarfler[] = {'a', 'e', 'i', 'o', 'u'}; // Sesli harflerin bulunduğu karakter dizisi

// Gönderilen karakterin sesli harf olup olmadığını kontrol eden fonksiyon
bool sesliMi(char harf) {
    for (char sesli : sesliHarfler) { // Sesli harfler dizisi içinde döngü
        if (sesli == harf) {
            return true;
        }
    }
    return false;
}

// Metindeki sesli, sessiz harf ve rakam sayılarını analiz eden fonksiyon
void metniAnalizEt(std::string metin) {
    int sesli = 0; // Sesli harf sayacı
    int sessiz = 0; // Sessiz harf sayacı
    int rakam = 0; // Rakam sayacı

    std::transform(metin.begin(), metin.end(), metin.begin(), ::tolower); // Metni küçük harflere dönüştür

    // Girilen metnin içindeki her elemanı (harf, rakam) inceleriz
    for (char eleman : metin) {
        if (std::isdigit(eleman)) { // Eleman rakam ise
            rakam++;
        } else if (std::isalpha(eleman)) { // Eleman bir harf ise
            if (sesliMi(eleman)) { // Harf sesli mi kontrol et
                sesli++;
            } else {
                sessiz++;
            }
        }
    }

    // Sonuçlar ekrana yazdırılır
    std::cout << "Girilen metinde " << sesli << " tane sesli harf, "
              << sessiz << " tane sessiz harf ve " << rakam
              << " tane rakam var." << std::endl;
}

int main() {
    std::string metin; // Kullanıcıdan alınacak metin

    std::cout << "Lütfen İngiliz alfabesine uygun metin giriniz: ";
    std::getline(std::cin, metin); // Kullanıcıdan satır boyunca girilen metin alınır
    metniAnalizEt(metin);

    return 0;
}
