#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES   
#include <math.h>


using namespace std;

int main()
{
	SetConsoleCP(1251); //��� ��������
	SetConsoleOutputCP(1251);

	double b, x, y, z; //���������� �������� 
	printf("������ x: "); //���� ������
	scanf_s("%lf", &x); //�������� ������
	printf("������ y: "); //���� ������
	scanf_s("%lf", &y); //�������� ������
	printf("������ z: "); //���� ������
	scanf_s("%lf", &z); //�������� ������


	b = (sqrt(abs(x - 6 * y)) / z) + pow((cos(pow((x + z), 3))), 2) + sin((45 * M_PI) / 180); //���������� ��������
	printf("³������: ");
	printf("%lf", b); // ��������� ������ 

	system("pause"); //��� ���� �� ������� �� �����������
	return 0; // ��������� ��� ������ ���������� �������� ��� �������
}
