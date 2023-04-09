#include <iostream>
#include <list>

void listPrint(std::list<int> &list) {
  for (auto i = list.cbegin(); i != list.cend(); ++i) {
    std::cout << *i << ' ';
  }
}

std::list<int>::const_iterator listFind(std::list<int> &list, int number) {
  for (auto i = list.cbegin(); i != list.cend(); ++i) {
    if (*i == number) {
      return i;
    }
  }
  return list.cend();
}

void listReverse(std::list<int> &list) {
  std::list<int> tempList;
  auto temp = list.begin();
  tempList.assign(list.begin(), list.end());
  for (auto i = tempList.crbegin(); i != tempList.crend(); ++i) {
    *temp = *i;
    ++temp;
  }
}

void listRemove(std::list<int> &list, int number) {
  for (auto i = list.begin(); i != list.end(); ++i) {
    if (*i == number) {
      list.erase(i);
    }
  }
}

int main() {
  size_t count;
  int number;
  std::list<int> list;

  std::cout << "Enter the number of list items:" << std::endl;
  std::cin >> count;

  std::cout << "Enter " << count << " numbers:" << std::endl;
  for (size_t i = 0; i < count; ++i) {
    std::cin >> number;
    list.push_back(number);
  }

  std::cout << "The resulting list:" << std::endl;
  listPrint(list);

  std::cout << '\n' << "Reserved list:" << std::endl;
  listReverse(list);
  listPrint(list);

  std::cout << '\n' << "List after deleting the number 5:" << std::endl;
  listRemove(list, 5);
  listPrint(list);

  std::cout << '\n' << "Applications of the find function using the number 10:" << std::endl;
  std::cout << *listFind(list, 10) << std::endl;

  return 0;
}
