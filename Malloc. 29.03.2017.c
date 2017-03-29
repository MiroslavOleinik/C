//Задание 1:
//Написать программу, которая дает пользователю ввести 5 фамилий студентов и хранит их
//в динамическом массиве, а затем сортирует их по возрастанию.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define MASS_SIZE 5

char** allocLlist(int massSize);
void printArray(char** lastNameList);

int main()
{
	setlocale(LC_ALL, "Rus");
	char** lastNameList = allocLlist(5);
	for (int j = 0; j < MASS_SIZE; j++)
	{ 
		printf("Введите фамилии студентов: ");
		fgets(lastNameList[j], 50, stdin);
	}
	char* buffForChange;
	for (int i = 0; i < MASS_SIZE - 1; i++)
	{
		for (int j = 0; j < MASS_SIZE - 1 - i; j++)
		{
			if (strcmp(lastNameList[j], lastNameList[j + 1]) == 1)
			{
				buffForChange = lastNameList[j];
				lastNameList[j] = lastNameList[j + 1];
				lastNameList[j + 1] = buffForChange;
			}
		}
	}
	printArray(lastNameList);
}

char** allocLlist(int massSize)
{
	char** lastNameList = malloc(sizeof(char*));
	for (int i = 0; i < massSize; i++)
	{
		lastNameList[i] = malloc(50 * sizeof(char));
	}
	return lastNameList;
}

void printArray(char** lastNameList)
{
	for (int i = 0; i < MASS_SIZE; i++)
	{
		printf("#%i: %s", i + 1, lastNameList[i]);
	}
}
