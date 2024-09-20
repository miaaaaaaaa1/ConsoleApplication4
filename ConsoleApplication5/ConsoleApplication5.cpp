#include <iostream>
using namespace std;

int main(){
        //завдання 1
        int a, sum = 0;

        cout << "Enter an integer a (initial value): ";
        cin >> a;

        if (a > 500) {
            cout << "The number a is greater than 500. The sum is not calculated." << endl;
            return 1;
        }
        for (int i = a; i <= 500; ++i) {
            sum += i;
        }
        cout << "Sum of integers from " << a << " to 500: " << sum << endl;

        //завдання 2

        int x, y;
        double result = 1;

        cout << "Enter the number x: " << endl;
        cin >> x;

        cout << "Enter the number y (degree): " << endl;
        cin >> y;

        for (int i = 0; i < y; ++i) {
            result *= x;
        }

        cout << x << "in degree" << y << " = " << result << endl;

        //завдання 3

        int n = 1000; 
        int sum = (n * (n + 1)) / 2;
        double average = static_cast<double>(sum); 

        cout << "Arithmetic average of all integers from 1 to 1000: " << average << endl;

        //завдання 4

        int a;
        double product = 1;

        cout << "Enter the number a (1 <= a <= 20): ";
        cin >> a;

        if (a < 1 || a > 20) {
            cout << "Error: a must be between 1 and 20." << endl;
            return 1;
        }

        for (int i = a; i <= 20; ++i) {
            product *= i;
        }

        cout << "The product of all integers from " << a << " to 20: " << product << endl;

        //завдання 5

        int k;

        cout << "Enter the option number (number k): ";
        cin >> k;

        cout << "Table of multiplication by " << k << ": " << endl;
        for (int i = 2; i <= 10; ++i) {
            cout << k << " x " << i << " = " << k * i << endl;
        }
    }


