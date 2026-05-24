#include <iostream>

int main() {
    char a;
    std::cout << "Введіть цифру a: ";
    std::cin >> a;

    std::cout << a << ")\n";
    std::cout << "- " << a << " - " << a << " - " << a << "\n";
    std::cout << a << " | " << a << " | " << a << "\n";
    std::cout << "- " << a << " - " << a << " - " << a << ",\n";

    return 0;
}
