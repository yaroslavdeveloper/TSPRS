#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

void draw()
{
	for (int i = 0; i < 50; i++)
	{
		cout << "*";
	}

	cout << endl;
}

// Задание 1
void task_one(float x) 
{
	float result = pow((x + 1), 2) + 3 * (x + 1);

	draw();
	
	cout << "Ответ для x = " << x << ": " << result << endl;
}

// Задание 2
void task_two(int num)
{
	draw();

	if (num % 2 == 0) 
	{
		cout << "Число " << num << " - чётное." << endl;
	}
	else {
		cout << "Число " << num << " - нечётное." << endl;
	}
}

// Задание 3
void task_three(float x1, float x2, float x3)
{
	float sum = 2 * x1 + (x2 - 3) + x3 * x3;
	
	draw();
	
	cout << "Сумма = " << sum << endl;
}

// Задание 4
void task_four(float y1, float y2, float y3)
{
	float ave = (y1 + y2 + y3) / 3;
	float sub = 2 * (y1 + y3) - 3 * y2;

	draw();
	
	cout << "Среднеее арифметическое = " << ave << endl;
	cout << "Разность = " << sub << endl;
}

// Задание 5 КОНВЕРТЕР СТАРТ *****************************************
// Расстояние
void distance_convert(float dis)
{
	draw();

	cout << "В " << dis << " м:" << endl;
	cout << dis * 100 << " см," << endl;
	cout << dis * 10 << " дм," << endl;
	cout << dis * 0.001 << " км," << endl;
	cout << dis * 0.00094 << " вёрст." << endl;
}

// Объём
void amount_convert(float v)
{
	draw();

	cout << "В " << v << " литре (ах):" << endl;
	cout << v << " куб. дм," << endl;
	cout << v * 0.001 << " куб. м," << endl;
	cout << v * 0.264172 << " амер. гал.," << endl;
	cout << v * 0.22 << " англ. гал.," << endl;
	cout << v * 0.008648 << " баррелей." << endl;
}

// Площадь
void square_convert(float s)
{
	draw();

	cout << "В " << s << " квадратном (ых) метре (ах):" << endl;
	cout << s * 0.0001 << " гектар," << endl;
	cout << s * 0.00025 << " акров." << endl;
}

// Температура
void  temp_convert(float t)
{
	draw();

	cout << "В " << t << " градусе (ах):" << endl;
	cout << t + 32 << " град. фаренгейта," << endl;
	cout << t + 273.15 << " кельвинов." << endl;
	cout << t * 0.8 << " град. реомюра." << endl;
}

// Столовые предметы
void kitchen_convert(float ts) 
{
	draw();

	cout << "В " << ts << " чайной (ых) ложке (ах):" << endl;
	cout << ts * 0.33 << " ст. лож.," << endl;
	cout << ts * 0.025 << " стакана," << endl;
	cout << ts * 0.1 << " рюмки." << endl;
}

// Задание 5 КОНВЕРТЕР КОНЕЦ *****************************************

// Задание 6
void task_six(float c, float p)
{
	float sum1, sum2;

	sum1 = 0.3 * c + 0.4 * p;
	sum2 = 3 * (1.8 * c + 2 * p);

	cout << "1 кг конфет - " << c << endl;
	cout << "1 кг печенья - " << p << endl;

	cout << "Стоимость 1ой покупки: " << sum1 << endl;
	cout << "Стоимость 2ой покупки: " << sum2 << endl;
}

int main()
{
	// Русский язык в консоли
	setlocale(0, "Russian");

	// Номер задания
	int choice;

	// Для задания 1
	float x;

	// Для задания 2
	int num;

	// Для задания 3
	float x1, x2, x3;

	// Для задания 4
	float y1, y2, y3;
	
	// Для задания 5
	int convert_choice;
	float metr, litr, kv_metr, grad, teaspoon;

	// Для задания 6
	float pech_kg, con_kg;

	for (;;)
	{
		cout << endl << "Введите номер задания (1-6): ";
		cin >> choice;

		switch (choice) 
		{
			case 1:
				cout << "Введите x: ";
				cin >> x;

				system("cls");

				task_one(x);

				break;
			case 2:
				cout << "Введите целое число: ";
				cin >> num;

				system("cls");

				task_two(num);

				break;
			case 3:
				cout << "Введите 3 числа:" << endl;
				
				cout << "x1 = ";
				cin >> x1;
				
				cout << endl << "x2 = ";
				cin >> x2;

				cout << endl << "x3 = ";
				cin >> x3;

				system("cls");

				task_three(x1, x2, x3);
				
				break;
			case 4:
				cout << "Введите 3 числа:" << endl;

				cout << "y1 = ";
				cin >> y1;

				cout << endl << "y2 = ";
				cin >> y2;

				cout << endl << "y3 = ";
				cin >> y3;

				system("cls");

				task_four(y1, y2, y3);

				break;
			case 5:
				cout << "Выберите конвертер величин:" << endl;
				cout << "1. Конвертер длин." << endl;
				cout << "2. Конвертер объёмов." << endl;
				cout << "3. Конвертер площадей." << endl;
				cout << "4. Конвертер температур." << endl;
				cout << "5. Конвертер кулинарии." << endl;

				cin >> convert_choice;

				system("cls");

				switch (convert_choice)
				{
					case 1:
						cout << "Конверетер величин." << endl << "Введите кол-во метров: ";
						cin >> metr;

						system("cls");

						distance_convert(metr);
						
						break;
					case 2: 
						cout << "Конверетер объёмов." << endl << "Введите кол-во литров: ";
						cin >> litr;

						system("cls");

						amount_convert(litr);

						break;
					case 3:
						cout << "Конверетер площадей." << endl << "Введите кол-во квадратных метров: ";
						cin >> kv_metr;

						system("cls");

						square_convert(kv_metr);

						break;
					case 4:
						cout << "Конверетер температур." << endl << "Введите кол-во градусов: ";
						cin >> grad;

						system("cls");

						temp_convert(grad);

						break;
					case 5:
						cout << "Конверетер кулинарии." << endl << "Введите кол-во чайных ложек: ";
						cin >> teaspoon;

						system("cls");

						kitchen_convert(teaspoon);

						break;
					default:
						break;
				}
				
				break;
			case 6:
				cout << "Введите цену за 1 кг конфет: ";
				cin >> con_kg;

				cout << "Введите цену за 1 кг печенья: ";
				cin >> pech_kg;

				system("cls");

				task_six(con_kg, pech_kg);

				break;
			default:
				system("cls");
				cout << "Попробуйте ещё раз !" << endl;
				
				break;
		}
	}
}