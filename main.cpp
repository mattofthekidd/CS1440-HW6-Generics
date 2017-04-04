#include <iostream>
#include <string>
#include "Dictionary.hpp"
#include "KeyValue.hpp"

int main() {
    Dictionary<std::string, std::string> myDictionary;

    myDictionary.add("Hair color", "Blonde");
    myDictionary.add("Eye color", "Blue");
    myDictionary.add("Favorite Movie", "Rogue One");
    myDictionary.add("Favorite Food","Pizza");
    myDictionary.add("Favorite Class", "Lunch");
    std::cout << "\nPrint added values.\n";
    myDictionary.printDict();
    myDictionary.removeByIndex(1);
    std::cout << "\nRemoved the first value.\n";
    myDictionary.printDict();
    std::cout << "\nHello, World!" << std::endl;
    return 0;
}