#include <iterator>
#include <vector>
#include <iostream>


/*
Итераторы вставки заменяют операцию присваивания на операцию вставки. 
*/

int main()
{
	std::vector<int> v;
	for(int i = 8; i < 15; i++)
	{
		v.push_back(i);
	}

	auto front_it = std::front_inserter(v);
	auto  back_it = std::back_inserter(v);
	int nums[] = {-5, 3, -5, 2, 7, -7};

	for(int i = 0; i < sizeof(nums)/4; i++)
	{
		if(nums[i] < v[v.size()-1])
		{
			*back_it = nums[i];
		}
	}
	for(auto it : v)
	{
		std::cout << it << std::endl;
	}
	std::fill_n(back_it, 3, 0);
	std::cout << std::endl;
	for(auto it : v)
	{
		std::cout << it << std::endl;
	}
	return 0;
}