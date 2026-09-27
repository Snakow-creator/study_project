#include <iostream>
#include <clocale>

void my_sort(int *arr, int *numbers, const int size);


int main () {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int numbers[5];

    std::cout << "Введите 5 чисел" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "Введите число: ";
        std::cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " " << std::endl;
    }

    int sort_numbers[5];
    my_sort(numbers, sort_numbers, 5);


    for (int i = 0; i < 5; i++) {
        std::cout << sort_numbers[i] << " " << std::endl;
    }


    return 0;
}

// function arr - unsorted_numbers, numbers, size - len
void my_sort(int *arr, int *numbers, const int size) {
    for (int i = 0; i < size; i++) {
        int n = i;

        // find place for arr[i]
        while (n > 0 && arr[i] < numbers[n - 1]) {
            numbers[n] = numbers[n - 1];
            n--;
        }

        numbers[n] = arr[i];
    }
}
