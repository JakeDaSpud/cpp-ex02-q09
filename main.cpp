#include <iostream>

//Write a recursive function divide( int ) that will take an int argument and will
//repeatedly divide the argument by 2 (integer division), by calling divide() recursively,
//until the argument becomes less than 1. In the divide() function, output the value of the
//argument each time the function is called.

int divide(double numIn) {

    std::cout << "numIn value: " << numIn << std::endl;

    if (numIn >= 1) {
        numIn = numIn/2;
        numIn = divide(numIn);
    }

    std::cout << "Value less than 1: " << numIn << std::endl;
    return numIn;
}

int main() {
    std::cout << "INPUT NUMBER IS 4: " << std::endl;

    divide(4);

    return 0;
}
