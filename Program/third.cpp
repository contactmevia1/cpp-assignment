#include <iostream>
#include "third.h"

using namespace std;

void thirdFunction() {
    cout << "I am printing to the screen from third.cpp file" << endl;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}
