// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void bubblesort(int *arr, int n)
{
	cout << "Отсортированный по убыванию массив: " << endl;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{

				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
int bsearch(int *arr, int X, int n)
{
	int index=0;
	cout << "Индекс первого элемента массива, строго меньшего Х: " << endl;
	for (int j = 0; j < n; j++)
	{
		if (arr[j] < X)
		{
			index = j;
			cout << endl;
			break;
		}		
	}
	if (index < 0)
		return -1;
	return index;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int *arr;
	int n, x, m;
	srand(time(0));
	cout << "Введите размерность массива: " << endl;
	cin >> n;
	if (n <= 0) {
		cerr << "Неверное значение размерности массива!" << endl;
		return 1;
	}
	arr = new int[n];
	cout << "Выберите вариант заполнения массива: " << endl;
	cout << "		1. Случайными числами." << endl;
	cout << "		2. Ввод значений вручную. " << endl;
	cin >> m;
	switch (m)
	{ case 1:
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
		}
		bubblesort(arr, n);
		cout << endl;
	break;
	case 2:
		cout << "Введите элементы массива: " << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			
		}
		bubblesort(arr, n);
		cout << endl;
	default:
		break;
	}
	cout << "Введите число X: " << endl;
	cin >> x;
	for (int i=0; i<n; i++)
	if (arr[i] > x)
	{
	
		break;
	}
	cout<<bsearch(arr, x, n)<<endl;
	delete[] arr;
	system("pause > NULL");
  
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
