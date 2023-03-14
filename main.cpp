/*
Взаимодействие итераторов: Продемонстрируйте совместимость итераторов между 
различными типами контейнеров, такими как вектор и двухсторонняя очередь. 
Напишите программу, которая создает вектор целых чисел, а затем 
использует итераторы для копирования элементов вектора в очередь.
*/

#include <iostream>
#include <vector>
#include <deque>


int main() 
{
    std::vector<int> v = {0,1,2,3,4,5,6,7};
    std::deque<int> deq;

    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << ' ';
    }
    std::cout << std::endl;

    for (std::vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        deq.push_back(*iter);
    }

    for (int i = 0; i < deq.size(); ++i)
    {
        std::cout << deq[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}