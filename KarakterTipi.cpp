#include <algorithm>
#include <iostream>
#include <vector>

//Kullanıcıdan bir karakteri girdi olarak alın. Karakterin
//sesli harf, sessiz harf rakam veya özel karakter
//olduğunu if-else yapısı kullanarak belirleyin.

std::vector<char> sesli_harfler = {'a','e','i','o','u'};

int main() {
    char karakter;
    bool sonuc = false;
    std::cout << "Bir karakter giriniz: ";
    std::cin >> karakter;

    unsigned char ch;
    ch = static_cast<unsigned char>(karakter);
    char lower;
    lower = static_cast<char>(std::tolower(ch)); //küçük harf üzerinden işlem yapabilmemizi sağlar.

    if (std::isdigit(lower)) {
        std::cout << "Rakam";
    }
    else if (std::isalpha(lower)) { // harf mi?
        for (char i : sesli_harfler) { // sesli harf vectoru içinde kontrol
            if (lower == i) {
                sonuc = true; //sesli ise sonuc true
            }
        }
        if (sonuc) { // sonucun değerlendirilmesi
            std::cout << "Sesli Harf";
        }
        else {
            std::cout << "Sessiz Harf";
        }
    }
    else {
        std::cout << "Özel Karakter";
    }

    return 0;
}
