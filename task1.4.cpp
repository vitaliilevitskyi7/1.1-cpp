#include <iostream>
#include <iomanip>

int main() {
    // Константа та змінні (значення наведені для прикладу)
    const double gamma = 6.673e-11;
    double m1 = 6.0e24;  // Маса тіла 1 (наприклад, Земля)
    double m2 = 7.3e22;  // Маса тіла 2 (наприклад, Місяць)
    double r = 3.84e8;   // Відстань між тілами

    // Обчислення за формулою
    double F = gamma * (m1 * m2) / (r * r);

    // Виведення у науковому форматі
    std::cout << std::scientific;
    std::cout << "< F=" << F << " >" << std::endl;

    return 0;
}
