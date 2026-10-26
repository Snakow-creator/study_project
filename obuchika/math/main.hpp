#pragma once

namespace ITeacher {
    struct MenuItem {
        const char* const title;
        void (*func)(const MenuItem*);
        const MenuItem* const *children;
        const int children_count;
    };

    void show_menu(const MenuItem* item);

    void study_summ(const MenuItem* item);
    void study_sub(const MenuItem* item);
    void study_mult(const MenuItem* item);
    void study_div(const MenuItem* item);

    void study_cube(const MenuItem* item);
    void study_square(const MenuItem* item);
}
