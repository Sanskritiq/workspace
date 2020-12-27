#include <iostream>
#include <limits>
using namespace std;

int main() {

    long long int value = 3435848575848575;
    cout << value << endl;

    cout << "maximum value of integer: " << INT_MAX << endl;
    cout << "minimum value of integer: " << INT_MIN << endl;
    
    unsigned int uValue = -4;
    cout <<  uValue << endl;

    cout << "size of value is " << sizeof(value) << endl;
    cout << "size of uValue is: " << sizeof(uValue) << endl;

    return 0;


}