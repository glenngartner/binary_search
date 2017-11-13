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

//    if (index == -1) {
//        std::printf("value %d was not found in the list", searchFor);
//    } else {
//        std::printf("found %d at index %d", searchFor, index);
//    }
    std::cin >> input;
    return 0;
}