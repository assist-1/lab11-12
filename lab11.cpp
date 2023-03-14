#include <iostream>
#include <vector>
using namespace std;
int main(){
    int size_vector;
    int a;
    cout << "Enter the numbers of elements " << endl;
    cin >> size_vector;
    vector<int>vec(size_vector);
    for (vector<int>::iterator it = vec.begin(); it != vec.end();++it){
        cin >> a;
        *it = a;
    }
    vector <int>::iterator it1;
    cout << "First vector - ";
    for (it1 = vec.begin(); it1 != vec.end();++it1){
        cout << *it1 << " ";
    }
    cout << "\n";
    vector <int>::reverse_iterator it2;
    cout << "New vector - ";
    for (it2 = vec.rbegin(); it2 != vec.rend(); ++it2){
        cout << *it2 << " ";
    }
    cout << "\n";
}
