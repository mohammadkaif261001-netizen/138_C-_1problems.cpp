#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, original, remainder, result = 0, digits = 0;

    cin >> num;

    original = num;

    while (original != 0)
    {
        digits++;
        original /= 10;
    }

    original = num;

    while (original != 0)
    {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    if (result == num)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}