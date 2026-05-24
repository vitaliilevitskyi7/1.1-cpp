#include <iostream>
#include <iomanip>

int main() {
    double C;
    std::cout << "Введіть температуру в градусах Цельсія (C): ";
    std::cin >> C;

    // Розрахунок за формулою
    double F = (9.0 / 5.0) * C + 32.0;

    // Виведення у найкоротшому вигляді
    std::cout << std::defaultfloat;
    std::cout << "<F=" << F << ">\n";

    return 0;
}
