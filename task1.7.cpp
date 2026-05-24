#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Введіть дійсне число x: ";
    std::cin >> x;

    double int_part;
    double frac_part = std::modf(x, &int_part);

    std::cout << "Ціла частина: " << int_part << "\n";
    std::cout << "Дробова частина: " << frac_part << "\n";
    std::cout << "Найменше ціле, що більше або дорівнює x (ceil): " << std::ceil(x) << "\n";
    std::cout << "Найбільше ціле, що менше або дорівнює x (floor): " << std::floor(x) << "\n";
    std::cout << "Округлене значення (round): " << std::round(x) << "\n";

    return 0;
}
