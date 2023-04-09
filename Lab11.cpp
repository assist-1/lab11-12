#include<iostream>
#include<fstream>
#include<iterator>

/*
Файловый ввод-вывод с итераторами: 
Используйте стандартные итераторы для чтения и записи файлов.
Напишите программу, которая демонстрирует
работу с текстовым файлом с помощью итераторов.
*/

int main(){
	std::fstream inFile("input.txt");
	if(!inFile){
		std::cerr << "ERROR 1" << std::endl;
        return 1;
	}
	
	std::ofstream outFile("output.txt");
	if(!outFile){
		std::cerr << "ERROR 2" << std::endl;
        return 1;
	}
	
	std::copy(  std::istream_iterator<int>(inFile),
			    std::istream_iterator<int>(),
		        std::ostream_iterator<int>(outFile, "\n")	);
	
	return 0;
}