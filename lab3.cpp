#include <iostream>
#include <list>
#include <iterator>
#include <string>
using namespace std;

bool check(string v) {
  for (int i=0; i<v.length(); i++){
  if (v[0] == '-') 
    return true;

  if (isdigit(v[i]) == true)
      return true;}
  return false;
}

list<int> enter_list(int n){
    list<int> ls;
    string elem;
    for (int i = 0; i<n; i++){
    cin >> elem;
    if (check(elem)){
    ls.insert(ls.end(), 1, stoi(elem));}
    else { cout << "wrong input\n"; break;}
    }
    return ls;
}

void output_list(list<int> ls){
    if (ls.empty())
    cout << "The list is empty" << endl;
else
    cout << "list: ";
    copy( ls.begin(), ls.end(), ostream_iterator<int>(cout," "));
}

void sort_list(list<int> ls){
   ls.sort();
   cout << "\nSorted list: ";
   copy(ls.begin(), ls.end(), ostream_iterator<int>(cout," "));
}


void unique_list(list<int> ls){
   ls.unique();
   cout << "\nuique lise: ";
   copy(ls.begin(), ls.end(), ostream_iterator<int>(cout," "));
}

int main(){
list<int> lis;
int n;
string elem;
cout << "Enter the amount of numbers ";
cin >> n;
cout << "Enter the number sequence: ";
lis = enter_list(n);
output_list(lis);
sort_list(lis);
unique_list(lis);
return 0;
}