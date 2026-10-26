#include <iostream>

#include "writers_funcs.hpp"

using namespace std;

void Obuchika::show_menu(const Obuchika::MyItem *item) {
    int choise;

    while (true) {
        cout << endl << item->title << endl;

        for (int i = 0; i < item->children_len; i++)
        {
            cout << item->children[i]->title << endl;
        }

        cout << "Выберите вариант: ";

        if (!(cin >> choise)) return;

        if (choise == 0) return;

        if (choise < 0 or choise > item->children_len ) {
            cout << endl << "Неправильный пункт" << endl;
        } else {
            item->children[choise]->func(item->children[choise]);
        };

    }
}

void Obuchika::choise_func(const Obuchika::MyItem *item) {
    cout << endl << "Вы выбрали " << item->title << endl;
};


