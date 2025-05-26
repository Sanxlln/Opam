#include <iostream>
#include "list.hpp"

using namespace std;
using namespace blgt;

int main() {
    list myList;

    cout << "Adding values to the front: twenty-five, fifteen" << endl;
    myList.insert_front(25);
    myList.insert_front(15);

    cout << "Adding values to the back: thirty-five, forty-five" << endl;
    myList.insert_back(35);
    myList.insert_back(45);

    cout << "\nList contents:" << endl;
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "\nCurrent list size: " << myList.size() << endl;
    cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << endl;

    cout << "\nRemoving the first element..." << endl;
    myList.erase_front();

    cout << "Removing the last element..." << endl;
    myList.erase_back();

    cout << "\nAdding new value to the back: twenty-two" << endl;
    myList.insert_back(22);

    cout << "\nList contents after changes:" << endl;
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "\nFinal list size: " << myList.size() << endl;
    cout << "Is the list now empty? " << (myList.empty() ? "Yes" : "No") << endl;

    return 0;
}
