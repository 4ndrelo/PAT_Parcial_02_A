#include "Ejercicio02.h"

Sandwiches::Sandwiches(const char* students, const char* sandwiches) {
    this->students = strdup(students);
    this->sandwiches = strdup(sandwiches);
}

int Sandwiches::countStudentsNotEaten() {
    int studentsCount = strlen(students);
    int sandwichesCount = strlen(sandwiches);

    int notEaten = 0;
    bool* eaten = new bool[studentsCount];
    memset(eaten, false, studentsCount * sizeof(bool));

    for (int i = 0; i < sandwichesCount; ++i) {
        bool foundMatch = false;
        for (int j = 0; j < studentsCount; ++j) {
            if (!eaten[j] && students[j] == sandwiches[i]) {
                eaten[j] = true;
                foundMatch = true;
                break;
            }
        }

        if (!foundMatch) {
            notEaten = studentsCount - i;
            break;
        }
    }

    delete[] eaten;
    return notEaten;
}