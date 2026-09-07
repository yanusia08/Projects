#include<iostream>
using namespace std;

int main()
{
	/*1*/
	srand(time(NULL));
	int a = rand();
	cout << a << endl;

	for (int i = 0; i < 20; i++)
	{
		a = rand()%100;
		cout << a << endl;
	}
	/*2*/
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	//3
	const int row = 10;
	const int col = 10;
	int arr[row][col];
	//4
	int arr[2][2] = { {1,1},{2,2} };
	int arr1[2][2] = { 1,2,3,4 };
	int arr3[3][3] = { {1,2},{3,4,5} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << " ";
		}cout << endl;
	}
}