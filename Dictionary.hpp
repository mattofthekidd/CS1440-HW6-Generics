//
// Created by Matthew Kidd on 4/3/17.
//

#ifndef HW6_GENERICS_DICTIONARY_HPP
#define HW6_GENERICS_DICTIONARY_HPP
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
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
    void removeByKey(const K& k);
    std::string getByIndex(int n) const;
    std::string getByKey(const K&) const;
private:
    int m_count;
    std::vector< KeyValueTester<K> > m_list;
    bool isEqual(const K& lhs, const K& rhs)const;
    bool isValid(int n);
    bool isValid();
    void determineSize();
};

template <typename K, typename W>
Dictionary<K, W>::Dictionary() {
    m_list.reserve(10);
}

template <typename K, typename W>
Dictionary<K, W>::Dictionary(int n) {
    m_list.reserve(n);
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
            KeyValueTester<K> temp(keyValue, word);
            m_list.push_back(temp);
        } else {
            m_list[pos].addWord(word);
        }
    }
    else {
        KeyValueTester<K> temp(keyValue, word);
        m_list.push_back(temp);
    }
};

template<typename K, typename W>
void Dictionary<K, W>::printDict() const {
    for(auto i = 0; i < m_list.size(); i++) {
        std::cout << i+1 << ". " << m_list[i] << std::endl;
    }
}

template<typename K, typename W>
void Dictionary<K, W>::removeByIndex(int n) {
    if(isValid(n)) {
        m_list.erase(m_list.begin()+(n-1));
    }
}

template<typename K, typename W>
void Dictionary<K, W>::removeByKey(const K &k) {
    for(auto i = 0; i < m_list.size(); i++) {
        if(isEqual(m_list[i].getKeyValue(), k)) {
            m_list.erase(m_list.begin()+(i));
        }
    }
};

template<typename K, typename W>
bool Dictionary<K, W>::isValid(int n) {
    return (m_list.size() > n && n > 0);
}

template<typename K, typename W>
bool Dictionary<K, W>::isValid() {
    return (m_list.size() > 0);
}

//returns total keyValues
template<typename K, typename W>
int Dictionary<K, W>::getCount() const {

    return m_list.size();
}

template<typename K, typename W>
std::string Dictionary<K, W>::getByKey(const K& k) const {
    std::ostringstream os;
    bool found = false;
    for(auto i = 0; i < m_list.size(); i++) {
        if(isEqual(m_list[i].getKeyValue(), k)) {
            for(auto j = 0; j < m_list[i].getCount(); j++) {
                os << m_list[i].getWordByIndex(j) << "\n";

                found = true;
            }
        }
    }
    if(!found) {
        return "not_found";
    }
    return os.str();
}

template<typename K, typename W>
std::string Dictionary<K, W>::getByIndex(int n) const {
    std::string temp = m_list[n].getKeyValue();
    return temp + ", " + getByKey(temp);
}

template<typename K, typename W>
bool Dictionary<K, W>::isEqual(const K& lhs, const K& rhs)const {
    std::string tempLeft = lhs, tempRight = rhs;
    std::transform(tempLeft.begin(), tempLeft.end(), tempLeft.begin(), ::tolower);
    std::transform(tempRight.begin(), tempRight.end(), tempRight.begin(), ::tolower);
    return (tempLeft == tempRight);
}

template<typename K, typename W>
void Dictionary<K, W>::determineSize() {
    int temp = m_count;
    for(auto i = 0; i < m_list.size(); i++) {
        if(m_list[i].size() > 1) {
            temp += m_list[i].size();
        }
    }
}


#endif //HW6_GENERICS_DICTIONARY_HPP
