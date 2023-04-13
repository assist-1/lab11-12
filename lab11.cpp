#include <iostream>
#include <iterator>
#include <fstream>
#include <string>

int main() 
{
    std::string s = "Testing the thing";
    std::ofstream out("f.txt");
    std::ifstream in("f.txt");
    for (std::string::iterator i = std::begin(s); i != std::end(s); i++) 
    {
        out << *i;
    }
    out.close();
    std::istream_iterator<char> i(in>>std::noskipws);
    std::istream_iterator<char> eof;
    while(i != eof)
    {
        std::cout << *i;
        i++;
    }
    in.close();
    return 0;
}