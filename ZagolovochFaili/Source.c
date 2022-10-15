#include "Header.h"

int main(void) {
	system("chcp 1251>null");
	while (1==1)
	{
		int num;
		while (1 == 1)
		{
			printf("Выберите действие: \n1 -> Сумма чисел\n2 -> Разность чисел\n");
			scanf_s("%d", &num);
			if (num == 1 || num ==2)
				break;
			else {
				system("CLS");
				printf("\nНекорректные значения! Повторите ввод\n\n");
			}
		}
		if (num == 1) 
		{
			system("CLS");
			int a, b;
			printf("Введите 1 число: ");
			scanf_s("%d", &a);
			printf("Введите 2 число: ");
			scanf_s("%d", &b);
			printf("Сумма числа %d и %d = %d \n", a, b, Summa(a,b));
			system("pause");
			system("CLS");
		}
		if (num == 2)
		{
			system("CLS");
			int a, b;
			printf("Введите 1 число: ");
			scanf_s("%d", &a);
			printf("Введите 2 число: ");
			scanf_s("%d", &b);
			printf("Разность чисел %d и %d = %d \n", a, b, Raznost(a, b));
			system("pause");
			system("CLS");
		}
	}
}