/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{ int operationChoice; double num1; double num2; double result;
    cout << "Hello this is my first project. This is a simple and easy calculator" << endl;
    cout << endl;
    cout << endl;
    cout << "Type the number of the operation you wish to perform" << endl;
    cout << endl;
    cout << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> operationChoice;
    cout << endl;
    cout << endl;
    cout << "Now, type in the first number you choose to use (for example, if you want to do 10/5, you would type in 10 for the first number)" << endl;
    cin >> num1;
    cout << endl;
    cout << endl;
    cout << "Now type in the 2nd number you choose to use" << endl;
    cin >> num2;
    cout << endl;
    cout << endl;
    if(operationChoice == 1)
    {
        result = num1 + num2;
        cout << "Your answer is " << result << "." << endl;
    }
    else if(operationChoice == 2)
    {
        result = num1 - num2;
        cout << "Your answer is " << result << "." << endl;
    }
    else if(operationChoice == 3)
    {
        result = num1 * num2;
        cout << "Your answer is " << result << "." << endl;
    }
    else if(operationChoice == 4)
    {
        result = num1 / num2;
        cout << "Your answer is " << result << "." << endl;
    }
    
    return 0;
}
