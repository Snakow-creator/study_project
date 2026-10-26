#include <iostream>

#include "menu_items.hpp"

int main() {
    std::cout << sizeof(Obuchika::MyItem) << std::endl;
    std::cout << alignof(Obuchika::MyItem);
    Obuchika::show_menu(&Obuchika::MAIN);
    return 0;
}
