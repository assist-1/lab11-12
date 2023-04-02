//Итераторы-адаптеры: 
//Используйте адаптеры итераторов, такие как back_inserter, front_inserter и inserter, для изменения контейнеров с помощью итераторов. 
//Напишите программу, которая создает вектор целых чисел, а затем использует итераторы и несколько функций адаптера для добавления или удаления элементов из вектора.
#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <stdlib.h>

using std::vector;
using std::list;
using std::cout;
using std::back_inserter; 
using std::front_inserter; 
using std::inserter;

#define SIZE 10
#define COUNT 5
#define BEGIN 2

int main() {
    srand(time(NULL));
    list<int> fir;

    for (int i = 0; i < SIZE; ++i){
        fir.push_back(rand()%(SIZE-1)-3);
    }
    for (list<int>::iterator i = fir.begin(); i!=fir.end();++i){
        cout << *i << " ";
    }
    cout << "\n";

    int flag = rand()%3+1;
    if (flag == 1) {
        cout << flag << ": FRONT_INSERTER\n";
        list<int> primetiv{1,2,3,4,5};
        std::copy( primetiv.begin(), primetiv.end(), front_inserter(fir));
    }
    else if (flag == 2) {
        cout << flag << ": BACK_INSERTER\n";
        std::fill_n(std::back_inserter(fir), flag, 1);
    }
    else if (flag == 3) {
        cout << flag << ": INSERTER\n";
        list<int> primetiv{1,2,3,4,5};
        list<int>::iterator in = fir.begin();
        advance(in,rand()%COUNT+BEGIN);
        std::copy (primetiv.begin(), primetiv.end(), inserter(fir,in));
    }
    
    vector<int> num(fir.size());
    std::copy(fir.begin(),fir.end(), num.begin());
    for (vector<int>::iterator i = num.begin(); i!=num.end();++i){
        cout << *i << " ";
    }
    cout << "\n";
    return 0;
}