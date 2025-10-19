#include <iostream>
#include <string>
#include <limits>

/* Kullanıcı adı ve şifre: Kullanıcı doğru şifreyi (“1234”) girene kadar
 * şifre sormaya devam eden bir programı do-while döngüsü ile yazın.
 * Kullanıcının 3 deneme şansı olsun. */

int sifre_Kontrol(int n) {
    int sifre = 1234;
    return n == sifre;
}

bool hesap_Giris() {
    int sifre;
    int deneme = 0;
    const int max_deneme = 3;

    do {
        std::cout << "Şifreyi giriniz: " << std::endl;
        if (!(std::cin >> sifre) || sifre <= 0) {       // Kullanıcıdan giriş alırken hata kontrolü
            std::cout << "Şifre pozitif tam sayı olmalı!" << std::endl;

            // Giriş akışını temizleme
            std::cin.clear(); // hata durumunu sıfırlamadığımızda sonsuz döngüye giriyor
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // hatalı girişi kaldır
        } else {
            if (sifre_Kontrol(sifre)) {
                return true; // Başarılı giriş
            }
            std::cout << "Şifre Hatalı, Tekrar Deneyin!" << std::endl;
            deneme++;
        }
    } while (deneme < max_deneme);

    return false; // Başarısız giriş
}

int main() {
    if (hesap_Giris()) {
        std::cout << "Hesaba başarılı bir şekilde giriş yapıldı!" << std::endl;
    } else {
        std::cout << "Başarısız işlem. Üç kez hatalı giriş yaptınız." << std::endl;
    }

    return 0;
}
