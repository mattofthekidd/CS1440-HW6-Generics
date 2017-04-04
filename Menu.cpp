//
// Created by Matthew Kidd on 4/4/17.
//

#include "Menu.hpp"
#include "Dictionary.hpp"

Menu::Menu(Dictionary<std::string, std::string>& dict) :
        m_dictionary(&dict),
        m_quit(false)
{
    std::cout << "debug\n";
    m_dictionary->add("Hair color", "Blonde");
    m_dictionary->add("Eye color", "Blue");
    m_dictionary->add("Favorite Movie", "Rogue One");
    m_dictionary->add("Favorite Food","Pizza");
    m_dictionary->add("Favorite Class", "Lunch");
    std::cout << "debug\n";
    listOptions();
}

void Menu::listOptions() {
    int input = 0, i = 0;
    std::string word = "";
    std::string keyValue = "";
    do {
        std::cout << "1. Add Record\n"
                  << "2. Get Count\n"
                  << "3. Get Value by Index #\n"
                  << "4. Get Value by Key Value\n"
                  << "5. Remove by Index\n"
                  << "6. Remove by Key Value\n"
                  << "0. Quit\n"
                  << "enter choice (0-6): ";
        std::cin >> input;
    } while(input > 6 && input < 0);

    while(!m_quit) {
        switch (input) {
            case Add:
                std::cout << "Please enter a key value: ";
                std::getline(std::cin, keyValue, '\n');
                std::cout << "Please enter a word: ";
                std::getline(std::cin, word, '\n');
                m_dictionary->add(keyValue, word);
                break;
            case Count:
            std::cout << "Current count: " << m_dictionary->getCount() << std::endl;
                break;
            case getNthByIndex:
                break;
            case getNthByKey:
                keyValue = "";
                i = 0;
                do {
                    i++;
                    std::cout << "Please enter the key value to search for: ";
                    std::getline(std::cin, keyValue, '\n');
                    word = m_dictionary->getByKey(keyValue);
                } while(word == "not_found" || i < 4);
                if(word != "not_found") {
                    std::cout << word << std::endl;
                }
                else {
                    std::cout << "You have exceeded maximum attempts (3). Exiting loop.\n";
                }
                break;
            case removeByIndex:
                input = 0;
                do {
                    std::cout << "Please enter a value from 0 - " << m_dictionary->getCount() << " : ";
                    std::cin >> input;
                } while(input < 0 && input > m_dictionary->getCount());
                m_dictionary->removeByIndex(input);
                break;
            case removeByKey:
                break;
            case Quit:
                m_quit = true;
                break;
            default:break;
        }
    }

}

void Menu::addRecord() {

}

void Menu::removeRecord(int x) {

}

//
//• Add new key/value pairs
//• Get the count of key/value pairs in the dictionary
//• Get the nth key/value pair
//• Look up and get a key/value pair using a key
//• Remove a key/value pair, using either an index or key