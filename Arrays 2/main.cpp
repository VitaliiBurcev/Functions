
#include<iostream>
using namespace std;

void Sum(int arr[], const int n);
void Avg(int arr[], const int n);
void Min_value(int arr[], const int n);
void Max_value(int arr[], const int n);
void shiftLeft(int arr[], const int n);
void shiftRight(int arr[], const int n);



void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	void Sum( arr, n);
	void Avg( arr,  n);
	void Min_value( arr, n);
	void Max_value( arr, n);
	void shiftLeft(arr, n);
	void shiftRight( arr, n);

}


void Sum( arr, n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{

		sum += arr[i];
	}
	cout << "����� ��������� �������:  " << sum << endl;
}
void Avg( arr, n)
7{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{

		sum += arr[i];
	}

	cout << "�������-�������������� ��������� �������:  " << (double)sum / n << endl;
}

void Min_value( arr, n)
{
	int min;
	min = arr{0};
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) 
			min = arr[i];
		

		cout << "����������� �������� �������� �������:  " << min << endl;
	}
}


void Max_value( arr, n)
{
	int max;
	min = arr{ 0 };
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];


		cout << "������������ �������� �������� �������:  " << max << endl;
	}
}


void shiftLeft( arr, n)

{
	for (int i = 0; i < n; i++)
	{

		for (int i = 0; i < n; i++)
		{
			cout << arr[i];

		}
		cout << endl;

		//����� ������� �����

		int namber_of_shifts;

		cout << "������� ���������� �������: "; cin >> namber_of_shifts;
		for (int i = 0; i < namber_of_shifts; i++)
		{
			int buffer = arr[0];
			for (int i = 0; i < n; i++)
			{
				arr[i - 1] = arr[i];
			}
			arr[i - 1] = buffer;

		}

		

	
			//����� ���������� ������� �� �����

			for (int i = 0; i < n; i++)
			{

				cout << arr[i];

			}
			cout << endl;

	}

}

void shiftRight( arr, n)
{
	for (int i = 0; i < n; i++)
	{

		for (int i = 0; i < n; i++)
		{
			cout << arr[i];

		}
		cout << endl;

		//����� ������� ������

		int namber_of_shifts;

		cout << "������� ���������� �������: "; cin >> namber_of_shifts;
		for (int i = 0; i < namber_of_shifts; i++)
		{
			int buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--)
			{

				arr[i] = arr[i - 1];

			}
			arr[0] = buffer;
			cout << endl;


			//����� ���������� ������� �� �����

			for (int i = 0; i < n; i++)
			{

				cout << arr[i];

			}
			cout << endl;

		}
	}

}
