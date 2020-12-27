#include <iostream>

using namespace std;

int main() {

    int number_dogs = 5;
    int number_cats = 4;

    cout << "number of dogs: " << number_dogs << endl;
    cout << "number of cats: " << number_cats << endl;

    cout << "total number of pets: " << number_cats + number_dogs << endl;

    cout << "new dog added!" << endl;

    number_dogs = number_dogs + 1;

    cout << "now, number of dogs is: " << number_dogs << endl;
    cout << "so, total number of pets: " << number_dogs + number_cats << endl;

    

    return 0;
}