#include<iostream>
#include<conio.h>
using namespace std;

//void elevator(int floor);
//double power(double a, int n);
void fibonnacci(int n, int a=0, int b=1);


/*void elevator(int floor);
int factorial(int n);*/


void main()
{

	setlocale(LC_ALL, "");

	int n;
	cout << "Введите предельное число : "; cin >> n;

	fibonnacci(n);

	//cout << "Hello";

	//Stack  это модель памяти из которой последний записанный элемент считывается первым
	//LIFO LastIn-FirstOut (Последним зашел - Первым вышел)
	//Queue (Очередь)  это модель памяти из которой первый записанный элемент считывается первым
	//АIFO FirsIn-FirstOut (Первым зашел - Первым вышел)
	//Stack overflow exeption
	//cout << "для выхода наждмите Esc, для продолжения нажмите любую клавишу" << endl;
	//if (_getch() != 27)

	/*int n;
	cout << "Введите номер этажа : ";
	cin >> n;
	elevator(n);*/
	/*int a, n;
	cout << "Введите основание степени : ";	cin >> a;
	cout << "Введите показатель степени : ";cin >> n;
	cout << power(a, n) << endl;
}

/*void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor <<  "м этаже\n";
	elevator(floor-1); // рекурсивный вызов функции
	cout << "Вы на " << floor << "м этаже\n";

}
int factorial(int n)

(
	if (n == 0)
		return 1;
	else return factorial(n-1)
		)

	//n != (n - 1)!*n;*/


	/*#define  tab "\t"

	const int ROWS = 3;
	const int COLS = 5;

	int FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

	//void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts = 0);

	int Print(int arr[ROWS][COLS], const int ROWS, const int COLS)*/


	// power(double a, int n)
	//{
		/*if (n == 0)		return 1;
		else if (n > 0) return a * power(a, n - 1);
		else return 1/a * power(a, n + 1);*/
		//return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
		//return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n ); // -n меняем на  -n  и - на - дают +;
	//}




	/*
	void elevator(int floor);
	int factorial(int n);


	void main()
	{

		setlocale(LC_ALL, "");
		factorial(n);

		//cout << "Hello";

		//Stack  это модель памяти из которой последний записанный элемент считывается первым
		//LIFO LastIn-FirstOut (Последним зашел - Первым вышел)
		//Queue (Очередь)  это модель памяти из которой первый записанный элемент считывается первым
		//АIFO FirsIn-FirstOut (Первым зашел - Первым вышел)
		//Stack overflow exeption
		//cout << "для выхода наждмите Esc, для продолжения нажмите любую клавишу" << endl;
		//if (_getch() != 27)
		/int n;
		/*cout << "Введите номер этажа : ";
		cin >> n;
		elevator(n);


	void elevator(int floor)
	{
		if (floor == 0)
		{
			cout << "Вы в подвале" << endl;
			return;
		}
		cout << "Вы на " << floor <<  "м этаже\n";
		elevator(floor-1); // рекурсивный вызов функции
		cout << "Вы на " << floor << "м этаже\n";

	}
	int factorial(int n)

	(
		if (n == 0)
			return 1;
		else return factorial(n-1)
			)

		//n != (n - 1)!*n;*/


		/*#define  tab "\t"

		const int ROWS = 3;
		const int COLS = 5;

		int FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

		//void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts = 0);

		int Print(int arr[ROWS][COLS], const int ROWS, const int COLS)*/
}


	void fibonnacci(int n, int a, int b)
	{
		if (a > n) return;
		cout << a << "\t";
		fibonnacci(n, b, a + b);

	}
