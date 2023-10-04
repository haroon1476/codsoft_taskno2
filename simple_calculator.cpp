#include <iostream>
#include <iomanip>
using namespace std;


class calculator {

private:
    int num1;
    int num2;

public:

    void set_num1(int n) {
        num1 = n;
    }

    void set_num2(int n) {
        num2 = n;
    }

    int sum() {
        return num1 + num2;
    }

    int subract() {
        return num1 - num2;
    }

    int multiply() {
        return num1 * num2;
    }

    float divide() {
        return num1 / num2;
    }

};


int main() {


    cout << "\n\n\t\t Basic calculator \n\n";

    int num1, num2;
    char operation;
    char doAgain;

    do
    {

        cout << "Enter the operation you wanna perform\n +  -  *  /";
        cin >> operation;

        while (!(operation == '+' || operation == '-' || operation == '*' || operation == '/'))
        {
            cout << "\nInvalid operator selected.";
            cout << "\nEnter only + , - , * , / \n";
            cin >> operation;
        }

        cout << "\nEnter two operands : ";
        cin >> num1 >> num2;

        calculator test1;
        test1.set_num1(num1);
        test1.set_num2(num2);

        switch (operation)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << test1.sum();
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << test1.subract();
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << test1.multiply();
            break;

        case '/':
            cout << setprecision(2) << fixed;
            cout << num1 << " / " << num2 << " = " << test1.divide();
            break;

        default:
            cout << "Invalid option selected";
            break;
        }

        cout << "\n\nDou you wanna do again?(Y/N)";
        cin >> doAgain;

        while (!(doAgain == 'Y' || doAgain == 'y' || doAgain == 'N' || doAgain == 'n'))
        {
            cout << "\nInvalid input. Enter (Y/N) only : ";
            cin >> doAgain;
        }


    } while (doAgain == 'y' || doAgain == 'Y');

    return 0;
}