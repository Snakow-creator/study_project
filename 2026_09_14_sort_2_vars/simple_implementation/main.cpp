#include <iostream>

void print_array(const char* const comment, int* arr, const int size) {
    std::cout << comment;

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }

    std::cout << '\n';
};

void my_sort(int *arr, const int size) {
    for (int i = 1; i < size; i++) {
        const int value = arr[i];
        int n = i;

        // сдвигаем большие элементы вправо, пока не найдём место для value
        while (n > 0 && value < arr[n - 1]) {
            arr[n] = arr[n - 1];
            n--;
        }

        arr[n] = value;
    }
}





int main () {
    int numbers[5];

    std::cout << "Введите 5 чисел" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "Введите число: ";
        std::cin >> numbers[i];
    }

    print_array("Перед сортировкой: ", numbers, 5);

    my_sort(numbers, 5);

    print_array("После сортировки: ", numbers, 5);

    return 0;
}
