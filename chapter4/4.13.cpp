#include <iostream>
#include <list>
#include <algorithm>
#include <ctime>
#include <vector>

using namespace std;


int main() {
  vector<int> primes;
  vector<int> prove = {2, 3, 5, 7};
  int index;

  for (auto i = 2; i <=  100; i++)
    primes.push_back(i);

  while (!prove.empty())
  {
    int count = 1;
    int i = prove[0];
//    cout << "i: " << i << endl;

    for (auto &c: primes) {
      count++;
      primes.erase(remove(primes.begin(), primes.end(), count * i), primes.end());
    }
    prove.erase(prove.begin());
  }


  for (auto &c: primes) {
    cout << c << endl;
  }
}

