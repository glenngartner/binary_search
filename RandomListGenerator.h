//
// Created by g on 10/27/17.
//

#ifndef BINARY_SEARCH_RANDOMLISTGENERATOR_H
#define BINARY_SEARCH_RANDOMLISTGENERATOR_H


#include <vector>

class RandomListGenerator {
public:
    RandomListGenerator(int numOfListEntries);
    std::vector<int> list;
private:
    unsigned int returnRandomPositiveInt();
};


#endif //BINARY_SEARCH_RANDOMLISTGENERATOR_H
