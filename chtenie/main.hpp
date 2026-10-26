#pragma once

#include <iostream>

namespace Obuchika {
    struct MyItem {
         const char* const title;
         void (*func) (const MyItem*);
        const MyItem* const *children;
        const int children_len;
    };

    void show_menu(const MyItem* item);
    void choise_func(const MyItem* item);
}

// int i1
// bool b1
// int i2

// 1. Что такое механизм выравнивания памяти
// 2. Для чего используется extern
// 3. Для чего созданы структуры
