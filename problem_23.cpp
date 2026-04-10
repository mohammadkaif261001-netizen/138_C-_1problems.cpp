#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int num = 1; num <= 1000; num++)
    {
        int original = num, remainder, result = 0, digits = 0;

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
        {
            cout << num << " ";
        }
    }

    return 0;
}