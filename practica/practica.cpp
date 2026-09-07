#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    // 1. Кількість елементів != 0 (4x3)
    const int row = 4;
    const int col = 3;
    int arr1[row][col];
    int count1 = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr1[i][j] = rand() % 5;
            cout << arr1[i][j] << " ";
            if (arr1[i][j] != 0) count1++;
        }cout << endl;
    }
    cout << "!=0: " << count1 << endl << endl;

}