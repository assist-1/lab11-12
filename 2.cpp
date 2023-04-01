#include <iostream>
#include <deque>
#include <iterator>


typedef std::deque<int> vec;
typedef vec::iterator iter;


std::ostream& operator<< (std::ostream& out, vec v)
{
	out << "[" << * v.begin();
	for (iter i = v.begin()+1; i != v.end(); ++i)
	{
		out << ", " << *i;
	}
	out << "]";
	return out;
}


int main ()
{
	vec v;
	for (int i=1; i<11; ++i)
	{
		*back_inserter(v) = i;
	}
	std::cout << "Vector: " << v
			  << "\n\nIf you want change it enter 1  ==> ";
	int key;
	std::cin >> key;
	if (key==1)
	{
		std::cout << "\nEnter number of elements (6 or more)  ==> ";
		int size;
		std::cin >> size;
		if (size<6) 
		{
			std::cerr << "Size mustn\'t be less than 6.\n";
			exit(1);
		}
		v.clear(); v.resize(size);
		std::cout << "Enter elements:\n";
		for (iter i = v.begin(); i != v.end(); ++i)
		{
			std::cin >> *i;
		}
		std::cout << "\nNew vector: " << v << "\n\n";
	}
	/////////// 
	vec reversed;
	for (iter i = v.begin(); i != v.end(); ++i)
	{
		* front_inserter(reversed) = *i;
	}
	std::cout << "\nReversed vector: " << reversed << std::endl;
	
	/////////// 
	vec cutted;
	for (iter i = v.begin()+2; i != (v.end()-3); ++i)
	{
		*back_inserter(cutted) = *i;
	}
	std::cout << "\nCutted vector (from [2] to [" << v.size()-4 << "]): " << cutted << std::endl;
	
	///////////
	vec expanded = v;
	for (iter i = cutted.begin(); i != cutted.end(); ++i)
	{
		*inserter(expanded, expanded.end()-2) = *i;
	}
	std::cout << "\nExpanded vector (inserted cutted vector between [" << v.size()-3 
			  << "] and [" << v.size()-2 << "]): " << expanded << std::endl;

	return 0;
}