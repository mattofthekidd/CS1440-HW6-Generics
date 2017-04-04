//
// Created by Matthew Kidd on 4/3/17.
//

#ifndef HW6_GENERICS_DICTIONARY_HPP
#define HW6_GENERICS_DICTIONARY_HPP
#include <string>
#include <vector>
#include <iostream>
#include "KeyValue.hpp"



template <typename K, typename W>
class Dictionary {
public:
    Dictionary();
    Dictionary(int n);
    int getCount() const;
    void add(K keyValue, W word);
    void printDict() const;
    void removeByIndex(int n);
private:
    int m_size;
    std::vector< KeyValue<K> > m_list;
    bool isValid(int n);
    bool isValid();
};

template <typename K, typename W>
Dictionary<K, W>::Dictionary() :
        m_size(10)
{
}

template <typename K, typename W>
Dictionary<K, W>::Dictionary(int n) :
        m_size(n)
{
};

template<typename K, typename W>
void Dictionary<K, W>::add(K keyValue, W word) {
    bool unique = true;
    int pos = 0;
    if(isValid()) {
        for (auto i = 0; i < m_list.size() - 1; i++) {
            if (m_list[i].getKeyValue() == keyValue) {
                unique = false;
                pos = i;
            }

        }
        if (unique) {
            KeyValue<K> temp(keyValue, word);
            m_list.push_back(temp);
        } else {
            m_list[pos].addWord(word);
        }
    }
    else {
        KeyValue<K> temp(keyValue, word);
        m_list.push_back(temp);
    }
};

template<typename K, typename W>
void Dictionary<K, W>::printDict() const {
    for(auto i = 0; i < m_list.size(); i++) {
        std::cout << m_list[i] << std::endl;
    }
}

template<typename K, typename W>
void Dictionary<K, W>::removeByIndex(int n) {
    if(isValid(n)) {
        m_list.erase(m_list.begin()+(n-1));
    }
}

template<typename K, typename W>
bool Dictionary<K, W>::isValid(int n) {
    return (m_list.size() > n);
}

template<typename K, typename W>
bool Dictionary<K, W>::isValid() {
    return (m_list.size() > 0);
}

int Dictionary::getCount() {
    return m_list.size();
};

#endif //HW6_GENERICS_DICTIONARY_HPP
