#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES   
#include <math.h>


using namespace std;

int main()
{
	SetConsoleCP(1251); //Для кирилиці
	SetConsoleOutputCP(1251);

	double b, x, y, z; //Оголошення невідомих 
	printf("Введіть x: "); //Вивід тексту
	scanf_s("%lf", &x); //Введення тексту
	printf("Введіть y: "); //Вивід тексту
	scanf_s("%lf", &y); //Введення тексту
	printf("Введіть z: "); //Вивід тексту
	scanf_s("%lf", &z); //Введення тексту


	b = (sqrt(abs(x - 6 * y)) / z) + pow((cos(pow((x + z), 3))), 2) + sin((45 * M_PI) / 180); //Обчислення прикладу
	printf("Відповідь: ");
	printf("%lf", b); // Виведення відповіді 

	system("pause"); //Для того що консоль не закривалась
	return 0; // Повідомляє про успішне завершення програми без помилок
}
