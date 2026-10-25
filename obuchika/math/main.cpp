#include <clocale>
#include <iostream>

#include "main.hpp"

using namespace std;

int main() {
    char choise;

    do {
        cout << "Обучайка приветствует меня, мой юный ученик!" << endl;
        // cout << "Выбери какой дисциплинной ты хочешь заниматься:" << endl;
        cout << "1. Хочу учиться! Обучи меня!" << endl;
        cout << "0. Я спать.. (выход)" << endl;

        cin >> choise;

    } while (true);

    return 0;
}
