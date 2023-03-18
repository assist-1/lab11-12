#include <iostream>
#include <iterator>
#include <list>

std::list<int> iter_adaptor() {

    std::list<int> mas1 = {3, 2, 1};
    std::list<int> mas2 = {7, 8, 9};
    std::list<int> mas3 {4, 5, 6};
    
    std::list<int> mas;
    std::copy(mas1.begin(), mas1.end(), std::front_inserter(mas));
    std::copy(mas2.begin(), mas2.end(), std::back_inserter(mas));
    std::copy(mas3.begin(), mas3.end(), std::inserter(mas, std::next(mas.begin(), 3)));

    return mas;
}

int main() {

    std::list<int> ans = iter_adaptor();
    
    std::list<int> :: iterator it = ans.begin();

    for (it; it != ans.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}