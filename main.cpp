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
    string n;
    int m;
    string t;
    string l;
    bool f;
    cout << "enter a name for the resturant" << endl;
    cin >> n;
    cout << "enter a max capacity for the resturant" << endl;
    while(!(cin >> m)) {
        cin.clear();
        cout << "enter an integer for max cap" << endl;
    }
    
    cout << "enter a type of cuisine for the resturant" << endl;
    cin >> t;
    cout << "decide whether it is currently full(1=full/0)" << endl;
    cin >> f;
    return one;
}

int main() {
    Resturant first = temp();
    return 0;
}