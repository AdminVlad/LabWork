#include "Header.h"
#include <iostream>
#include "windows.h"
#include <cstdlib>

using namespace std;

void Sum(int a1, int a3)
{
	int result = a1 + a3;
	int var1;
	cout << "������ ������� �������� ��� ������ ��������: (³� 2 �� 36) ";
	cin >> var1;

	char A[35];
	_itoa_s(result, A, var1);
	cout << "³������: " << A << endl;
}
void Subtr(int a1, int a3)
{
	int result = a1 - a3;
	int var1;
	cout << "������ ������� �������� ��� ������ ��������: (³� 2 �� 36) ";
	cin >> var1;

	char A[35];
	_itoa_s(result, A, var1);
	cout << "³������: " << A << endl;
}
void Mult(int a1, int a3)
{
	int result = a1 * a3;
	int var1;
	cout << "������ ������� �������� ��� ������ ��������: (³� 2 �� 36) ";
	cin >> var1;

	char A[35];
	_itoa_s(result, A, var1);
	cout << "³������: " << A << endl;
}
void Subdiv(int a1, int a3)
{
	int result = a1 / a3;
	int var1;
	cout << "������ ������� �������� ��� ������ ��������: (³� 2 �� 36) ";
	cin >> var1;

	char A[35];
	_itoa_s(result, A, var1);
	cout << "³������: " << A << endl;
}
int GetAct(int a1, int a3)
{
	int selectAct;
	cout << "��� �� �� ������ ��������?\n��������:\n";
	cout << "\t1 - ����\n \t2 - ³�������\n \t3 - ��������\n \t4 - ĳ�����" << endl;

	while (true)
	{
		cin >> selectAct;
		switch (selectAct)
		{
		case 1:cout << "����: "; Sum(a1, a3); return 0; break;
		case 2:cout << "³�������: "; Subtr(a1, a3); return 0; break;
		case 3:cout << "��������: "; Mult(a1, a3); return 0; break;
		case 4:cout << "ĳ�����: "; Subdiv(a1, a3); return 0; break;

		default:cout << "���..����� �� �������� � ����� 䳿. ��������� �����" << endl; cin.clear(); cin.ignore();
			break;
		}
	}

}
int SysConTo10(char a1[], int m)
{
	float k, res = 0, st = 0, tmp = strlen(a1);
	for (int i = tmp - 1; i >= 0; i--) {
		switch (a1[i])
		{
		case 'a': k = 10;
			break;
		case 'b': k = 11;
			break;
		case 'c': k = 12;
			break;
		case 'd': k = 13;
			break;
		case 'e': k = 14;
			break;
		case 'f': k = 15;
			break;
		default: k = (int)a1[i];
			break;
		}
		if (k >= 48)
		{
			k -= 48;
		}
		if (k >= m)
		{
			cout << "����� �� ���� ���������� � ��� ������ ��������.\n";

			break;

		}
		else if (k != m)
		{
			res += pow(m, st) * k;
			st++;
		}
	}
	return res;
}
