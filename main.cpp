#include <iostream>

using namespace std;

int main() {
    int value1, value2, value3;

    cout << "Enter first number: ";
    cin >> value1;

    cout << "Enter second number: ";
    cin >> value2;

    cout << "Enter third number: ";
    cin >> value3;

    //pointers to dynamic memory
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // assign values to dynamically allocated memory
    *ptr1 = value1;
    *ptr2 = value2;
    *ptr3 = value3;

    cout << "Value1: " << value1 << ", Pointer1 points to: " << *ptr1 << endl;
    cout << "Value2: " << value2 << ", Pointer2 points to: " << *ptr2 << endl;
    cout << "Value3: " << value3 << ", Pointer3 points to: " << *ptr3 << endl;

    // free memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
