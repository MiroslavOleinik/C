#include <stdio.h>
#include <locale.h>

#define ARRAY_LENGTH 1024

enum ChooseCase
{
	UpperCase = 1,
	LowerCase
};

int calcArrayLength(char* str);
void makeChoiseBetweenUpperAndLowerCase();
void makeUpperCase(char* str);
void makeLowerCase(char* str);
void printStringsArray(char* str);


int main()
{
	setlocale(LC_ALL, "rus");
	char str[ARRAY_LENGTH] = "Hello";
	fgets(str, ARRAY_LENGTH, stdin);
	makeChoiseBetweenUpperAndLowerCase(str);
	printStringsArray(str);
	
}

void makeChoiseBetweenUpperAndLowerCase(char* str)
{
	enum ChooseCase chooseCase;
	printf("Сделайате выбор:\n1. Большие буквы\n2. Маленькие буквы\n");
	scanf("%i", &chooseCase);
	switch (chooseCase)
	{
	case UpperCase:
		makeUpperCase(str);
		break;
	case LowerCase:
		makeLowerCase(str);
		break;
	default:
		break;
	}
}

int calcArrayLength(char* str)
{
	int arrayLength = 0;
	while (*str++ != 0)
	{
		arrayLength++;
	}
	return arrayLength - 1;
}

void makeUpperCase(char* str)
{
	for (int i = 0; str[i] != 0; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			
			str[i] -= 32;
		}
	}
}

void makeLowerCase(char* str)
{
	for (int i = 0; str[i] != 0; i++)
	{ 
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
}

void printStringsArray(char* str)
{
	printf("%s\n", str);
}