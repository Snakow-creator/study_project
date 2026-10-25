#pragma once

namespace ITeacher {
    struct MenuItem {
        const char* const title;
        void (*func)(const MenuItem*);
    };
}
