#include "Header.h" //��������� ��������� �������
#include <iostream> //��������� ���������� �������� � ���������
#include <Windows.h> //��������� ��� ������� ��� ��������
#include <math.h>  //��������� ������������ ������ 
#include <cstdlib> // ��� ������� itoa

using namespace std;


int main()
{
	SetConsoleCP(1251); // ��� ��������
	SetConsoleOutputCP(1251);
	int res = 0;
	char a1[] = " "; //����� �����;
	cout << "������ ����� �����: ";
	cin >> a1;
	int m;
	cout << "� ��� ������ �������� �� �����? (³� 2 �� 36) ";
	cin >> m;
	
	res = SysConTo10(a1, m); //������� �� ���������� �����(a1) � m-� ������� �������� � 10����� �������

	int a2;
	cout << "������ ������� �������� ��� ������ ��������: (³� 2 �� 36) ";
	cin >> a2;
		
	char A[255];         // ��� ���� ������ ����� 0123456789ABCDEFJHKLMNOPQRSTUVWXYZ
	_itoa_s(res, A, a2);  // ������� ��� ���� ���(�1 ����� ��� �� ������) 
	cout << "³������: "<< A << endl;    // a2 ����� ��� ���� � ��� ��������� �� ������� ��������(�� 2 �� 36) � ���������� �� ���� ����� � ������� ������� ��������
	
	///////////////////////////
	int res1 = 0;
	char b1[] = " "; //����� �����;
	cout << "������ ����� �����: ";
	cin >> b1;
	int m1;
	cout << "� ��� ������ �������� �� �����? (³� 2 �� 36) ";
	cin >> m1;

	int b2;
	cout << "������ ������� �������� ��� ������ ��������: (³� 2 �� 36) ";
	cin >> b2;

	res1 = SysConTo10(b1, m1);

	char B[255];
	_itoa_s(res1, B, b2);  // ������� ��� ���� ���(�1 ����� ��� �� ������) 
	cout << "³������: " << B << endl;

	GetAct(res,res1);
	
	int choice;
	cout << "������ ���������� ��������� � ���������? ��������: \n";
	cout << "\t1 - ���� ���\n\t2 - ���� �" << endl;
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:cout << "�� �, ���������� ������ :( " << endl; return main(); break;
		case 2:cout << "Goodbye! :)" << endl;  return 0; break;

		default:cout << "���..����� �� �������� � ����� 䳿. ��������� �����" << endl; cin.clear(); cin.ignore();
			break;
		}
	}
	
	
	system("pause");
	return 0;
}