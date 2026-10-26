#include "menu_items.hpp"

namespace Obuchika {
    extern const MyItem EXIT = {
        "0. Завершить чтение",
        nullptr,
    };

    extern const MyItem GO_BACK = {
        "0. Выйти в предыдущее меню",
        nullptr,
    };

    extern const MyItem READ1 = {
        "1. Дубровский",
        choise_func,
    };

    extern const MyItem READ2 = {
        "2. Евгений Онегин",
        choise_func,
    };

    extern const MyItem READ3 = {
        "3. Зимний вечер",
        choise_func,
    };

    const MyItem* const pushkin_children[] = {
        &GO_BACK,
        &READ1,
        &READ2,
        &READ3,
    };

    extern const MyItem READ_PUSHKIN = {
        "1. Пушкин",
        show_menu,
        pushkin_children,
        sizeof(pushkin_children) / sizeof(pushkin_children[0])
    };

    extern const MyItem READ_LERMONTOV = {
        "2. Лермонтов",
        choise_func
    };

    extern const MyItem READ_KRYLOV = {
        "3. Крылов",
        choise_func
    };

    const MyItem* const writers_children[] = {
        &GO_BACK,
        &READ_PUSHKIN,
        &READ_LERMONTOV,
        &READ_KRYLOV,
    };

    extern const MyItem GO_READ = {
        "1.  Русские писатели",
        show_menu,
        writers_children,
        sizeof(pushkin_children) / sizeof(pushkin_children[0])
    };

    const MyItem* const main_children[] = {
        &EXIT,
        &GO_READ,
    };

    extern const MyItem MAIN = {
        "Чтение писателей:",
        show_menu,
        main_children,
        sizeof(main_children) / sizeof(main_children[0])
    };
}
