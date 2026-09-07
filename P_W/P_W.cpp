#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    // 1. Кількість елементів != 0 (4x3)
    int arr1[4][3];
    int count1 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr1[i][j] = rand() % 5 - 2;
            cout << arr1[i][j] << " ";
            if (arr1[i][j] != 0) count1++;
        }
        cout << endl;
    }
    cout << "!=0: " << count1 << endl << endl;
