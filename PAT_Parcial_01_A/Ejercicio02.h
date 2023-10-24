#pragma once

#include <vector>
#include <iostream>
using namespace std;

class Ejercicio02
{
public:
    int countStudents(vector<char> students, vector<char> sandwiches)
    {
        int studentIndex = 0;
        int sandwichIndex = 0;

        while (studentIndex < students.size() && sandwichIndex < sandwiches.size()) {
            if (students[studentIndex] == sandwiches[sandwichIndex]) {
                
                studentIndex++;
            }
            sandwichIndex++;
        }
        return students.size() - studentIndex;
    }
};