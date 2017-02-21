// Chapter 09, exercise 02: Name_pairs class
// Exercise 03: add << operator, define == and != for Name_pairs

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

class Fractional {
public:
    Fractional() : denominator(0), numerator(1) {}

    Fractional(int n) : denominator(1), numerator(n) {}

    Fractional(int d, int n) : denominator(d), numerator(n) { update(); }

    int get_denominator() const { return denominator; }

    int get_numerator() const { return numerator; }

    double transfer() const;


    void update() {
        if (denominator == 0) throw "error divider";
        if (denominator < 0) {
            denominator = -denominator;
            numerator = -numerator;
        }
        int n = gcd(denominator, numerator);
        if (n > 1) {
            numerator /= n;
            denominator /= n;
        }
    }

private:
    int denominator;
    int numerator;
};

Fractional operator+(const Fractional &a, const Fractional &b);

Fractional operator-(const Fractional &a, const Fractional &b);

Fractional operator*(const Fractional &a, const Fractional &b);

Fractional operator/(const Fractional &a, const Fractional &b);

bool operator==(const Fractional &a, const Fractional &b);

bool operator!=(const Fractional &a, const Fractional &b);


//------------------------------------------------------------------------------

ostream &operator<<(ostream &os, const Fractional &d);

istream &operator>>(istream &is, Fractional &dd);

double Fractional::transfer() const {
    return denominator / numerator;
}

bool is_vaild(int denominator, int numerator) {
    if (numerator == 0) return false;

    return true;
}

bool operator==(const Fractional &a, const Fractional &b) {
    return a.get_numerator() == b.get_numerator()
           && a.get_denominator() == b.get_denominator();
}

bool operator!=(const Fractional &a, const Fractional &b) {
    return !(a== b);
}

Fractional operator+(const Fractional &a, const Fractional &b) {
    double d = a.get_denominator() * b.get_denominator();
    double n = a.get_numerator() * b.get_denominator() + b.get_numerator() * a.get_denominator();
    Fractional ff(d, n);
    ff.update();
    return ff;
}

Fractional operator-(const Fractional &a, const Fractional &b) {
    double d = a.get_denominator() * b.get_denominator();
    double n = a.get_numerator() * b.get_denominator() - b.get_numerator() * a.get_denominator();
    Fractional ff(d, n);
    ff.update();
    return ff;
}

Fractional operator*(const Fractional &a, const Fractional &b) {
    double d = a.get_denominator() * b.get_denominator();
    double n = a.get_numerator() * b.get_numerator();
    Fractional ff(d, n);
    ff.update();
    return ff;
}

Fractional operator/(const Fractional &a, const Fractional &b) {
    double d = a.get_denominator() * b.get_numerator();
    double n = a.get_numerator() * b.get_denominator();
    Fractional ff(d, n);
    ff.update();
    return ff;
}

ostream &operator<<(ostream &os, const Fractional &d) {
    return cout << d.get_numerator() << "/" << d.get_denominator() << endl;
}


int main() {
    Fractional f2(3);
    Fractional f3(5, 7);

    cout << f2 << f3 << endl;
    cout << f3 + f2 << endl;
}





// type for (name,age) pairs
