#include <iostream>
#include <vector>

int main() {
    std::cout << "Type numbers separating them with spaces. To finish typing push Enter.\n";
    std::vector<int> numbers;
    int n;
    noskipws(std::cin);
    while (std::cin >> n) {
        numbers.push_back(n);
        while(std::cin.peek() == ' '){
            std::cin.get();
        }
        if (std::cin.peek() == '\n') {
            break;
        }
        else if((std::cin.peek() < '0' || std::cin.peek() > '9') && std::cin.peek() != '-'){
            std::cerr << "Error: unexpected symbol.\n";
            exit(EXIT_FAILURE);
        }

    }

    std::cout << "Your numbers in reverse order:\n";
    std::vector<int>::reverse_iterator i;
    for (i = numbers.rbegin(); i != numbers.rend(); i++) {
        std::cout << *i << ' ';
    }

    return 0;
}
