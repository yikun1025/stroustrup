// inserting into a list
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  vector<string> num = {"zero", "one", "two", "three", "four", "five",
                        "six", "seven", "eight", "nine"};

  int buf;

  while(true)
  {
    cin >> buf;
    if (buf == -1)break;
    while(true)
    {
      if (0 <= buf && buf < 10) break;
      cin >> buf;
    }

    cout << num[buf] << endl;
  }

//  for (auto &c: num)
//  {
//    cout << c << endl;
//  }
}


