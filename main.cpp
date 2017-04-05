#include <iostream>
#include <sstream>
#include <string>
#include "Dictionary.hpp"
#include "KeyValue.hpp"
#include "Menu.hpp"


int main() {
typedef Dictionary<std::string, std::string> dict;
    dict *myDictionary;
    int input = 0;
    std::cout << "Welcome to the Dictionary App.";
    do {
        std::cout << "\n\nPlease specify a size for the Dictionary: ";
        std::cin >> input;
    } while(input < 0);
    if(input == 0) {
        std::cout << "Size was set to 0, we will auto allocate the size.\n";
        myDictionary = new dict();
    }
    else {
        myDictionary = new dict(input);
    }

    Menu menu(myDictionary);
    menu.listOptions();
    return 0;
}