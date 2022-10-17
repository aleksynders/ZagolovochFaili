#include "Header.h"

int main(void) {
	system("chcp 1251>null");
	while (1==1)
	{
		int num;
		while (1 == 1)
		{
			printf("Выберите действие: \n1 -> Сумма чисел\n2 -> Разность чисел\n3 -> Произведение чисел\n4 -> Частное чисел\n5 -> Объединение двух строк\n6 -> Преобразование числа в строку и строку в число\n7 -> Завершить программу\n");
			scanf_s("%d", &num);
			if (num == 1 || num ==2 || num == 3 || num == 4 || num == 5 || num == 6 || num == 7)
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
		if (num == 3)
		{
			system("CLS");
			int a, b;
			printf("Введите 1 число: ");
			scanf_s("%d", &a);
			printf("Введите 2 число: ");
			scanf_s("%d", &b);
			printf("Произведение чисел %d и %d = %d \n", a, b, Proizved(a, b));
			system("pause");
			system("CLS");
		}
		if (num == 4)
		{
			system("CLS");
			int a, b;
			printf("Введите 1 число: ");
			scanf_s("%d", &a);
			printf("Введите 2 число: ");
			scanf_s("%d", &b);
			printf("Частное чисел = %.2f \n", Chastnoe(a, b));
			system("pause");
			system("CLS");
		}
		if (num == 5)
		{
			system("CLS");
			char* a = "строка1 ";
			char* b = "строка2";
			printf("%s\n", Soedinenie(a, b));
			system("pause");
			system("CLS");
		}
		if (num == 6)
		{
			system("CLS");
			char* s = "423412";
			int num = ConvertToInt(s);
			printf("Число: %d\n", num);
			char* str = ConvertToString(num);
			printf("Строка: %s\n", str);
			system("pause");
			system("CLS");
		}
		if (num == 7)
		{
			break;
		}
	}
}

char* Soedinenie(char* a, char* b)
{
	int i = 0;
	int j = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	while (b[j] != '\0')
	{
		j++;
	}
	char* c = calloc(i + j, sizeof(char));
	for (int g = 0; g < i; g++)
	{
		c[g] = a[g];
	}
	for (int g = 0; g < j; g++)
	{
		c[g + i] = b[g];
	}
	c[i + j] = '\0';
	return c;
}

int ConvertToInt(char* a)
{
	int num = atof(a);
	return(num);
}

char* ConvertToString(int a)
{
	int i = 0;
	int num = a;
	if (a < 0)
	{
		i++;
	}
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	char* str = calloc(i, sizeof(char));
	_itoa(num, str, 10);
	return(str);
}

//int Summa(int a, int b)
//{
//	return a + b;
//}
//
//int Raznost(int a, int b)
//{
//	return a - b;
//}
//
//int Proizved(int a, int b)
//{
//	return a * b;
//}
//
//float Chastnoe(int a, int b)
//{
//	return (float)a / (float)b;
//}