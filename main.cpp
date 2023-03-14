#include <iostream>
#include <vector>
#include <deque>

template <class RandomAccessIterator>
void print(RandomAccessIterator b, RandomAccessIterator e) {
    for (auto iter = b; iter != e; ++iter)
        std::cout << *iter << ' ';
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec;
    for (int i = 0; i < 10; ++ i)
        vec.push_back(i * i);
    print(vec.begin(), vec.end());
    
    std::deque<int> heap;
    for (auto iter = vec.begin(); iter != vec.end(); ++iter)
        heap.push_back(*iter);
    print(heap.begin(), heap.end());

    return 0;
}
