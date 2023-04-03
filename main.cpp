#include <iostream>
#include <list>
#include <algorithm>

double transformation(double i)
{
    return i*i;
}
double negative_n(double i)
{
    return i<0;
}
double positive_n(double i)
{
    return i>0;
}
int main() {
    std::list <double> numbers;
    std::list <double> :: iterator it1;
    int cnt;
    double num = 0;
    std::cout << "Enter count of numbers: ";
    std::cin >> cnt;
    std::cout << "Enter numbers: ";
    for (int i = 1; i<= cnt; i++)
    {
        std::cin >> num;
        numbers.push_back(num);
    }
    std::cout << "Your list: ";
    for (it1 = numbers.begin(); it1 != numbers.end(); it1++ )
        std::cout << *it1 << " ";
    std::cout<<std::endl;
    
    //count
    std::cout << "Count of number 3: "<< std::count(numbers.begin(),numbers.end(),3)<<std::endl;
    
    //find
    double num_for_find;
    std::cout << "Enter the number which you want to find in list: ";
    std::cin >> num_for_find;
    it1 = std::find(numbers.begin(),numbers.end(),num_for_find);
    if (it1 == numbers.end())
        std::cout << "No such number!"<<std::endl;
    else std::cout << *it1 << " found in list"<< std::endl ;
    
    //transform
    std::list <double> trnumbers(numbers.size());
    std::list <double> :: iterator it_tr;
    it_tr = std::transform(numbers.begin(),numbers.end(),trnumbers.begin(),transformation);
    std::cout << "Transform numbers: ";
    for (it_tr = trnumbers.begin(); it_tr != trnumbers.end(); it_tr++)
    {
        std::cout << *it_tr << " ";
    }
    std::cout<<std::endl;
    
    //any_of
    std::cout << "Negative numbers in list: " << std::any_of(numbers.begin(),numbers.end(), negative_n)<<std::endl;
    //all_of
    std::cout << "All numbers are positive in list: " <<std::all_of(numbers.begin(),numbers.end(),positive_n)<<std::endl;
    //none_of
    std::cout << "No number is greater than 1000 in list: " << std::none_of(numbers.begin(),numbers.end(), [](double i) {return i>1000;})<<std::endl;
    return 0;
}
