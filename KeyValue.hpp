//
// Created by Matthew Kidd on 4/3/17.
//

#ifndef HW6_GENERICS_KEYVALUE_HPP
#define HW6_GENERICS_KEYVALUE_HPP
#include <string>
#include <vector>
#include <iostream>
template <typename T> class KeyValueTester;
template <typename T> std::ostream& operator<<(std::ostream& os, const KeyValueTester<T>& x);

template <typename T>
class KeyValueTester {
public:
    KeyValueTester(T, std::string);
    std::string getKeyValue() const { return m_keyValue; }
    std::string getWordByIndex(int n) const;
    int getCount() const;
    void addWord(const std::string&);
    friend std::ostream& operator<< <T>(std::ostream&, const KeyValueTester<T>&);

protected:
    T m_keyValue;
    std::vector<T> m_words;
};

template <typename T>
KeyValueTester<T>::KeyValueTester(T t, std::string word) :
m_keyValue(t)
{
    m_words.push_back(word);
}

template <typename T>
std::string KeyValueTester<T>::getWordByIndex(int n) const {
    return m_words.at(n);
}

template <typename T>
void KeyValueTester<T>::addWord(const std::string& x) {
    m_words.push_back(x);
}

template <typename T>
int KeyValueTester<T>::getCount() const {
    return m_words.size();
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const KeyValueTester<T>& x) {
    for(auto i = 0; i < x.m_words.size(); i++) {
        os << x.m_keyValue + ", ";
        os << x.m_words[i];
    }
    return os;
}



#endif //HW6_GENERICS_KEYVALUE_HPP
