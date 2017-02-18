#include <iostream>
#include <list>
#include <algorithm>
#include <ctime>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

bool find_str(string current, char find);

int main() {
  vector<int> cow;

  char choice;

  while (true) {
    srand(time(NULL));
    for (auto i = 0; i < 4; i++) cow.push_back(rand() % 9 + 1);

    while (true) {
      int correct_partial = 0;
      int correct_fully = 0;

      cout << endl;

      int guess;

      while (true) {
        cout << "Input the Guess: ";
        cin >> guess;
        if (guess < 10000 && guess > 999)break;
      }

      string user_str = to_string(guess);
      string computer_str = "";

      for (auto &c :cow) computer_str += to_string(c);
      cout << "Computer: " << computer_str << endl;
//      cout << "User: " << user_str << endl;

      for (auto i = 3; i >= 0; i--) {
        if (user_str[i] == computer_str[i]) correct_fully += 1;
        if (find_str(user_str, computer_str[i])) correct_partial += 1;
      }

      cout << "Correct order: " << correct_fully << endl;
      cout << "Correct number: " << correct_partial << endl;

      if (correct_fully == 4)
      {
        cout << "computer: " <<computer_str << endl;
        break;
      }
    }

    for (auto &c : cow) cow.pop_back();

    cout << "Correct!" << endl;

    cout << "still want play (q to quit)" << endl;
    cin >> choice;
    if (choice == 'q' || choice == 'Q')break;
  }


}

bool find_str(string current, char find) {
  for (auto c : current) {
    if (c == find)
      return true;
  }

  return false;
}
