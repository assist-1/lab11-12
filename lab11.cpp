#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    std::cout << "Enter some integers (enter 0 to stop): ";
    int input;
    while (std::cin >> input && input != 0) {
        numbers.push_back(input);
    }

    std::cout << "Numbers in reverse order:" << std::endl;
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}