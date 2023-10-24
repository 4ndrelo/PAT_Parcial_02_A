#include "Ejercicio03.h"

MinStack::MinStack()
{
}

void MinStack::push(int value)
{
    mainStack.push_back(value);

   
    if (minStack.empty() || value <= minStack.back()) 
    {
        minStack.push_back(value);
    }
}

void MinStack::pop()
{
    if (!mainStack.empty()) {
      
        if (mainStack.back() == minStack.back()) {
            minStack.pop_back();
        }
        mainStack.pop_back();
    }
}

int MinStack::top()
{
    if (!mainStack.empty()) {
        return mainStack.back();
    }
    return INT_MIN; 
}

int MinStack::getMin()
{
    if (!minStack.empty()) {
        return minStack.back();
    }
    return INT_MIN; 

}

private:
    std::vector<int> mainStack; 
    std::vector<int> minStack;  
};
