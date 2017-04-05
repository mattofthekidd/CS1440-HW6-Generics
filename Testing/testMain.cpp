//
// Created by Matthew Kidd on 4/5/17.
//

#include <iostream>
#include "../Dictionary.hpp"
#include "DictionaryTester.hpp"

typedef Dictionary<std::string, std::string> dict;
int main() {
    std::cout << "Execute test cases\n";
    DictionaryTester dictionaryTester;
    dictionaryTester.testAdd();
    dictionaryTester.testGetters();
    dictionaryTester.testRemoves();
    return 0;
}
