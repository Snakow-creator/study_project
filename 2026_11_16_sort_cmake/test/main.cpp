#include "sort.hpp"

#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <vector>

int main()
{
    using Clock = std::chrono::steady_clock;
    using ms = std::chrono::duration<double, std::milli>;

    std::mt19937 generator(42);
    std::uniform_int_distribution<int> random_number(-100000, 100000);

    std::cout << "| Элементов | Классический пузырёк, мс | С досрочным выходом, мс |\n";
    std::cout << "|---:|---:|---:|\n";

    for (int size : {10000, 100000}) {
        std::vector<int> original(size);
        for (int& value : original) {
            value = random_number(generator);
        }

        auto classic = original;
        auto optimized = original;

        auto start = Clock::now();
        biv::bubble_sort_classic(classic.data(), size);
        auto classic_end = Clock::now();
        biv::bubble_sort_optimized(optimized.data(), size);
        auto optimized_end = Clock::now();

        std::sort(original.begin(), original.end());
        if (classic != original || optimized != original) {
            std::cerr << "Ошибка сортировки массива из " << size << " элементов.\n";
            return 1;
        }

        ms classic_time = classic_end - start;
        ms optimized_time = optimized_end - classic_end;
        std::cout << "| " << size << " | " << classic_time.count()
                  << " | " << optimized_time.count() << " |\n";
    }
}
