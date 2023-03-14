
#include <iostream>

using namespace std;

void disp(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[8] = {20, 11, 22, 1, 6, 33, 2, 1};

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    disp(arr, 8);

    return 0;
}
