#include<iostream>
using namespace std;

#define  tab "\t"

const int ROWS = 3;
const int COLS = 5;

int FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
double FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
char FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

/*int Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sort(int arr[], const int n);
double Sort(double arr[], const int n);
char Sort(char arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);


int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);


int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);*/


void main()
{
	int arr [ROWS][COLS];
	FillRand(arr, ROWS, COLS);
	//Print(arr, ROWS, COLS);

	/*cout << "Сумма элементов массива: " << Sum(arr, ROWS, COLS) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(arr, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, ROWS, COLS) << endl;*/

	double arr[ROWS][COLS];
	FillRand(arr, ROWS, COLS);
	/*Print(arr, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr, ROWS, COLS) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(arr, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, ROWS, COLS) << endl;*/

	char arr[ROWS][COLS];
	FillRand(arr, ROWS, COLS);
	/*Print(arr, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr, ROWS, COLS) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(arr, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, ROWS, COLS) << endl;*/
}

int FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)

{
	//заполнение двумерного массива случайными числами
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[ROWS][COLS] = rand() % 100;
		}
	}
	
}
double FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//заполнение двумерного массива случайными числами
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[ROWS][COLS] = rand() % 100;

		}
	}
}
char FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[ROWS][COLS] = rand() % 100;

		}
	}
}



