#include <iostream>

#include "main.hpp"

using namespace std;

void ITeacher::show_menu(const MenuItem *item)
{
    int choice;

    while (true)
    {
        cout << endl << item->title << endl;

        for (int i = 0; i < item->children_count; i++)
        {
            cout << item->children[i]->title << endl;
        }

        cout << "Введите номер: ";

        if (!(cin >> choice)) return;

        if (choice == 0) return;

        if (choice < 0 || choice >= item->children_count)
        {
            cout << "Такого пункта нет!" << endl;
        }
        else
        {
            item->children[choice]->func(item->children[choice]);
        }
    }
}

void ITeacher::study_summ(const MenuItem *item)
{
    cout << "\nСложение: 2 + 3 = 5\n";
}

void ITeacher::study_sub(const MenuItem *item)
{
    cout << "\nВычитание: 8 - 3 = 5\n";
}

void ITeacher::study_mult(const MenuItem *item)
{
    cout << "\nУмножение: 4 * 3 = 12\n";
}

void ITeacher::study_div(const MenuItem *item)
{
    cout << "\nДеление: 12 / 3 = 4\n";
}

void ITeacher::study_square(const MenuItem *item)
{
    cout << "\nПлощадь квадрата: S = a * a\n";
}

void ITeacher::study_cube(const MenuItem *item)
{
    cout << "\nОбъём куба: V = a * a * a\n";
}
