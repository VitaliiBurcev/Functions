#include<iostream>
using namespace std;


int Sum(int a, int b);				//Прототип функции (Обьявлении функции - Function Definition)
int Difference(int a, int b /* int c = 0*/);   // int c = 0 параметр по умолчанию
int Prodact(int a, int b);
int Ouotient(int a, int b);



void main()
{

	setlocale (LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; 
	cin >> a >> b;
	int c = Sum (a, b);   // Использование или вызов функции Function call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference(a, b) << endl;
	cout << a << " * " << b << " = " << Prodact(a, b) << endl;
	cout << a << " / " << b << " = " << Ouotient(a, b) << endl;
}
int Sum(int a, int b)    //Реализация функции (Определение функции - Function definition)                                                                                                                                   
{
	int c = a + b;
	return c;

}

int Difference(int a, int b)
{
	return a - b;
}

int Prodact(int a, int b)
{
	return a * b;
}

int Ouotient(int a, int b)
{
	return a / b;
}
