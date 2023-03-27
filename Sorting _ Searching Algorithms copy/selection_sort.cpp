#include <iostream>
using namespace std;

void print(int *arr, int ln)
{
    for (int i = 0; i < ln; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[4] = {21, 12, 11, 22};

    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    print(arr, 4);

    return 0;
}
