// SIMPLE CALCULATOR using OOP
// Dec 30, 2023
// Author: Alexander Chen

#include <iostream>

using namespace std;

class simpleCalculator {
// ATTRIBUTES (AKA VARIABLES)
private:
    double result;

// METHODS (AKA FUNCTIONS)
public:
    // constructor (intialization)
    simpleCalculator() {
        // set the result to 0
        result = 0.0;
    }
    // addition
    void add(double operand) 
    {
        result += operand;
    }
    // subtraction
    void subtract(double operand) 
    {
        result -= operand;
    }
    // multiplication
    void multiply(double operand)
    {
        result *= operand;
    }
    // division
    void divide(double operand)
    {
        // check dividing by 0
        if (operand != 0) {
            result /= operand;
        } else {
            cout << "ERROR" << endl;
        }
    }
    
    // result
    double getResult() const 
    {
        return result;
    }
};

int main()
{
    // simpleCalculator result is equal to 0.0 at the start of the program.
    simpleCalculator myCalculator;
    // access public functions, they work the same as any function
    // just needs to be called on by the dot operator
    myCalculator.add(5.0);
    myCalculator.add(5.0);

    cout << "result: " << myCalculator.getResult() << endl;
    return 0;
}