#include "sort.hpp"

namespace biv {

void bubble_sort_optimized(int* array, std::size_t size)
{
    for (std::size_t pass = 1; pass < size; ++pass) {
        bool swapped = false;
        for (std::size_t i = 0; i < size - pass; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            return;
        }
    }
}

}
