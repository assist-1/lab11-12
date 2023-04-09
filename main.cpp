#include <iostream>
#include <vector>
#include <deque>
#include <fstream>
#include <iterator>
#include <algorithm>
using namespace std;

using std::cout;

void print(vector <int> a) {
    vector<int>::iterator i = a.begin();
    for (i; i < a.end(); i++) cout << *i << " ";
    cout << endl;
}

void print(deque <int> a) {
    deque <int>::iterator i = a.begin();
    for (i; i < a.end(); i++) cout << *i << " ";
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "RU");
    vector <int> a;
    cout << "Введите кол-во чисел: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }vector <int> ::iterator i1 = a.begin(), i2 = a.end();
    /// #1
    cout << "#1" << endl;
    print(a);
    sort(i1, i2);
    print(a);
    rotate(i1, i1 + 1, i2);
    print(a);
    rotate(i1, i1 + 1, i2);
    print(a);
    cout << endl;

    /// #2, 4
    cout << "#2, 4" << endl;
    sort(i1, i2);
    print(a);
    deque <int> b = {1, 2, 3, 45};
    copy(i1, i2, back_inserter(b));
    print(b);
    copy(i1, i2, front_inserter(b));
    print(b);
    cout << endl;

    /// #3
    cout << "#3" << endl;
    ifstream in;
    ofstream out;
    in.open("a.txt");
    vector <int> c{ istream_iterator<int>(in), istream_iterator<int>()};
    reverse(c.begin(), c.end());
    out.open("b.txt");
    copy(c.begin(), c.end(), ostream_iterator<int>(out, " "));
    out << "\n";
    out.close();
    in.close();
    cout << "Готово!" << endl << endl;

    /// #5
    cout << "#5" << endl;
    print(c);
    for (vector<int> ::reverse_iterator it = c.rbegin(); it != c.rend(); it++) cout << *it << " ";
    cout << endl;
}
