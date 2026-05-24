#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // Ініціалізація змінних різних типів
    float num1 = 1e-4f;
    double num2 = 24.33e5;
    long double pi_val = 3.14159265358979323846L;
    double e_val = 2.7182818284590452354;
    float sqrt5 = std::sqrt(5.0f);
    double ln100 = std::log(100.0);

    // Налаштування виведення: 2 знаки після коми
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "10^-4   = " << num1 << std::endl;
    std::cout << "24.33E5 = " << num2 << std::endl;
    std::cout << "pi      = " << pi_val << std::endl;
    std::cout << "e       = " << e_val << std::endl;
    std::cout << "sqrt(5) = " << sqrt5 << std::endl;
    std::cout << "ln(100) = " << ln100 << std::endl;

    return 0;
}
