#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    float price;
    cin >> num;
    if (num >= 30) {
        price = num * 1.0;
    } else if (num >= 20) {
        price = num * 1.2;
    } else if (num >= 10) {
        price = num * 1.5;
    } else {
        price = num * 1.8;
    }
    cout << fixed << setprecision(1) << price << endl;
    return 0;
}