//
// Created by Matthew Kidd on 4/4/17.
//

#ifndef HW6_GENERICS_MENU_HPP
#define HW6_GENERICS_MENU_HPP

#include <iostream>
#include "Dictionary.hpp"

class Menu {
public:
    Menu(Dictionary<std::string, std::string>&);

    void listOptions();

    void addRecord();

    void removeRecord(int x);

private:
    Dictionary<std::string, std::string> *m_dictionary;
    bool m_quit;
    enum m_menuOptions {Add = 1, Count = 2, getNthByIndex = 3, getNthByKey = 4, removeByIndex = 5, removeByKey = 6, Quit = 0};
};

//Menu::Menu(Dictionary<std::string, std::string>& dict) :
//        m_dictionary(&dict),
//        m_quit(false)
//{
//    std::cout << "debug\n";
//    m_dictionary->add("Hair color", "Blonde");
//    m_dictionary->add("Eye color", "Blue");
//    m_dictionary->add("Favorite Movie", "Rogue One");
//    m_dictionary->add("Favorite Food","Pizza");
//    m_dictionary->add("Favorite Class", "Lunch");
//    std::cout << "debug\n";
//    listOptions();
//}

#endif //HW6_GENERICS_MENU_HPP
