#include "io.hpp"
#include "sortings.hpp"

#include <iostream>

int main () {
    const int count = 5;
    int numbers[count];
    std::cout << "Введите "<< count << " чисел" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << "Введите число: ";
        std::cin >> numbers[i];
    }
    biv::print_array("Перед сортировкой: ", numbers, count);

    biv::my_sort(numbers, count);

    biv::print_array("После сортировки: ", numbers, count);

    return 0;
}
