#include <iostream>
#include <list>
#include <algorithm>
#include <ctime>
#include <vector>

using namespace std;

int main() {
  vector<char> num = {'s', 'r', 'p'};
  char buf;

  while (true) {
    srand(time(NULL));
    int rand_number = rand() % 2 + 0;

    cout << "Your choice: ";
    cin >> buf;
    if (buf == 'q' || buf == 'Q')break;
    while (true)
    {
      if (buf == 's' || buf == 'r' || buf == 'p')break;
      cin >> buf;
    }

    cout << "\nYour choice: " << buf << endl;
    cout << "Computer: " << num[rand_number] << endl;

    switch (buf) {
      case 's':
        switch (num[rand_number]) {
          case 's':
            cout << "Tie" << endl;
            break;
          case 'p':
            cout << "Your win" << endl;
            break;
          case 'r':
            cout << "Your lose" << endl;
            break;

        }
        break;

      case 'r':
        switch (num[rand_number]) {
          case 's':
            cout << "Your win" << endl;
            break;
          case 'p':
            cout << "Your Lose" << endl;
            break;
          case 'r':
            cout << "Tie" << endl;
            break;
        }
        break;
      case 'p':
        switch (num[rand_number]) {
          case 's':
            cout << "Your Lose" << endl;
            break;
          case 'p':
            cout << "Tie" << endl;
            break;
          case 'r':
            cout << "Your win" << endl;
            break;
        }
        break;
      default:
        cout << "error";
        break;
    }
    cout << endl;
  }

}
