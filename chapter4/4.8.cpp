// inserting into a list
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  long total, num;
  num = 1;
  total = 0;
  int i = 0;

  while (total < 10000000)
  {
    num *= 2;
    i++;
    total += num;

    cout << i << " " << "total: " << total << " "
          << "Current: " << num << endl;
  }
}


