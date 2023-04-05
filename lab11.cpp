#include <iostream>
#include <vector>
#include <experimental/iterator>
#include <iterator>

using namespace std;

int main(){
    vector <int> V = {-3, -2, -1, 1, 2, 3};
    std::vector<int>::iterator iter = V.begin();
    auto end = back_inserter(V);
    cout << endl << endl;
    std::copy(V.begin(),
              V.end(),
              std::experimental::make_ostream_joiner(std::cout, ", "));
    cout << endl << endl;
    *end = 4;
    std::copy(V.begin(),
              V.end(),
              std::experimental::make_ostream_joiner(std::cout, ", "));
    cout << endl << endl;
    V.pop_back();
    std::copy(V.begin(),
              V.end(),
              std::experimental::make_ostream_joiner(std::cout, ", "));
    cout << endl << endl;
    return 0;
}
