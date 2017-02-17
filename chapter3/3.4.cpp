// inserting into a list
#include <iostream>
#include <list>

using namespace std;

int main() {
  int va1, va2;
  cin >> va1 >> va2;

  if (va1 > va2) {
    cout << "biger: " << va1 << endl;
    cout << "smaller: " << va2 << endl;
  }
  else
  {
    cout << "biger: " << va2 << endl;
    cout << "smaller: " << va1 << endl;
  }

  cout << "sum: " << va1 + va2 << endl;
  cout << "sub:: " << va1 - va2 << endl;
  cout << "mul: " << va1 * va2 << endl;

  if (va2 != 0)
    cout << "rate:: " << (double(va1) / double(va2)) << endl;
  else
    cout << "can not be divided" << endl;
}

