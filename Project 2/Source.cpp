#include "Header.h" //Бібліотека прототипів функцій
#include <iostream> //Бібліотека потокового введення і виведення
#include <Windows.h> //Бібліотека яка потрібна для кирилиці
#include <math.h>  //Бібліотека математичних формул 
#include <cstdlib> // для функції itoa

using namespace std;


int main()
{
	SetConsoleCP(1251); // Для кирилиці
	SetConsoleOutputCP(1251);
	int res = 0;
	char a1[] = " "; //Перше число;
	cout << "Введіть перше число: ";
	cin >> a1;
	int m;
	cout << "В якій системі числення це число? (Від 2 до 36) ";
	cin >> m;
	
	res = SysConTo10(a1, m); //Функція що перетворює число(a1) з m-ої системи числення в 10тичну систему

	int a2;
	cout << "Введіть систему числення яку хочите отримати: (Від 2 до 36) ";
	cin >> a2;
		
	char A[255];         // Цей блок містить масив 0123456789ABCDEFJHKLMNOPQRSTUVWXYZ
	_itoa_s(res, A, a2);  // функція яка бере дані(а1 число яки ми задали) 
	cout << "Відповідь: "<< A << endl;    // a2 число яке буде у нас відповідати за систему числення(від 2 до 36) і перетворює їх наше число в потрібну систему числення
	
	///////////////////////////
	int res1 = 0;
	char b1[] = " "; //Перше число;
	cout << "Введіть друге число: ";
	cin >> b1;
	int m1;
	cout << "В якій системі числення це число? (Від 2 до 36) ";
	cin >> m1;

	int b2;
	cout << "Введіть систему числення яку хочите отримати: (Від 2 до 36) ";
	cin >> b2;

	res1 = SysConTo10(b1, m1);

	char B[255];
	_itoa_s(res1, B, b2);  // функція яка бере дані(а1 число яки ми задали) 
	cout << "Відповідь: " << B << endl;

	GetAct(res,res1);
	
	int choice;
	cout << "Бажаєте продовжити працювати з програмою? Натисніть: \n";
	cout << "\t1 - Якщо так\n\t2 - Якщо ні" << endl;
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:cout << "Що ж, продовжимо работу :( " << endl; return main(); break;
		case 2:cout << "Goodbye! :)" << endl;  return 0; break;

		default:cout << "Упс..Схоже ви помились у виборі дії. Спробуйте знову" << endl; cin.clear(); cin.ignore();
			break;
		}
	}
	
	
	system("pause");
	return 0;
}