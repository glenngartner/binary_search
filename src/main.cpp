#include <iostream>
#include <memory>
#include "../include/RandomListGenerator.h"

int main() {
    char input;
    int listLength = 100;
    int min = 0;
    int max = 100;
    std::shared_ptr<RandomListGenerator> newRandGen = std::make_shared<RandomListGenerator>(listLength, min, max);
    for (int i = 0; i < listLength; i++){
        std::cout << "Random number from list:" << newRandGen->list[i] << std::endl;
    }
    std::cin >> input;
    return 0;
}