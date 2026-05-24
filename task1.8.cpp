#include <iostream>
#include <iomanip>

int main() {
    double a, b;
    std::cout << "Введіть перше число: ";
    std::cin >> a;
    std::cout << "Введіть друге число: ";
    std::cin >> b;

    double diff = a - b;

    // Виведення з фіксованою крапкою
    std::cout << std::fixed;
    std::cout << "Різниця: " << diff << "\n";

    return 0;
}
