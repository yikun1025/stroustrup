// inserting into a list
#include <iostream>
#include <list>

using namespace std;

int main() {
  int n;
  int i = 0;
  cin >> n;
  int guess = 50;
  int difference[10];
  difference[0] = 25;
  difference[1] = 13;
  difference[2] = 6;
  difference[3] = 3;
  difference[4] = 2;
  difference[5] = 1;

  while (true) {
    if (n > 1 && n < 100)break;
    cout << "The number should range 1 from 100: ";
    cin >> n;
  }

  while (true) {
    char choice;

    if (guess == n)break;

    cout << "Is this number is smaller than " << guess << " ?" << endl;
    cin >> choice;

    while (true) {
      if (choice == 'y' || choice == 'Y' || choice == 'N' || choice == 'n')break;
    }


    if (choice == 'y' || choice == 'Y') guess -= difference[i];
    if (choice == 'n' || choice == 'N') guess += difference[i];

    i++;
  }

  cout << "Number: " << n << endl;
}


