// COMSC-210 | Lab 3A | Alexander Sierra
#include <iostream>
using namespace std;

struct Resturant {
    string name;
    int maxCapacity;
    string typeOfCuisine;
    string location;
    bool full;
};

Resturant temp() {
    Resturant one;
    int m;

    cout << "enter a name for the resturant" << endl;
    cin >> one.name;

    cout << "enter a max capacity" << endl;
    cin >> m;
    while(m<=0) {
        cout << "enter a valid max capacity" << endl;
        cin >> m;
    }
    one.maxCapacity = m;

    cout << "enter a type of cuisine" << endl;
    cin >> one.typeOfCuisine;

    cout << "enter a location" << endl;

    cout << "Is it currently full? (1/0) 1=full" << endl;
    cin >> one.full;

    return one;
}

int main() {
    Resturant first = temp();
    return 0;
}