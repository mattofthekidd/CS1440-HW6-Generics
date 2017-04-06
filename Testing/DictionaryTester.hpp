//
// Created by Matthew Kidd on 4/5/17.
//

#ifndef HW6_GENERICS_DICTIONARYTESTER_HPP
#define HW6_GENERICS_DICTIONARYTESTER_HPP


#include "../Dictionary.hpp"


typedef Dictionary<std::string, std::string> dict;

class DictionaryTester {
public:

    void testAdd();

    void testGetters();

    void testRemoves();

private:
    dict initDictionary();;
};


#endif //HW6_GENERICS_DICTIONARYTESTER_HPP
