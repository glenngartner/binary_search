//
// Created by g on 11/12/17.
//

#ifndef BINARY_SEARCH_BINARYSEARCH_H
#define BINARY_SEARCH_BINARYSEARCH_H

#include <vector>
#include <memory>

class BinarySearch {
public:
    std::vector<int> *list;

    BinarySearch(std::vector<int> &list);

    int iterative(int valueToFind);

    void printResult(int searchedFor, int indexReturned);

};


#endif //BINARY_SEARCH_BINARYSEARCH_H
