// inserting into a list
#include <iostream>
#include <list>

using namespace std;

int main() {
  char op;
  double a, b;
  while (cin >> a >> op >> b) {
    if (op == '+') cout << a << " + " << b << " = " << a + b << endl;
    else if (op == '-') cout << a << " - " << b << " = " << a - b << endl;
    else if (op == '*') cout << a << " * " << b << " = " << a * b << endl;
    else if (op == '/' && b != 0) cout << a << " / " << b << " = " << a / b << endl;
    else if (op == '/' && b == 0) cout << "cannot be divided " << endl;
    else cout << "error input" << endl;
  }
}


