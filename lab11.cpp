#include <iostream>
#include <vector>

int main(){
    int size;
    std::cin >> size;
    std::vector<int> v(size);
    for (std::vector<int>::iterator i = v.begin(); i < v.end(); ++i){
        std::cin >> *i;
    }
    for (std::vector<int>::iterator i = v.end() - 1; i >= v.begin(); --i){
        std::cout << *i << " ";
    }
}