#include<algorithm>
#include<iterator>
#include<iostream>
#include<fstream>
#include <vector>
#include <string>

int main(){
	std::ifstream text1{"text1.txt"};
	/*
	if(text.is_open()){
	std::vector<std::string> vector((std::istream_iterator<std::string>(text)),std::istream_iterator<std::string>());
	}*/
	if(text1.is_open()){
		std::istream_iterator<std::string> begin(text1);
		std::istream_iterator<std::string> end;
		std::vector<std::string> vec(begin,end);
		for(auto element : vec){
		std::cout << element << std::endl;
		}
	}
	text1.close();
	
	std::ofstream text2{"text2.txt"};
	if(text2.is_open()){
		std::vector<std::string> sometext = {"Yes","No","Yes","No"};
		std::copy(sometext.begin(),sometext.end(),std::ostream_iterator<std::string>(text2));
		text2.close();
	}
	return 0;
}