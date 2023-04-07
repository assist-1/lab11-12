#include<iostream>
#include<vector>
#include<iterator>
#include<deque>

using namespace std;

int main(){
  vector<int> task_A = {1,2,3,4,5};
  vector <int> :: iterator it_A = task_A.begin();
  deque <int> task_B(size(task_A));
  deque <int> ::iterator it_B = task_B.begin();
  for(it_A; it_A != task_A.end(); ++it_A){
    *it_B = *it_A;
    ++it_B;
  }
  for(it_B = task_B.begin(); it_B != task_B.end(); ++it_B){
    cout << *it_B << ' ';
  }
  cout << endl;
  return 0;
}
