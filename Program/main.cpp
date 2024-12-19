#include <iostream>
#include "first.h"   // Include first.h
#include "second.h"  // Include second.h
#include "third.h"   // Include third.h

using namespace std;

int main () 
{
    // Accept two numbers from the user
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the functions from different files
    firstFunction();
    secondFunction();
    thirdFunction();

    // Print the results of arithmetic operations (for Part 1)
    cout << "Sum: " << add(num1, num2) << endl;
    cout << "Product: " << multiply(num1, num2) << endl;
    cout << "Quotient: " << divide(num1, num2) << endl;

    return 0;
}
