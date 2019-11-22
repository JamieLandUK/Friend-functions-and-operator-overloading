#include "A.h"
#include <iostream>

// Friend functions for A.h --
A add(A &a1, A &a2) {
    return A(a1.value + a2.value);
}

A operator+(const A &a1, const A &a2) {
    return A(a1.value + a2.value);
}
// --

// Member functions for A.h --
// Takes an address and returns the pointer for the object.
A& A::operator++(int) {
    // Increments preceeding object's value.
    value++;
    return *this;
}
// --

int main() {
    // Testing the basic function of the classes.
    A a1 = A(2);
    A a2 = A(3);

    a1.print();
    a2.print();

    // Using friend functions to add the two objects together.
    A a3 = add(a1, a2);
    a3.print();

    // Using operator overloading with friend functions to add two objects together.
    A a4 = a1 + a2 + a3;
    a4.print();

    // Using operator overloading to increment a value in an object.
    A a5 = a4++;
    a5.print();

    return 0;
}