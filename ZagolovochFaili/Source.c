#include "Header.h"

int main(void) {
	system("chcp 1251>null");
	while (1==1)
	{
		int num;
		while (1 == 1)
		{
			printf("�������� ��������: \n1 -> ����� �����\n2 -> �������� �����\n");
			scanf_s("%d", &num);
			if (num == 1 || num ==2)
				break;
			else {
				system("CLS");
				printf("\n������������ ��������! ��������� ����\n\n");
			}
		}
		if (num == 1) 
		{
			system("CLS");
			int a, b;
			printf("������� 1 �����: ");
			scanf_s("%d", &a);
			printf("������� 2 �����: ");
			scanf_s("%d", &b);
			printf("����� ����� %d � %d = %d \n", a, b, Summa(a,b));
			system("pause");
			system("CLS");
		}
		if (num == 2)
		{
			system("CLS");
			int a, b;
			printf("������� 1 �����: ");
			scanf_s("%d", &a);
			printf("������� 2 �����: ");
			scanf_s("%d", &b);
			printf("�������� ����� %d � %d = %d \n", a, b, Raznost(a, b));
			system("pause");
			system("CLS");
		}
	}
}