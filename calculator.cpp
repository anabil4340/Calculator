#include <iostream>
#include <cmath>
using namespace std;

//Display Menu options for Calculator
void showMenu()
{
    cout << "\n === Scientific Calculator ===\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root\n";
    cout << "7. Natural Logarithm (ln)\n";
    cout << "8. Sine (sin)\n";
    cout << "9. Cosine (cos)\n";
    cout << "10. Tangent (tan)\n";
    cout << "11. Exit\n";
    cout << "Choose an option\n";

}

//Method for performing addition
void performAddition() {
   double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b << endl;
}

//Method for performing subtraction
void performSubtraction() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << a << " - " << b << " = " << a - b << endl;
}
//Method for performing multiplication
void performMultiplication() {
    double a, b;
    cout <<"Enter two numbers: ";
    cin >> a >> b;
    cout << a << " x " << b << " = " << a * b << endl;
}
//Method for performing division
void performDivision() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << a << "/" << b << " = " << a / b << endl;
}
//Method for performing power
void performPower() {
    double base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << base << "^" << exponent << " = " << pow(base, exponent) << endl;
}
//Method for performing square root
void performSquareRoot() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num<0) {
        cout << num << " Error! Enter a valid number\n";
    }else {
        cout << " Result: " << sqrt(num) << endl;
    }
}
//Method for performing log functions
void performLogarithm() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num<=0) {
        cout << num << " Error! Enter a valid number\n";
    } else {
        cout << " Result: " << log(num) << endl;
    }
}
//Method for performing sin functions
void performSine() {
    double angle;
    cout << "Enter angle in degrees: ";
    cin >> angle;
    cout << "Result: " << sin(angle*M_PI/180) << endl;
}
//Method for performing cos function
void performCosine() {
    double angle;
    cout << "Enter angle in degrees: ";
    cin >> angle;
    cout << "Result: " << cos(angle*M_PI/180) << endl;
}
//Method for performing tan function
void performTangent() {
    double angle;
    cout << "Enter angle in degrees: ";
    cin >> angle;
    cout << "Result: " <<tan(angle * M_PI/180) << endl;
}


int main() {

    int choice;


    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:performAddition(); break;
            case 2:performSubtraction(); break;
            case 3:performMultiplication(); break;
            case 4:performDivision(); break;
            case 5:performPower(); break;
            case 6:performSquareRoot(); break;
            case 7:performLogarithm(); break;
            case 8:performSine(); break;
            case 9:performCosine(); break;
            case 10:performTangent(); break;
            case 11: cout << "Goodbye! \n"; break;

            default: cout<< "Invalid option. Please try again. \n";
                break;
        }
    } while (choice !=11);//exit when choice 11 is selected

    return 0;

}
