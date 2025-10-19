#include <iostream>
#include <string>

/* Aşırı Yüklenmiş yazdir Fonksiyonu: Bir int, bir double,
 * bir std::string ve bir önceki problemdeki Vector2D yapısını
 * ekrana formatlı bir şekilde yazdıran,aşırı yüklenmiş
 * void yazdir(...) fonksiyonları yazınız. */

struct Vector2D {
    double x;
    double y;

    Vector2D(double xVal, double yVal) : x(xVal), y(yVal) {}
};

void yazdir(int deger) {
    std::cout << "Integer: " <<deger << std::endl;
}

void yazdir(double deger) {
    std::cout << "Double: " <<deger << std::endl;
}

void yazdir(std::string deger) {
    std::cout << "String: " <<deger << std::endl;
}

void yazdir(const Vector2D& deger) {
    std::cout << "Vector2D: (" << deger.x << ", " << deger.y << ")" << std::endl;
}


int main() {
    yazdir(7);
    yazdir(15.7654);
    yazdir("Merhaba, C++");
    yazdir(Vector2D(2.5, 5.0));

    return 0;
}
