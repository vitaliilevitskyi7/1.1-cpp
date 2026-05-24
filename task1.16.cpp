#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // Налаштування виведення дійсних чисел: 2 знаки після коми
    std::cout << std::fixed << std::setprecision(2);

    // Обчислення значень для функції а) F(x) = e^(-x^2)
    double ya1 = std::exp(-pow(-1, 2));
    double ya2 = std::exp(-pow(-2, 2));
    double ya3 = std::exp(-pow(-3, 2));
    double ya4 = std::exp(-pow(-4, 2));
    double ya5 = std::exp(-pow(-5, 2));

    // Виведення таблиці для функції а)
    std::cout << "а) F(x) = e^(-x^2)\n";
    std::cout << "x----|-1-|-2-|-3-|-4-|-5-|\n";
    std::cout << "------|---|---|---|---|---|\n";
    std::cout << "F(x) |" 
              << std::setw(3) << ya1 << "|" 
              << std::setw(3) << ya2 << "|" 
              << std::setw(3) << ya3 << "|" 
              << std::setw(3) << ya4 << "|" 
              << std::setw(3) << ya5 << "|\n\n";

    // Обчислення значень для функції б) F(x) = sqrt(x)
    // Оскільки аргументи від'ємні (-1..-5), для дійсних чисел корінь не визначений.
    // Якщо припустити, що в умові малися на увазі модулі чисел або додатні x (1..5):
    double yb1 = std::sqrt(1.0);
    double yb2 = std::sqrt(2.0);
    double yb3 = std::sqrt(3.0);
    double yb4 = std::sqrt(4.0);
    double yb5 = std::sqrt(5.0);

    // Виведення таблиці для функції б) (за умови додатних x: 1, 2, 3, 4, 5)
    std::cout << "б) F(x) = sqrt(x) (для додатних x)\n";
    std::cout << "x----| 1 | 2 | 3 | 4 | 5 |\n";
    std::cout << "------|---|---|---|---|---|\n";
    std::cout << "F(x) |" 
              << std::setw(3) << yb1 << "|" 
              << std::setw(3) << yb2 << "|" 
              << std::setw(3) << yb3 << "|" 
              << std::setw(3) << yb4 << "|" 
              << std::setw(3) << yb5 << "|\n";

    return 0;
}
