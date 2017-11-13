#include <iostream>
#include <memory>
#include "../include/RandomListGenerator.h"
#include "../include/BinarySearch.h"

int main() {
    char input;
    int listLength = 10;
    int min = 0;
    int max = 200;
    std::shared_ptr<RandomListGenerator> newRandGen = std::make_shared<RandomListGenerator>(listLength, min, max);
    newRandGen->printList();

    std::shared_ptr<BinarySearch> newSearch = std::make_shared<BinarySearch>(newRandGen->list);

    int searchFor = 18;
    int index = newSearch->iterative(searchFor);
    newSearch->printResult(searchFor, index);

    searchFor = (*newSearch->list)[2];
    index = newSearch->iterative(searchFor);
    newSearch->printResult(searchFor, index);

    searchFor = 32;
    index = newSearch->recursive(searchFor, min, newSearch->list->size() - 1);
    newSearch->printResult(searchFor, index);

    searchFor = 155;
    index = newSearch->recursive(searchFor, min, newSearch->list->size() - 1);
    newSearch->printResult(searchFor, index);

    std::printf("\nType any key to exit> \n");
    std::cin >> input;
    return 0;
}