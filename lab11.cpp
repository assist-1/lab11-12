#include <iostream>
#include <iterator>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
int main()
{
	vector<int> arr;
	int n;
	cin >> n;
	arr.resize(n);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr[i] = x;
	}
	vector<int> ::reverse_iterator rIt;
	rIt = arr.rbegin();
	for (rIt; rIt != arr.rend(); rIt++) {
		cout << *rIt << " ";
	}
	cout << '\n';
}
