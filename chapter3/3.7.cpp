// inserting into a list
#include <iostream>
#include <list>

using namespace std;

int main() {
  string i, k, j;
  cin >> i >> j >> k;

  int f1 = int(i[0]);
  int f2 = int(j[0]);
  int f3 = int(k[0]);

  cout << f1 << " " << f2  << " " << f3 << endl;

  if (f1 < f2 && f1 < f3)
    if (f3 < f2)
      cout << i << " "<< j << " " << k;
    else
      cout << i << " "<< k << " " << j;

  if (f2 < f1 && f2 < f3)
    if (f1 < f3)
      cout << j << " "<< i << " " << k;
    else
      cout << j << " "<< k << " " << i;

  if (f3 < f1 && f3 < f2)
    if (f1 < f2)
      cout << k << " "<< i << " " << j;
    else
      cout << k << " "<< j << " " << i;
}

