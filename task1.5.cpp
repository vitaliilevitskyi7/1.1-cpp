#include <iostream>

int main() {
    double x;
    std::cout << "Введіть дійсне число x: ";
    std::cin >> x;

    // а) x^4 за дві операції
    double x2 = x * x;         // 1
    double x4 = x2 * x2;       // 2
    std::cout << "a) x^4 = " << x4 << "\n";

    // б) x^6 за три операції
    double x3 = x2 * x;        // 2
    double x6 = x3 * x3;       // 3
    std::cout << "б) x^6 = " << x6 << "\n";

    // в) x^9 за чотири операції
    // x2 вже є. x4 вже є.
    double x8 = x4 * x4;       // 3
    double x9 = x8 * x;        // 4
    std::cout << "в) x^9 = " << x9 << "\n";

    // г) x^15 за п'ять операцій
    // x2, x3 вже є.
    double x5 = x3 * x2;       // 3
    double x10 = x5 * x5;      // 4
    double x15 = x10 * x5;     // 5
    std::cout << "г) x^15 = " << x15 << "\n";

    // д) x^28 за шість операцій
    // x2, x4 вже є.
    double x7 = x4 * x3;       // 4 (використовуємо x3 з пункту б)
    double x14 = x7 * x7;      // 5
    double x28 = x14 * x14;    // 6
    std::cout << "д) x^28 = " << x28 << "\n";

    // е) x^64 за шість операцій
    // x2, x4, x8 (з пункту в) вже є.
    double x16 = x8 * x8;      // 4
    double x32 = x16 * x16;    // 5
    double x64 = x32 * x32;    // 6
    std::cout << "е) x^64 = " << x64 << "\n";

    return 0;
}
