#include <iostream>
#include <fstream>
#include <iterator>
#include <string>

int main() {
    std::string text = "Hello, my dear teacher!";

    // Открываем файл для записи
    std::ofstream out_file("put.txt");

    // Записываем в файл строки
    for (std::string::iterator i = std::begin(text); i != std::end(text);++i) {
        out_file << *i;
    }
    // Закрываем файл для записи
    out_file.close();

    //Открываем файл для чтения
    std::ifstream in_file("put.txt");

    // Читаем строки из файла и выводим их на экран
    for (std::istream_iterator<char> it(in_file>>std::noskipws), eof; it != eof; ++it){
        std::cout << *it;
    }
    // Закрываем файл для чтения
    in_file.close();

    return 0;
}