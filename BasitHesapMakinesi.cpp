#include <iostream>

/* Basit bir hesap makinesi yazın. Kullanıcıdan iki sayıyı ve
 * bir işlem seçeneğini (+,-,*,/) char olarak alın.
 * Bölmede paydanın sıfır olma durumunu kontrol edin. */

int main() {
    int sayi1, sayi2, sonuc;
    char islem;

    std::cout << "Sırasıyla işlem yapılacak iki tam sayı giriniz: ";
    if (!(std::cin >> sayi1 >> sayi2)) {
        std::cerr << "Hatali Giriş!";
        return 1;
    }

    std::cout << "\nYapılacak işlemi seçiniz(*, /, +, -):";
    std::cin >> islem;

    switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            break;
        case '/':
            if (sayi2 == 0) {
                std::cerr << "Sıfıra Bölme Hatası!";
                return 1;
            }
            else {
                sonuc = sayi1 / sayi2;
            }
            break;
        default:
            std::cerr << "Hatalı İşlem Girişi!";
            return 1;
    }
    std::cout << sayi1 << " " << islem << " " << sayi2 << " = " << sonuc << std::endl;

    return 0;
}
