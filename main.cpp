#include <iostream>
#include <vector>
#include <deque>

template <typename STL_container>
void print (STL_container container){
    for (auto iter = container.begin(); iter != container.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << "\n";
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr_from;
    std::deque<int> arr_to;

    for (int i = 0; i < n; ++i)
        arr_from.push_back(3*i + 1);
    print(arr_from);

    for (auto iter = arr_from.begin(); iter != arr_from.end(); ++iter){
        arr_to.push_back(*iter);
    }
    print(arr_to);

    return 0;
}
