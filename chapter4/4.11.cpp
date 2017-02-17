#include <iostream>
#include <list>
#include <algorithm>
#include <ctime>
#include <vector>

using namespace std;

int main() {
  vector<int> primes;
  int n = 2;

  while (n <= 100)
  {
    bool result = true;

    for (int i = 2; i < n / 2 + 1; i++)
    {
      if (n % i == 0)
        result = false;
    }
    if (result == true) primes.push_back(n);
    n++;
  }

  for (auto &c : primes)
  {
    cout << c << endl;
  }
}
