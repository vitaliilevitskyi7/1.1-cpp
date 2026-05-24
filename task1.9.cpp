#include <iostream>
#include <iomanip>

int main() {
    double a, b;
    std::cout << "Введіть два дійсних числа через пробіл: ";
    std::cin >> a >> b;

    double mean_ari = (a + b) / 2.0;
    double mean_geo = (2.0 * a * b) / (a + b);

    // Виведення в науковому (експоненційному) форматі
    std::cout << std::scientific;
    std::cout << "Науковий формат:\n";
    std::cout << " Середнє арифметичне: " << mean_ari << "\n";
    std::cout << " Середнє гармонічне:  " << mean_geo << "\n\n";

    // Виведення в десятковому (фіксованому) форматі
    std::cout << std::fixed << std::setprecision(6); // 6 знаків для точності
    std::cout << "Десятковий формат:\n";
    std::cout << " Середнє арифметичне: " << mean_ari << "\n";
    std::cout << " Середнє гармонічне:  " << mean_geo << "\n";

    return 0;
}
