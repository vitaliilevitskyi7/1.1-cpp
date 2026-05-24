#include <iostream>
#include <iomanip>

int main() {
    // Обчислення ланцюгового дробу знизу вгору
    double step1 = 1.0 + (1.0 / 3.0);
    double step2 = 7.0 + (1.0 / step1);
    double step3 = 4.0 + (1.0 / step2);
    
    // Кінцевий результат
    double T = 365.0 + (1.0 / step3);

    // Виведення у форматі з плаваючою крапкою (стандартний вигляд)
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Період обертання Землі T = " << T << " діб" << std::endl;

    return 0;
}
