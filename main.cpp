//  вариант 4 лабораторная работа 11
#include <iostream>
#include <vector>
#include <deque>

int main() {
	std::vector<int> vec;
	for (int i = 0; i < 20; i++) {
		vec.push_back(i+1);
	}
	std::cout << "Vector: ";
	for (auto i : vec) {
		std::cout << i << " ";
	}
	std::cout << std::endl << std::endl << "Deque: ";
	std::deque<int> deq;
	for (auto i = vec.begin(); i != vec.end(); i++) {
		deq.push_back(*i);
	}
	for (auto i = deq.begin(); i != deq.end(); i++){
		std::cout << *i << " ";
	}
	return 0;
}