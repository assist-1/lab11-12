#include<algorithm>
#include<iterator>
#include<iostream>
#include<fstream>
#include <vector>
#include <string>


int main() {
    std::fstream file("text");
    std::string str("Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit");
    if (file.is_open()) {
        std::ostream_iterator<char> out(file);
        std::copy(str.begin(), str.end(), out);
    }
    file.close();
    std::fstream file2("text");
    if (file2.is_open()) {
        std::istream_iterator<char> in_begin(file2 >> std::noskipws);
        std::istream_iterator<char> in_end;
        std::string res(in_begin, in_end);
        std::cout << res;
    }
    return 0;
}