#include<iostream>
using namespace std;
#define  tab "\t"
const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void main()
{
	int arr[ROWS][COLS];

	FillRand(arr, ROWS, COLS);
	Print(arr, ROWS, COLS);


}


void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//заполнение двумерного массива случайными числами
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}


void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//¬ывод двумерного массива на экран
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}