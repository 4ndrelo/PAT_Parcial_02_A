#include "Ejercicio02.h"

int Ejercicio02::countStudents(vector<char>* students, vector<char>* sandwiches)
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
