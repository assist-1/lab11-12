
#include <iostream>
#include<fstream>
#include<string>
#include <iterator>

int main()
{
    std::string s;
    std::ifstream file("example.txt");
    if (!file.is_open()) {
        std::cout << "Can't find the file";
    }
    std::ofstream out;
    out.open("tofile.txt");
    std::copy(std::istream_iterator<int>(file), std::istream_iterator<int>(), std::ostream_iterator<int>(out, " "));

    out.close();
    return 0;
}
