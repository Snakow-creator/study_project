#include "menu_items.hpp"

namespace ITeacher {

    const MenuItem STUDY_GO_BACK = {
        "0. Назад",
        nullptr
    };

    const MenuItem STUDY_SUMM = {
        "1. Сложение",
        study_summ
    };

    const MenuItem STUDY_SUB = {
        "2. Вычитание",
        study_sub
    };

    const MenuItem STUDY_MULT = {
        "3. Умножение",
        study_mult
    };

    const MenuItem STUDY_DIV = {
        "4. Деление",
        study_div
    };

    const MenuItem STUDY_SQUARE = {
        "1. Квадрат",
        study_square
    };

    const MenuItem STUDY_CUBE = {
        "2. Куб",
        study_cube
    };

    const MenuItem* const algebra_children[] = {
        &STUDY_GO_BACK,
        &STUDY_SUMM,
        &STUDY_SUB,
        &STUDY_MULT,
        &STUDY_DIV
    };

    const MenuItem* const geometry_children[] = {
        &STUDY_GO_BACK,
        &STUDY_SQUARE,
        &STUDY_CUBE
    };

    const MenuItem STUDY_ALGEBRA = {
        "1. Алгебра",
        show_menu,
        algebra_children,
        sizeof(algebra_children) / sizeof(algebra_children[0])
    };

    const MenuItem STUDY_GEOMETRY = {
        "2. Геометрия",
        show_menu,
        geometry_children,
        sizeof(geometry_children) / sizeof(geometry_children[0])
    };

    const MenuItem* const subjects_children[] = {
        &STUDY_GO_BACK,
        &STUDY_ALGEBRA,
        &STUDY_GEOMETRY
    };

    const MenuItem STUDY = {
        "1. Хочу учиться! Обучи меня!",
        show_menu,
        subjects_children,
        sizeof(subjects_children) / sizeof(subjects_children[0])
    };

    const MenuItem EXIT = {
        "0. Я спать.. (выход)",
        nullptr
    };

    const MenuItem* const main_children[] = {
        &EXIT,
        &STUDY
    };

    const MenuItem MAIN = {
        "Обучайка приветствует тебя, мой юный ученик!",
        show_menu,
        main_children,
        sizeof(main_children) / sizeof(main_children[0])
    };

}
