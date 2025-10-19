#include <iostream>

/* Kullanıcıdan bir yıl girmesini isteyin.
 * Yılın artık yıl olup olmadığını hesaplayıp ekrana yazdırın.
 * (artık yıl kuralı: “4’e bölünür ve 100’e bölünmez” veya “400’e bölünür”) */

int main() {
    int year;
    std::cout << "Bir yıl giriniz(MÖ için '-' ile): ";
    if (!(std::cin >> year)) {
        std::cerr << "Hatali Giriş!";
    }

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        std::cout << year << " bir artık yıldır!\n";
    }
    else::std::cout << year << " bir artık yıl değildir!\n";

    return 0;
}
