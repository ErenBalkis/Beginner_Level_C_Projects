#include <iostream>
#include <vector>
#include <string>
#include <limits> // Limitler için gereken kütüphane

/* Telefon Rehberi (Vector Kullanarak):

Kisi adında bir class oluşturun. Üyeleri: string ad, string telefonNumarasi.
main fonksiyonunda bir std::vector<Kisi> oluşturun.
Kullanıcıya 3 seçenek sunun: 1- Kişi Ekle, 2- Kişileri Listele, 3- Çıkış.
Kullanıcı 1'i seçerse, yeni bir isim ve numara alıp vektöre Kisi nesnesi olarak ekleyin.
Kullanıcı 2'yi seçerse, vektördeki tüm kişilerin bilgilerini döngü ile ekrana yazdırın.
Kullanıcı 3'ü seçerse programdan çıkın. Döngü while ile kontrol edilsin. */

class Kisi {
public:
    std::string ad;               // Kişinin adı
    std::string telefonNumarasi;  // Kişinin telefon numarası
};

// Telefon numarasının sadece rakamlardan oluşup oluşmadığını kontrol eden fonksiyon
bool isNumber(const std::string& str) {
    for (char const& c : str) {
        if (isdigit(c) == 0) return false; // Eğer karakter rakam değilse false döndür
    }
    return true; // Tüm karakterler rakam ise true döndür
}

// İsimde rakam olup olmadığını kontrol eden fonksiyon
bool isNameValid(const std::string& name) {
    for (char const& c : name) {
        if (isdigit(c)) return false; // Eğer karakter rakam ise false döndür
    }
    return true; // Tüm karakterler harf ise true döndür
}

int main() {
    std::vector<Kisi> kisiListesi; // Kişileri depolamak için dinamik dizi
    int islem_no;                  // Kullanıcının seçeceği işlem numarası

    std::cout << "\n----------TELEFON REHBERI----------\n" << std::endl;

    while (true) { // Sonsuz döngü
        std::cout << "1- Kişi Ekle,\n";
        std::cout << "2- Kişileri Listele,\n";
        std::cout << "3- Çıkış\n";
        std::cout << "Yapılacak işlemin yanındaki rakamı tuşlayınız: ";

        // Kullanıcının girdiği işlemi al ve kontrol et
        if (!(std::cin >> islem_no) || islem_no < 1 || islem_no > 3) {
            std::cerr << "Hatalı Giriş. Lütfen 1, 2 veya 3 girin!" << std::endl;
            std::cin.clear(); // Hata bayrağını temizle
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Geçersiz girişi yok say
            continue; // Döngünün başına dön
        }

        if (islem_no == 1) { // Kişi ekleme işlemi
            std::string adSoyad, telefonNumarasi;

            std::cin.ignore(); // Önceki girişi yok say
            std::cout << "Rehbere eklenecek Kişi Adını ve Soyadını girin (örnek: Ahmet Yılmaz):";
            std::getline(std::cin, adSoyad); // Ad ve soyadı tam olarak al
            std::cout << "Kişinin telefon numarasını girin (örnek: 1234567890):";
            std::cin >> telefonNumarasi; // Telefon numarasını al

            // Girilen telefon numarasını kontrol et
            if (isNumber(telefonNumarasi) && isNameValid(adSoyad)) {
                Kisi k; // Yeni Kisi nesnesi oluştur
                k.ad = adSoyad; // Ad ve soyadı ata
                k.telefonNumarasi = telefonNumarasi; // Telefon numarasını ata
                kisiListesi.push_back(k); // Kisi nesnesini vektöre ekle
                std::cout << "Kişi eklendi: " << k.ad << " : " << k.telefonNumarasi << std::endl;
            } else {
                if (!isNumber(telefonNumarasi)) {
                    std::cout << "Telefon Numarası Sayılardan Oluşmalıdır!" << std::endl;
                }
                if (!isNameValid(adSoyad)) {
                    std::cout << "İsim ve Soyad Rakam İçermemelidir!" << std::endl;
                }
            }
        } else if (islem_no == 2) { // Kişileri listeleme işlemi
            if (kisiListesi.empty()) {
                std::cout << "Kişiler Listesi Boş!" << std::endl;
            } else {
                std::cout << "\nKişiler Listeleniyor: " << std::endl;
                for (const auto& kisi : kisiListesi) {
                    std::cout << kisi.ad << " : " << kisi.telefonNumarasi << std::endl; // Kişi bilgilerini yazdır
                }
                std::cout << std::endl;
            }
        } else if (islem_no == 3) { // Çıkış işlemi
            std::cout << "Çıkış Yapıldı!" << std::endl;
            break; // Döngüden çık
        }
    }

    return 0;
}
