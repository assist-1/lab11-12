#include <iostream>
#include <fstream>
#include <iterator>
#include <string>

int main(){
    std::ifstream input_file("input.txt");
    if (!input_file.is_open()){
        std::cerr << "failed to open input file" << std::endl;
        return 1;
    }

    std::ofstream output_file("output.txt", std::ios::out);
    if (!output_file.is_open()){
        std::cerr << "failed to create output file" << std::endl;
        return 1;
    }

    std::istream_iterator<std::string> input_it(input_file);
    std::istream_iterator<std::string> input_end;
    std::ostream_iterator<std::string> output_it(output_file);

    std::cout << "file input.txt: " << std::endl;
    while (input_it != input_end){
        std::cout << *input_it << " ";
        *output_it++ = *input_it++ + " ";
    }
    std::cout << std::endl;

    input_file.close();
    output_file.clear();
    output_file.close();
    return 0;
}
