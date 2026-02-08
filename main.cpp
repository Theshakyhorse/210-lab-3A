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
    //checks if max cap is a number that makes sense
    while(m<=0) {
        cout << "enter a valid max capacity" << endl;
        cin >> m;
    }
    one.maxCapacity = m;

    cout << "enter a type of cuisine" << endl;
    cin >> one.typeOfCuisine;

    cout << "enter a location" << endl;
    cin >> one.location;

    cout << "Is it currently full? (1/0) 1=full" << endl;
    cin >> one.full;

    return one;
}

void Presenter(Resturant R) {
    cout << "Name: " << R.name << endl;
    cout << "Max capacity: " << R.maxCapacity << endl;
    cout << "Cuisine: " << R.typeOfCuisine << endl;
    cout << "Location " << R.location << endl;

    if (R.full) {
        cout << "The resturant is full" << endl;
    }
    else {
        cout << "The resturant is not full" << endl;
    }
}

int main() {
    cout << "First resturant:" << endl;
    Resturant first = temp();
    Presenter(first);

    cout << "Second resturant:" << endl;
    Resturant second = temp();
    Presenter(second);

    cout << "Third resturant:" << endl;
    Resturant third = temp();
    Presenter(third);

    cout << "Fourth resturant:" << endl;
    Resturant fourth = temp();
    Presenter(fourth);

    return 0;
}