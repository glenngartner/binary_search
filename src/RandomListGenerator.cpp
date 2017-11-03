//
// Created by g on 10/27/17.
//

#include <c++/cstdlib>
#include <algorithm>
#include "../include/RandomListGenerator.h"

RandomListGenerator::RandomListGenerator(int numOfListEntries, int min, int max) {
    this->list = {};
    for (int i = 0; i < numOfListEntries; i++){
        this->list.push_back(this->returnRandomIntInRange(min, max));
    }
    std::sort(this->list.begin(), this->list.end());
}

int RandomListGenerator::returnRandomIntInRange(int min, int max) {
    // generate a random number, and return it
    int range = max - min + 1;
    return std::rand() % range + min;
}
