#include <iostream>

/* Mini ATM oluşturun. Seçenekleri:
        a. 1- Bakiye Sorgula
        b. 2- Para Çek
        c. 3- Para Yatır
        d. 4- Çıkış
 * Olan menüyü sunun.
 * Başlangıç bakiyesini const double baslangicBakiye = 1000.0; olarak tanımlayın.
 * Kullanıcının talebine  göre işlemi switch-case yapısı ile gerçekleştirin.
 * Para çekerken talep edilen miktarın bakiyeden fazla olup olmadığı kontrolü önemli. */

int main() {
    const double baslangicBakiye = 1000.0;
    double bakiye = baslangicBakiye;
    int islem;
    double paraCek = 0.0;
    double paraYatir = 0.0;

    std::cout << "\n----------HOŞGELDİNİZ----------\n\n";
    std::cout << "1- Bakiye Sorgula " << "\n";
    std::cout << "2- Para Çek " << "\n";
    std::cout << "3- Para Yatır " << "\n";
    std::cout << "4- Çıkış " << "\n\n";
    std::cout << "Yapmak istediğiniz işlemin yanındaki rakamı tuşlayınız: ";
    if (!(std::cin >> islem) || islem < 1 || islem > 4) {
        std::cerr << "Hatalı Giriş!";
        return 1;
    }

    switch (islem) {
        case 1:
            std::cout << "Bakiye: " << baslangicBakiye << "TL\n";
            break;
        case 2:
            std::cout << "Çekilecek para miktarını giriniz: ";
            if (!(std::cin >> paraCek) || paraCek < 0) {
                std::cerr << "Hatali Giriş!";
                return 1;
            }
            if (paraCek > baslangicBakiye) {
                std::cerr << "Çekilecek para miktarı bakiyeden fazla olamaz!" << "\n";
            } else {
                bakiye -= paraCek;
                std::cout << "Güncel Bakiye: " << bakiye << "TL\n";
            }
            break;
        case 3:
            std::cout << "Yatırılacak para miktarını giriniz: ";
            if (!(std::cin >> paraYatir) || paraYatir < 0) {
                std::cerr << "Hatalı Giriş!";
            }
            bakiye += paraYatir;
            std::cout << "Güncel Bakiye: " << bakiye << "TL\n";
            break;
        case 4:
            std::cout << "----------İYİ GÜNLER----------";
            return 0;
    }

    return 0;
}
