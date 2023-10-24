#pragma once

#include <vector>

using std::vector;

class Ejercicio02
{
public:
    Sandwiches(const char* students, const char* sandwiches);
    int countStudentsNotEaten();
private:
    char* students;
    char* sandwiches;
};

