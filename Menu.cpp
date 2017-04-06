//
// Created by Matthew Kidd on 4/4/17.
//

#include "Menu.hpp"
#include "Dictionary.hpp"

Menu::Menu(Dictionary<std::string, std::string> *dictionary) :
        m_dictionary(dictionary) {
};

void Menu::listOptions() {
    int input = 0, i = 0;
    bool cont = false;
    std::string word = "";
    std::string keyValue = "";
    while (!cont) {
        do {
            std::cout << "\n1. Add Record\n"
                      << "2. Get Count\n"
                      << "3. Get Value by Index #\n"
                      << "4. Get Value by Key Value\n"
                      << "5. Remove by Index #\n"
                      << "6. Remove by Key Value\n"
                      << "7. Print Entire Dictionary\n"
                      << "0. Quit\n"
                      << "--Enter Choice (0-7): ";
            std::cin >> input;
            std::cin.ignore();
            std::cout << "\n";
        } while (input > 7 && input < 0);

        switch (input) {
            case Add:
                std::cout << "Please enter a key value: ";
                std::getline(std::cin, keyValue);
                std::cout << "Please enter a word: ";
                std::getline(std::cin, word);
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
                } while (!isValid(input));
                std::cout << m_dictionary->getByIndex(input) << std::endl;
                break;
            case getNthByKey:
                keyValue = "";
                    std::cout << "Please enter the key value to search for: ";
                    std::getline(std::cin, keyValue);
                    word = m_dictionary->getByKey(keyValue);
                if (word == "not_found") {
                    std::cout << "Error! Could not find: " << keyValue << std::endl;
                }
                else {
                    std::cout << keyValue << ", " << word << std::endl;
                }
                break;
            case removeByIndex:
                input = 0;
                do {
                    std::cout << "Please enter a value from 0 - " << m_dictionary->getCount() << " : ";
                    std::cin >> input;
                } while (input < 0 && input > m_dictionary->getCount());
                m_dictionary->removeByIndex(input);
                break;
            case removeByKey:
                std::cout << "Please enter the key value you wish to delete.\n"
                          << "(Warning, this will also delete all words associated with it!)\n"
                          << "choice: ";
                std::getline(std::cin, keyValue);
                try{ m_dictionary->removeByKey(keyValue); }
                catch(std::exception){
                    std::cout << "Could not delete key/pair.\n";
                }
                break;
            case printAll:
                m_dictionary->printDict();
                break;
            case Quit:
                std::cout << "Quitting\n";
                cont = true;
                delete m_dictionary;
                break;
            default:
                break;
        }
    }

}


Menu::Menu() {
}

//Check that n is within scope of the vector of key values
bool Menu::isValid(int n) {
    return (n <= m_dictionary->getCount() && n >= 0);
}
