#include <iostream>
#include <iterator>
#include <vector>


int main() {
    std::cout << "Input the size of list with integer values" << std::endl;
    int num;
    std::cin >> num;
    std::cout << "Input the list with integer values" << std::endl;
    std::vector<int> v;
    int j;
    for (int i = 0; i < num; ++i) {
        std::cin >> j;
        v.push_back(j);
    }
    for (std::vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it) {
        std::cout << *it << " ";
    } 
    std::cout << std::endl;
    return 0;
}