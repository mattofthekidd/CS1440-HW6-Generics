//
// Created by Matthew Kidd on 4/5/17.
//

#include "DictionaryTester.hpp"

void DictionaryTester::testAdd() {
    std::cout << "Test Add and Constructors.\n";
    //test default constructor
    dict aDictionary;
    aDictionary.add("Hair color", "Blonde");
    aDictionary.add("Eye color", "Blue");
    aDictionary.add("Favorite Movie", "Rogue One");
    aDictionary.add("Favorite Food", "Pizza");
    aDictionary.add("Favorite Class", "Lunch");

    if (aDictionary.getCount() != 5) {
        std::cout << "Error, add failed.\n";
    }
    if(aDictionary.getCapacity() != 10) {
        std::cout << "Error, capacity is wrong.\n";
    }

    //test overloaded constructor
    dict bDictionary(5);
    if (bDictionary.getCapacity() != 5) {
        std::cout << "Error, overloaded constructor for Dictionary failed.\n";
    }
    bDictionary.add("0 Hair color", "Blonde");
    bDictionary.add("0 Eye color", "Blue");
    bDictionary.add("0 Favorite Movie", "Rogue One");
    bDictionary.add("0 Favorite Food", "Pizza");
    bDictionary.add("0 Favorite Class", "Lunch");

    bDictionary.add("1 Hair color", "Blonde");
    bDictionary.add("1 Eye color", "Blue");
    bDictionary.add("1 Favorite Movie", "Rogue One");
    bDictionary.add("1 Favorite Food", "Pizza");
    bDictionary.add("1 Favorite Class", "Lunch");

    bDictionary.add("2 Hair color", "Blonde");
    bDictionary.add("2 Eye color", "Blue");
    bDictionary.add("2 Favorite Movie", "Rogue One");
    bDictionary.add("2 Favorite Food", "Pizza");
    bDictionary.add("2 Favorite Class", "Lunch");

    if (bDictionary.getCount() != 15) {
        std::cout << "Error, add failed.\n";
    }
    if(bDictionary.getCapacity() != 20) {
        std::cout << "Error, capacity is wrong.\n";
    }
}

void DictionaryTester::testGetters() {
    std::cout << "Test Getters.\n";
    dict myDictionary = initDictionary();

    { //test get by index value
        if (myDictionary.getByIndex(0) != "Hair color, Blonde") {
            std::cout << "error\n";
        }
        if (myDictionary.getByIndex(1) != "Eye color, Blue") {
            std::cout << "error\n";
        }
        if (myDictionary.getByIndex(2) != "Favorite Movie, Rogue One") {
            std::cout << "error\n";
        }
        if (myDictionary.getByIndex(3) != "Favorite Food, Pizza") {
            std::cout << "error\n";
        }
        if (myDictionary.getByIndex(4) != "Favorite Class, Lunch") {
            std::cout << "error\n";
        }
    }
    { //test get by key value
        if (myDictionary.getByKey("Hair color") != "Blonde") {
            std::cout << "error\n";
        }
        if (myDictionary.getByKey("Eye color") != "Blue") {
            std::cout << "error\n";
        }
        if (myDictionary.getByKey("Favorite Movie") != "Rogue One") {
            std::cout << "error\n";
        }
        if (myDictionary.getByKey("Favorite Food") != "Pizza") {
            std::cout << "error\n";
        }
        if (myDictionary.getByKey("Favorite Class") != "Lunch") {
            std::cout << "error\n";
        }
    }
}

void DictionaryTester::testRemoves() {
    std::cout << "Test Removes.\n";
    dict myDictionary = initDictionary();
    //test remove by index value
    for(int i = 4; i >= 0; i--) {
        myDictionary.removeByIndex(i);
        if(myDictionary.getCount() != i) { std::cout << i << " error\n"; }

    }

    myDictionary = initDictionary();
    //test remove by key value
    myDictionary.removeByKey("Hair color");
    if(myDictionary.getCount() != 4) { std::cout << "error\n"; }

    myDictionary.removeByKey("Eye color");
    if(myDictionary.getCount() != 3) { std::cout << "error\n"; }

    myDictionary.removeByKey("Favorite Movie");
    if(myDictionary.getCount() != 2) { std::cout << "error\n"; }

    myDictionary.removeByKey("Favorite Food");
    if(myDictionary.getCount() != 1) { std::cout << "error\n"; }

    myDictionary.removeByKey("Favorite Class");
    if(myDictionary.getCount() != 0) { std::cout << "error\n"; }
}

dict DictionaryTester::initDictionary() {
    dict myDictionary;
    myDictionary.add("Hair color", "Blonde");
    myDictionary.add("Eye color", "Blue");
    myDictionary.add("Favorite Movie", "Rogue One");
    myDictionary.add("Favorite Food", "Pizza");
    myDictionary.add("Favorite Class", "Lunch");

    return myDictionary;
}
