#include <iostream>
using namespace std;
// Main program
main()
{

    char op;
    float num1,  num2;

    // it allows user to enter operator 
    
    cin >> op;
    cin >> num1 >> num2;

    // now switch statements begin

    switch (op) {

        case '*':
        cout << num1 + num2;
        break;

        case '-':
        cout << num1 - num2;
        break;

        case '/':
        cout << num1 / num2;
        break;

        default:
        cout << "error! operator is not correct. ";
        break;

        return 0;

    }
}
