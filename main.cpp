/*3. Файловый ввод-вывод с итераторами:
Используйте стандартные итераторы для чтения и записи файлов. 
Напишите программу, которая демонстрирует работу с текстовым файлом 
с помощью итераторов.*/

#include <iterator>
#include <fstream>
#include <iostream>

int main() {
    std::ifstream fin;
    std::ofstream fout;

    fin.open("in.txt");
    fout.open("out.txt");

    std::istream_iterator<char> in(fin);
    std::ostream_iterator<char, char> out_(fout, " ");

    while (in != std::istream_iterator<char>()) {
        //std::cout << *in << "\n";
        *out_ = *in;
        ++in;
    }
    fin.close();
    fout.close();
    return 0;
}