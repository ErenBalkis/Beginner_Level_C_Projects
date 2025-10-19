#include <iostream>

/* Vücut Kitle İndeksi (VKI) hesaplayan bir program yazın.
 Kilo (kg) ve boy (m) double olarak alın.
 VKI = kilo / (boy*boy) formülünü kullanın.
 if-else yapısı ile sonucu aşağıdaki aralıklara göre yorumlayın:
        a. VKI < 18.5 : “Zayıf”
        b. 18.5 <= VKI < 25 : “Normal”
        c. 25 <= VKI < 30 : “Fazla Kilolu”
        d.  VKI >= 30 : “Obez” */

int main() {
    double kilo = 0.0;
    double boy = 0.0;

    std::cout << "Kilo (kg): ";
    if (!(std::cin >> kilo) || kilo <= 0.0) {
        std::cerr << "Geçersiz kilo değeri.\n";
        return 1;
    }

    std::cout << "Boy (m): ";
    if (!(std::cin >> boy) || boy <= 0.0) {
        std::cerr << "Geçersiz boy değeri.\n";
        return 1;
    }

    // VKI = kilo / (boy * boy)
    double vki = kilo / (boy * boy);

    std::cout << "\nVücut Kitle İndeksi (VKI): " << vki << " -> ";

    if (vki < 18.5) {
        std::cout << "Zayıf\n";
    } else if (vki < 25.0) {
        std::cout << "Normal\n";
    } else if (vki < 30.0) {
        std::cout << "Fazla Kilolu\n";
    } else {
        std::cout << "Obez\n";
    }

    return 0;
}
