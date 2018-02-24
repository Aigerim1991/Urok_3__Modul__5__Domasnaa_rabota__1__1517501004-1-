#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int N;
	do
	{
		cout << "Ввести номер задания: " << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			int a[9][7], temp = 0;
			int b[25] = { 0 }, k = 0;
			cout << "Двухмерный массив:" << endl;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					a[i][j] = 1 + rand() % 60;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "Одномерный массив: " << endl;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					if ((a[i][j] >= 1) && (a[i][j] <= 20))
					{
						b[k] = a[i][j];
						k++;
					}
				}
			}
			for (int i = 0; i <25; i++)
			{
				cout << b[i] << "\t";
			}
			cout << endl;
			cout << "Сортировка по возрастанию: " << endl;
			for (int i = 0; i < 25; i++)
			{
				for (int j = 24; j >= 0; j--)
				{
					if (b[j] < b[j - 1])
					{
						temp = b[j];
						b[j] = b[j - 1];
						b[j - 1] = temp;
					}
				}

			}
			for (int i = 0; i < 25; i++)
			{
				cout << b[i] << "\t";
			}
			cout << endl;
		}
	break;
		case 2:
		{
			int r[9], kol = 0,max=0,count=0;
			for (int i = 0; i < 9; i++)
			{
				r[i] = -5 + rand() % 100;
				cout << r[i] << "\t";
			}
			cout << endl;
	
			for (int i = 0; i < 9; i++)
			{
				count = 0;
				if ((i % 1 == 0))
				{
					count++;
				}
			}
			max = r[0];
			for (int i = 0; i < 9; i++)
			{
				if (((r[i]) % 1==0) >max)
				{
					count = i;
						 max = r[i];

				}

                    
			}
			cout <<"Индекс "<< count <<" наибольшего "<<max <<" количество нечетных положительных элементов " << endl;

		}
		break;
		case 3:
		{
			int a[6][6] = { { 0 } ,{ 0 } }, sum=0, k=0, b[36] = { 0 };
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					a[i][j] =-1 + rand() % 50;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
		cout << "Одномерный массив, состоящий из сумм цифр элементов исходного массива: " << endl;
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (a[i][j] >0)
				{
					sum += a[i][j];
					b[k]=sum;
					k++;
				}
			}
		}
		for (int i = 0; i < 36; i++)
		{
			cout << b[i] << "\t";
		}
		cout << endl;	
		}
			break;
		case 4:
		{
			int c[15], sum = 0;
			for (int i = 0; i < 15; i++)
			{
				c[i] = -5 + rand() % 100;
				cout << c[i] << "\t";
			}
			cout << endl;
			for (int i = 0; i < 15; i++)
			{
				if (i % 2 == 0)
				{
					sum += i;
				}
		}
			cout << "Cумма чисел с четными индексами"<<sum << endl;
		
			for (int i = 0; i < 15; i++)
			{	
				sum = 0;
				if (i % 1== 0)
				{
					sum += i;
				}
			}
			cout << "Cумма чисел с  не четными индексами" << sum << endl;
			}
		break;
		case 5:
		{
			int a[14], kol = 0, f = 0;
			for (int i = 0; i < 14; i++)
			{
				a[i] = 1 + rand() % 30;
				cout << a[i] << "\t";
			}
			cout << endl;
		cout << "Поменять местами первую половину со второй: " << endl;
			int k = 7;
			for (int i = 0; i < k; i++)
			{
				f = a[i];
				a[i] = a[i + k];
				a[i + k] = f;
				kol++;
			}
			for (int i = 0; i < 14; i++)
			{
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Количество произведенных перестоновок: " << kol << endl;
			}
		break;
		case 6:
		{
			int a[10],kol=0;
		
		for (int i = 0; i<10; i++)
		{	
			a[i] = 1 + rand() % 30;
				cout << a[i] << "\t";
		}
		cout << endl;
		
		for (int i = 1; i < 9; i++)
		{
			if (a[i]<a[i - 1] && a[i]<a[i + 1])
			{
				kol++;
			}
		}

cout <<"Количество локальных максимумов:"<< kol << endl;
		  }
				break;
		case 7:
		{
			int a[5][6], temp = 0, min = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					a[i][j] = 1 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "Сортировка двухмерного массива по убыванию: " << endl;
			int *t = (int*)a;
			for (int i = 0; i < 29; i++)
			{
				for (int j = i + 1; j < 30; j++)
				{
					if (t[j] > t[i])
					{
						temp = t[i];
						t[i] = t[j];
						t[j] = temp;
					}
				}
			}
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
		
		}
		break;
		default:
			break;	
		}
		
	
	} while (N > 0);


























}