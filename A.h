#pragma once
#include <iostream>

class A
{
    private:
        int value; // The number sent to object, member variables should be private.
    public:
        A(int v): value(v) {} //initialiser
        void print() { std::cout << "My value is " << value << std::endl; }
        // Prefix increment operator overloading.
        A& operator++(int);

        // friend function, requires references with objects.
        friend A add(A &a1, A &a2);
        // friend function used for overloading + operator.
        friend A operator+(const A &a1, const A &a2);
};