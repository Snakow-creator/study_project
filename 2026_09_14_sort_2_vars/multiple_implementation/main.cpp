#include "io.hpp"
#include "sortings.hpp"

#include <iostream>

int main () {
    int numbers[5];

    std::cout << "Введите 5 чисел" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "Введите число: ";
        std::cin >> numbers[i];
    }

    biv::print_array("Перед сортировкой: ", numbers, 5);

    biv::my_sort(numbers, 5);

    biv::print_array("После сортировки: ", numbers, 5);

    return 0;
}
