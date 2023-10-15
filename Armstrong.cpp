#include <iostream>
using namespace std;

int Armstrong(int num)
{
    int actual = num;
    int result = 0;
    int remainder;

    while (actual != 0)
    {
        remainder = actual % 10;
        result += remainder * remainder * remainder;
        //    cout << result << endl;
        actual /= 10;
    }
    return result;
}

int main()
{
    int left;
    int right;
    cin >> left >> right;

    while (left <= right)
    {
        if (left == Armstrong(left))
        {
            cout << left << "  " << endl;
        }
        left++;
    }
}
