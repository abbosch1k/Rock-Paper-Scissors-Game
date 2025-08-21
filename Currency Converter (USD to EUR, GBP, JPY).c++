#include <iostream>
using namespace std;

int main() {
    double usd;
    cout << "Enter USD: ";
    cin >> usd;

    cout << "EUR: " << usd * 0.92 << endl;
    cout << "GBP: " << usd * 0.79 << endl;
    cout << "JPY: " << usd * 146.5 << endl;

    return 0;
}
