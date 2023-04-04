#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers{1, 3, 5};
    std::back_insert_iterator<std::vector<int>> back_it(numbers);
    std::vector<int> more_numbers{7, 8, 9};
    for (auto it = more_numbers.begin(); it != more_numbers.end(); ++it) {
        *back_it = *it;
    }

    for (auto num: numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<int> to_remove{1, 3, 5};
    for (auto it = to_remove.begin(); it != to_remove.end(); ++it) {
        auto remove_it = std::find(numbers.begin(), numbers.end(), *it);
        if (remove_it != numbers.end()) {
            std::insert_iterator<std::vector<int>> insert_it(numbers, remove_it);
            *insert_it = *remove_it - 1;
        }
    }

    for (auto num: numbers) {
        std::cout << num << " ";
    }

    return 0;
}
