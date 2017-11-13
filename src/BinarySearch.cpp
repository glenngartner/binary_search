//
// Created by g on 11/12/17.
//

#include "../include/BinarySearch.h"

BinarySearch::BinarySearch(std::vector<int> &list) {

    this->list = &list;

}

int BinarySearch::iterative(int valueToFind) {

    int low = 0;
    int high = this->list->size() - 1;
    int mid = -1;

    while (low <= high) {
        mid = (low + high) / 2;

        if ((*this->list)[mid] > valueToFind) {
            high = mid - 1;
        } else if ((*this->list)[mid] < valueToFind) {
            low = mid + 1;
        } else {
            return mid;
        }
    }

    return -1;
}

void BinarySearch::printResult(int searchedFor, int indexReturned) {

    if (indexReturned == -1) {
        std::printf("\nValue %d was not found in the list\n", searchedFor);
    } else {
        std::printf("\nValue %d was found at index %d\n", searchedFor, indexReturned);
    }
}


