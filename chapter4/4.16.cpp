#include <iostream>
#include <list>
#include <algorithm>
#include <ctime>
#include <vector>

using namespace std;

int find_times(vector<int> num);

int main() {
  vector<int> num;
  int n, previous;
  vector<int> count;

  while (true)
  {
    cin >> n;
    if (n == 999)break;
    num.push_back(n);
  }

  sort(num.begin(), num.end());
  for (auto it = num.begin(); it != num.end() && !isspace(*it); ++it)
    cout << *it << endl;

  cout << "max: " << find_times(num) << endl;
}

int find_times(vector<int> nums)
{
  int count = 1;
  int max = 1;
  int previous = 0;
//  cout << "e" << endl;

  while (!nums.empty())
  {
//    cout << "e" << endl;
    int current = nums[0];
//    cout << current << " " << previous << endl;
    if (previous == current)
    {
      count++;
//      cout << "count: " << count << endl;
      if (count > max) max = count;
      if (current != nums[1]) count = 1;
    }


    previous = current;
    nums.erase(nums.begin());
  }

  return max;
}
