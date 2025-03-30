#include <iostream>

using namespace std;

    //The following is a list of functions to perform various mathematical operations.
    double add(double a, double b){
        return a + b;
    }

    double subtract(double a, double b){
        return a - b;
    }

    double multiply(double a, double b){
        return a * b;
    }

    double divide(double a, double b){
        if (b !=0)
            return a / b;
        else {
            cout << "Error!  Cannot divide by zero!" << endl;
            return 0.0;
        }
    }

    double modulo(double a, double b){
        if(b !=0)
            return (a,b);
        else {
            cout << "Error! Cannot divide by zero!" << endl;
            return 0;
        }
    }

//The main function of the program begins here.
int main() {
    double a, b, answer;
    int choice;
//The following while loop will allow the user to select which operation they want to use.  The can continue using until number 6 is selected.
    while (true) {
        cout << "===Calculator Operations===" << endl;
        cout << "1. Addition: " << endl;
        cout << "2. Subtraction: " << endl;
        cout << "3. Multiplication: " << endl;
        cout << "4. Division: " << endl;
        cout << "5. Modulo: " << endl;
        cout << "6. Exit." << endl;

        cout << "Please enter the number of the operation you want to perform. ";
        cin >> choice;
        cout << endl;

        if (choice == 6) { 
            cout << "Thank you for using the calculator." << endl;
            break;
        }

        cout << "Enter your 1st number: ";
        cin >> a;
        cout << "Enter your 2nd number: ";
        cin >> b;

        switch (choice) {                 //Switch allows for different actions from user-selected value.
            case 1:
                answer = add (a, b);
                    cout << a << " + " << b << " = " << answer << endl;
                break;
            case 2:
                answer = subtract (a, b);
                    cout << a << " - " << b << " = " << answer << endl;
                break;
            case 3:
                answer = multiply (a, b);
                    cout << a << " x " << b << " = " << answer << endl;
                break;
            case 4:
                answer = divide (a, b);
                    if (b != 0)                                                      
                        cout << a << " / " << b << " = " << answer << endl;
                break;
            case 5:
                answer = modulo (a, b);
                    if (b != 0)
                        cout << a << " % " << b << " = " << answer << endl;
                break;
            default:
                cout << "Please select a number between 1 and 6." << endl;        //If user selects a number outside of boundaries, this message will appear.
                break;
            }

        cout << endl; //Used to provide spacing for readability.
    }

    return 0;
}
