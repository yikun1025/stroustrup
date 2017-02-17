// inserting into a list
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  vector<double> city;
  int sum = 0;
  int distance;

  while(true)
  {
    cin >> distance;
    if (distance == -1) break;
    city.push_back(distance);
  }

  sort(city.begin(), city.end());
  for(auto &c: city)
  {
    cout << c << " ";
    sum += c;
  }

  cout << "\nTotal distance: " << sum << endl;
  cout << "Average: " << sum / city.size() << endl;
  cout << "Smallest: " << *city.begin() << endl;
  cout << "Longellest: " << city[city.size() - 1] << endl;
}


