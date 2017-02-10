#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <Windows.h>

#define MASS_SIZE 10

int funciiaDlaSozdaniiaMassiva(int massiv[MASS_SIZE]);
int funciiaDlaSortirovkiMassiva(int massiv[MASS_SIZE]);
int funciiaDlaVivodaMassiva(int massiv[MASS_SIZE]);

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int massiv[MASS_SIZE];
	printf("Здравствуйту. Программа сортировки методом пузырька. \nДождитесь загрузки программы.\n");
	char blockZagruaki = 187;
	Sleep(1000);
	printf("Загрузка: ");
	for (int i = 0; i < 65; i++)
	{
		Sleep(100);
		printf("%c", blockZagruaki);
	}
	Sleep(200);
	printf("\nВыполнено. Переход к программе.");
	Sleep(1500);
	system("cls");
	printf("      Начальный массив: ");
	funciiaDlaSozdaniiaMassiva(massiv);
	Sleep(1000);
	printf("Кол-во произведенных замен: %i\n", funciiaDlaSortirovkiMassiva(massiv));
	printf("Отсартированный массив: ");
	funciiaDlaVivodaMassiva(massiv);
	printf("\n");
}

int funciiaDlaSozdaniiaMassiva(int massiv[])
{
	for (int i = 0; i < MASS_SIZE; i++)
	{
		massiv[i] = rand() % 10;
		Sleep(150);
		printf("%i ", massiv[i]);
	}
	printf("\n");
}

int funciiaDlaSortirovkiMassiva(int massiv[])
{
	int count = 0;
	int chisloDlaZameni;
	for (int i = 0; i < MASS_SIZE - 1; i++)
	{
		for (int j = 0; j < MASS_SIZE - 1 - i; j++)
		{
			if (massiv[j] > massiv[j + 1])
			{
				chisloDlaZameni = massiv[j];
				massiv[j] = massiv[j + 1];
				massiv[j + 1] = chisloDlaZameni;
				count++;
			}
		}
	}
	return count;
}

int funciiaDlaVivodaMassiva(int massiv[])
{
	for (int i = 0; i < MASS_SIZE; i++)
	{
		Sleep(150);
		printf("%i ", massiv[i]);
	}
}
