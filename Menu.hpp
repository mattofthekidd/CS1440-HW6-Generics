//
// Created by Matthew Kidd on 4/4/17.
//

#ifndef HW6_GENERICS_MENU_HPP
#define HW6_GENERICS_MENU_HPP

#include <iostream>
#include "Dictionary.hpp"

class Menu {
public:
    Menu();
    Menu(Dictionary<std::string, std::string>* dictionary);

    void listOptions();

    void addRecord();

    void removeRecord(int x);

    bool isValid(int n);

private:
    Dictionary<std::string, std::string> *m_dictionary = nullptr;
    enum m_menuOptions {
        Add = 1,
        Count = 2,
        getNthByIndex = 3,
        getNthByKey = 4,
        removeByIndex = 5,
        removeByKey = 6,
        printAll = 7,
        Quit = 0};
};

#endif //HW6_GENERICS_MENU_HPP
