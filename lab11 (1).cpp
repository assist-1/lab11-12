#include <iostream>
#include <vector>

using namespace std;


int main() {
    vector<int> arr;
    int N;
    cout << "Вводите числа. Для окончания введите любую нечисловую строку" << endl;
    while (cin.good()) {
        cin >> N;
        arr.push_back(N);
    }
    
    arr.pop_back();

    cout << "Числа в обратном порядке:" << endl;

    for (auto it = arr.rbegin(); it != arr.rend(); it++) {
        cout << *it << ' ';
    }

    cout << endl;

}