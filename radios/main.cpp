#include <iostream>
double areaOfCircle(double radius) {
    return 3.14159 * radius * radius;
}
double areaOfRing(double outerRadius, double innerRadius) {
    return areaOfCircle(outerRadius) - areaOfCircle(innerRadius);
}

int main() {
    double outerRadius, innerRadius;

    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> outerRadius;
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> innerRadius;

    if (outerRadius <= innerRadius) {
        std::cerr << "Ошибка: Внешний радиус должен быть больше внутреннего!\n";
        return 1;
    }

    double ringArea = areaOfRing(outerRadius, innerRadius);
    std::cout << "Площадь кольца: " << ringArea << std::endl;

    return 0;
}
