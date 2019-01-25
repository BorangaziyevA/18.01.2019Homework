#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task10()
{
	int A[15] = { 0 };

	for (size_t i = 0; i < 15; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("A[%d] = %d\n", i, A[i]);
	}
	printf("\n\n\n\n\n\n");

	for (size_t i = 0; i < 15; i++)
	{
		if (A[0]<A[i])
		{
			printf("A[%d] = %d\n",i,A[i]);
		}

	}
}

void task9()
{
	int A[12] = { 0 };
	int arif, sum = 0;

	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("A[%d] = %d\n", i, A[i]);
		sum = sum + A[i];
	}

	arif = sum / 12;

	A[4] = arif;
	
	for (size_t i = 0; i < 12; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}
}

void task8()
{
	int A[14] = { 0 };

	for (size_t i = 0; i < 14; i++)
	{
		A[i] = 0 + rand() % 100;

		printf("A[%d] = %d\n");
	}

	printf("\n\n\n\n\n");

	for (size_t i = 0; i < 14; i++)
	{


		if (A[i] %2 == 0)
		{
			printf("A[%d] = %d\n", i,A[i]);
		}
	}
}

void task7()
{
	int A[20] = { 0 };

	for (size_t i = 0; i < 20; i++)
	{
		A[i] = 0 + rand() % 7;

		if (A[i]<3)
		{
			printf("Команда номер %d\n", i);
		}
	}
}

void task6()
{
	int A[10] = { 0 };

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = -10 + rand() % 20;
		if (A[i]>= 0)
		{
			printf("%d\n", A[i]);
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
		if (A[i] < 0)
		{
			printf("%d\n", A[i]);
		}
	}
}

void task5()
{
	printf("Задачу понял, но проблема в том, что я не знаю как это сделать. Если в случае а.Надо уменьшить все элементы на 20, то все элементы меняют своё значение.Я не знаю как сделать так чтобы у всех заданий(а.б.с.) были одинаковы элементы.\n");

	printf("Если я плохо объяснил то вот пример А[0] = 15, после задания а. Я уменьшил его на 20 A[0] = -5 и теперь всегда это значение\n\n\n");
	//int A[10] = { 0 };
	//int B;
	//printf("Введите число В = ");
	//scanf_s("%d", &B);

	//for (size_t i = 0; i < 20; i++)
	//{
	//	A[i] = 10 + rand() % 40;
	//	printf("A[%d] = %d\n", i, A[i]);
	//}
	//printf("\n Все числа уменьшены на 20 \n");
	//for (size_t i = 0; i < 20; i++)
	//{
	//	A[i] = A[i] - 20;
	//	printf("A[%d] = %d\n", i, A[i]);
	//}
	//printf("\n Все числа умножены на последний элемент \n");
	//for (size_t i = 0; i < 20; i++)
	//{
	//	A[i] = A[i] * A[19];
	//	printf("A[%d] = %d\n", i, A[i]);
	//}
	//printf("\n Все числа увеличены на B \n");
	//for (size_t i = 0; i < 20; i++)
	//{
	//	A[i] = A[i] + B;
	//	printf("A[%d] = %d\n", i, A[i]);
	//}
}

void task4()
{
	int A[20] = { 0 };
	int s, k;

	for (size_t i = 0; i < 20; i++)
	{
		A[i] = -10 + rand() % 20;
		printf("%d, ", A[i]);
	}

	printf("\n\n\n\n\n");

	printf("Введите индекс массива, которого вы хотите проверить на положительность:");
	scanf_s("%d", &s);

	if (s>20 || s<-10)
	{
		printf("Ошибка!\n");
	}
	else {
		printf("A[%d] = %d\n", s, A[s]);
		if (A[s] < 0)
		{
			printf("Это число отрицательное\n");
		}
		else
			printf("Это число положительно\n");
	}
	
	printf("\n\n\n\n\n");

	printf("Введите индекс массива, которого вы хотите проверить на четность:");
	scanf_s("%d", &k);

	if (k > 20 || k < -10)
	{
		printf("Ошибка!\n");
	}
	else {
		printf("A[%d] = %d\n", k, A[k]);
		if (A[k] %2 == 0)
		{
			printf("Это число четное\n");
		}
		else
			printf("Это число нечетное\n");
	}

	if (((k > 20) || (k < -10))|| ((s<-10) || (s>20)))
	{
		printf("Ошибка!\n");
	}
	else if (A[k]>A[s])
	{
		printf("A(k)[%d] = %d \t A(s)[%d] = %d\n",k,A[k],s,A[s]);
		printf("k > s\n");
	}
	else if (A[k] == A[s])
	{
		printf("A(k)[%d] = %d \t A(s)[%d] = %d\n", k, A[k], s, A[s]);
		printf("k = s\n");
	}
	else {
		printf("A(k)[%d] = %d \t A(s)[%d] = %d\n", k, A[k], s, A[s]);
		printf("k < s\n");
	}
}

void task3()
{
const int N = 8;

	int A[N] = { 0 };
	int x;

	for (size_t p = 0; p < N; p++)
	{
		A[p] = 0 + rand() % 10;
		printf(" %d, ", A[p]);
	}

	printf("\n\n\n\n\n");

	for (size_t i = 1; i <N; i++)
	{
		for (size_t j = 1; j < N; j++) {
			if (A[j] < A[j - 1]) {
				x = A[j];
				A[j] = A[j - 1];
				A[j - 1] = x;
			}
			}
		}
	for (size_t i = 0; i < N; i++)
	{
		printf(" %d, ", A[i]);
	}

	printf("\n\n\n\n\n");

	for (size_t i = 1; i < N; i++)
	{
		for (size_t j = 1; j < N; j++) {
			if (A[j] > A[j - 1]) {
				x = A[j];
				A[j] = A[j - 1];
				A[j - 1] = x;
			}
		}
	}

	for (size_t i = 0; i < N; i++)
	{
		printf(" %d, ", A[i]);
	}
	}

void task2()
{
	int A[20] = { 0 };

	for (size_t i = 0; i < 20; i++)
	{
		A[i] = 50 + rand() % 50;

		printf("%d. Вес %d\n", i, A[i]);
	}
}

void task1()
{
	int M[10] = { 0 };

	for (size_t i = 0; i < 10; i++)
	{
		M[i] = 0 + rand() % 100;

		printf("M[%d] = %d\n", i, M[i]);
	}
}

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task, flag;

	do
	{
		printf("Введите номер задачи:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		case 7:task7(); break;
		case 8:task8(); break;
		case 9:task9(); break;
		case 10:task10(); break;
		}

		printf("Хотите подолжить?1/0");
		scanf_s("%d", &flag);

		system("cls");

	} while (flag == 1);
}