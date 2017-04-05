//
// Created by Matthew Kidd on 4/4/17.
//

#include "Menu.hpp"
#include "Dictionary.hpp"

Menu::Menu(Dictionary<std::string, std::string>* dictionary) :
        m_dictionary(dictionary)
{
    std::cout << "Initializing with default key values and words.\n";
    m_dictionary->add("Hair color", "Blonde");
    m_dictionary->add("Eye color", "Blue");
    m_dictionary->add("Favorite Movie", "Rogue One");
    m_dictionary->add("Favorite Food","Pizza");
    m_dictionary->add("Favorite Class", "Lunch");
    listOptions();
};

void Menu::listOptions() {
    int input = 0, i = 0;
    bool cont = false;
    std::string word = "";
    std::string keyValue = "";
    while(!cont) {
    do {
        std::cout << "1. Add Record\n"
                  << "2. Get Count\n"
                  << "3. Get Value by Index #\n"
                  << "4. Get Value by Key Value\n"
                  << "5. Remove by Index #\n"
                  << "6. Remove by Key Value\n"
                  << "7. Print entire dictionary\n"
                  << "0. Quit\n"
                  << "enter choice (0-7): ";
        std::cin >> input;
        std::cout << "\n";
    } while(input > 7 && input < 0);

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
                input = 0;
                do {
                    std::cout << "Enter a integer value(1-" << m_dictionary->getCount() << "): ";
                    std::cin >> input;
                    input--;
                } while(!isValid(input));
                std::cout << m_dictionary->getByIndex(input) << std::endl;
                break;
            case getNthByKey:
                keyValue = "";
                i = 0;
                do {
                    i++;
                    std::cout << "Please enter the key value to search for: ";
                    std::getline(std::cin, keyValue, '\n');
                    word = m_dictionary->getByKey(keyValue);
                    if(i == 3) {
                        std::cout << "You have exceeded maximum attempts (3). Exiting loop.\n";
                        break;
                    }
                } while(word == "not_found");
                if(word != "not_found") {
                    std::cout << word << std::endl;
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
            case printAll:
                m_dictionary->printDict();
                break;
            case Quit:
                std::cout << "Quitting\n";
                cont = true;
                break;
            default:break;
        }
    }

}

void Menu::addRecord() {

}

void Menu::removeRecord(int x) {

}

Menu::Menu() {
    std::cout << "debug\n";
    m_dictionary->add("Hair color", "Blonde");
    m_dictionary->add("Eye color", "Blue");
    m_dictionary->add("Favorite Movie", "Rogue One");
    m_dictionary->add("Favorite Food","Pizza");
    m_dictionary->add("Favorite Class", "Lunch");
    std::cout << "debug\n";
    listOptions();
}

//Check that n is within scope of the vector of key values
bool Menu::isValid(int n) {
    return (n <= m_dictionary->getCount() && n >= 0);
}

//
//• Add new key/value pairs
//• Get the count of key/value pairs in the dictionary
//• Get the nth key/value pair
//• Look up and get a key/value pair using a key
//• Remove a key/value pair, using either an index or key