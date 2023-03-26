#include <iostream>
#include <vector>

int main() {
    int a, size;
    std::cin >> size;
    std::cout << "Enter the values for the list: ";
    std::vector<int> val(size);
    for(auto i = val.begin(); i != val.end(); ++i) {
        std::cin >> a;
        *i = a;
    }
    std::cout << std::endl << "Reversed list: ";
    for(std::vector <int>::reverse_iterator i = val.rbegin(); i != val.rend(); ++i) {
        std::cout << *i << " ";
    }
    return 0;
}
