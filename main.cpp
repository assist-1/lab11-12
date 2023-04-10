#include <iostream>
#include <list>
#include <iterator>

int main() {
    std::list<int> data {1, 2, 3, 4, 5};

    std::inserter(data, data.end()) = 6;
    std::back_inserter(data) = 7;
    std::front_inserter(data) = 0;

    for (auto data_it = data.begin(); data_it != data.end(); data_it++) {
        std::cout << *data_it << " ";
    }
    std::cout << std::endl;
}
