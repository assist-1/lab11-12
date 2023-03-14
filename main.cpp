#include <iostream>
#include <list>
#include <algorithm>
int main() {
    std::list<int> numbers;
    std::cout << "Enter the number of values:" << std::endl;
    int n;
    std::cin >> n;
    std::cout << "Enter the values:" << std::endl;
    for(int i = 0; i < n; i++) {
        int value;
        std::cin >> value;
        numbers.push_back(value);
    }
    // Using "for_each" for output elements
    std::for_each(numbers.begin(), numbers.end(), [](int &a){std::cout << a << "  ";});
    std::cout << std::endl;

    // Using "transform" for copy and transform elements from first list
    std::list <int> another(numbers.size());
    std::transform(numbers.begin(), numbers.end(), another.begin(), [](int &a){return a*a;});
    std::for_each(another.begin(), another.end(), [](int &a){std::cout << a << "  ";});
    std::cout << std::endl;

    // Using "any_of"
    std::cout << "List have even number: " << std::any_of(numbers.begin(), numbers.end(), [](int &a){return a % 2 == 0;}) << std::endl;
    // Using "all_of"
    std::cout << "List have positive numbers only: " << std::all_of(numbers.begin(), numbers.end(), [](int &a){return a > 0;}) << std::endl;

    //Using "count"
    std::cout << "Count of \"1\": " << std::count(numbers.begin(), numbers.end(), 1) << std::endl;

    //Using "sort"
    std::transform(numbers.begin(), numbers.end(), another.begin(), [](int &a){return a;});
    another.sort();
    std::for_each(another.begin(), another.end(), [](int &a){std::cout << a << " ";});
    std::cout << std::endl;

    //Using "binary_search"
    std::cout << "Number \"2\" in list: " << std::binary_search(another.begin(), another.end(), 2) << std::endl;

    return 0;
}