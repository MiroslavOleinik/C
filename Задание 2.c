//Задание 2
//Написать игру «Кубики».Пользователь и компьютер по очереди бросают 2 кубика.
//Победитель – тот, у кого по результатам 3х бросков сумма больше.Предусмотреть
//красивый интерфейс игры.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h> 

enum UsersChoose
{
	Play = 1,
	Defeat
};
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	printf("Игра в кости с компьютером. Каждый кидает кости три раза. \nВыигрывает тот, кто наберёт в сумме больше всего очков. Удачи!\n");
	int const forRandom = 0;
	int summaForFirstPlayer = 0;
	int summaForSecondPlayer = 0;
	int firstCubeForGame;
	int secondCubeForGame;
	int powerToThrowCube;
	enum UsersChoose chooseByUser;
	printf("Первый игрок, назовитесь! (Имена водятся только на английском языке)\n");
	char firstUsersName[80]; //вот эта строчка задает переменную, в которую будет добавляться имя игрока. В квадратных скобках кол-во символов за один ввод.
	gets(firstUsersName); //через gets вводится имя игрока, которое будет присвоино переменной в скобках.
	printf("Рады вас привествовать %s. Да прибудет с вами сила.\n", firstUsersName);
	printf("Задайте имя второму комьютеру. (Имена водятся только на английском языке)\n");
	char secondUsersName[80];
	gets(secondUsersName);
	printf("Компьюте по имени %s. ", secondUsersName);
	printf("Бросает игрок %s.\n", firstUsersName);
	for (int i = 0; i < 3; i++)
	{
		printf("Что бы бросить кости нажмите 1, а что бы сдаться и завершить игру нажмите 2.\n");
		scanf("%i", &chooseByUser);
		switch (chooseByUser)
		{
		case Play:
			printf("Бросает игрок %s.\n", firstUsersName);
			printf("Определите силу броска.\n(Введите число от 1 до 10. Если вы зададите значение больше 10, то это будет считаться за самый слабый бросок.)\n");
			scanf("%i", &powerToThrowCube);
			if (powerToThrowCube > 10);
			{
				powerToThrowCube = 1;
			}
			for (int i = 0; i < powerToThrowCube; i++)
			{
				firstCubeForGame = (forRandom + 1) + rand() % 6;
				secondCubeForGame = (forRandom + 1) + rand() % 6;
			}
			Sleep(600);
			printf("Первый кубик выкинул: %i\n", firstCubeForGame);
			if (firstCubeForGame == 1)
			{
				printf("\n\t\t  *\n\n");
			}
			else if (firstCubeForGame == 2)
			{
				printf("\n\t*\t*\n\n");
			}
			else if (firstCubeForGame == 3)
			{
				printf("\t    *\n\t    *\n\t    *\n");
			}
			else if (firstCubeForGame == 4)
			{
				printf("\t*\t*\n\n\t*\t*\n");
			}
			else if (firstCubeForGame == 5)
			{
				printf("\t*\t*\n\t    *\n\t*\t*\n");
			}
			else if (firstCubeForGame == 6)
			{
				printf("\t*\t*\n\t*\t*\n\t*\t*\n");
			}
			Sleep(600);
			printf("Второй кубик выкинул: %i\n", secondCubeForGame);
			if (secondCubeForGame == 1)
			{
				printf("\n\t    *\n\n");
			}
			else if (secondCubeForGame == 2)
			{
				printf("\n\t*\t*\n\n");
			}
			else if (secondCubeForGame == 3)
			{
				printf("\t    *\n\t    *\n\t    *\n");
			}
			else if (secondCubeForGame == 4)
			{
				printf("\t*\t*\n\n\t*\t*\n");
			}
			else if (secondCubeForGame == 5)
			{
				printf("\t*\t*\n\t    *\n\t*\t*\n");
			}
			else if (secondCubeForGame == 6)
			{
				printf("\t*\t*\n\t*\t*\n\t*\t*\n");
			}
			summaForFirstPlayer = summaForFirstPlayer + firstCubeForGame + secondCubeForGame;
			break;
		case Defeat:
			printf("Сдача принимается. Победитель игрок %s.\n", secondUsersName);
			return 0;
		default:
			printf("Неверный ввод. Данный ход не будет зачтён.\n");
			break;
		}
	}
	printf("Игрок %s завершил броски и набрал %i очков.\n",firstUsersName, summaForFirstPlayer);
	printf("Бросает игрок %s.\n", firstUsersName);
	for (int i = 0; i < 3; i++)
	{
		printf("Компьютер под именем %s.\n", firstUsersName);
		firstCubeForGame = (forRandom + 1) + rand() % 6;
		secondCubeForGame = (forRandom + 1) + rand() % 6;
		Sleep(600);
		printf("Первый кубик выкинул: %i\n", firstCubeForGame);
		if (firstCubeForGame == 1)
		{
			printf("\n\t\t  *\n\n");
		}
		else if (firstCubeForGame == 2)
		{
			printf("\n\t*\t*\n\n");
		}
		else if (firstCubeForGame == 3)
		{
			printf("\t    *\n\t    *\n\t    *\n");
		}
		else if (firstCubeForGame == 4)
		{
			printf("\t*\t*\n\n\t*\t*\n");
		}
		else if (firstCubeForGame == 5)
		{
			printf("\t*\t*\n\t    *\n\t*\t*\n");
		}
		else if (firstCubeForGame == 6)
		{
			printf("\t*\t*\n\t*\t*\n\t*\t*\n");
		}
		Sleep(600);
		printf("Второй кубик выкинул: %i\n", secondCubeForGame);
		if (secondCubeForGame == 1)
		{
			printf("\n\t    *\n\n");
		}
		else if (secondCubeForGame == 2)
		{
			printf("\n\t*\t*\n\n");
		}
		else if (secondCubeForGame == 3)
		{
			printf("\t    *\n\t    *\n\t    *\n");
		}
		else if (secondCubeForGame == 4)
		{
			printf("\t*\t*\n\n\t*\t*\n");
		}
		else if (secondCubeForGame == 5)
		{
			printf("\t*\t*\n\t    *\n\t*\t*\n");
		}
		else if (secondCubeForGame == 6)
		{
			printf("\t*\t*\n\t*\t*\n\t*\t*\n");
		}
		summaForSecondPlayer = summaForSecondPlayer + firstCubeForGame + secondCubeForGame;
	}
	printf("Комьютер под именем %s завершил броски и набрал %i очков.\n", secondUsersName, summaForSecondPlayer);
	if (summaForFirstPlayer > summaForSecondPlayer)
	{
		printf("По результатам суммы очков, победителем стал игрок %s набрав в сумме %i\n", firstUsersName, summaForFirstPlayer);
	}
	else if (summaForFirstPlayer < summaForSecondPlayer)
	{
		printf("По результатам суммы очков, победителем стал игрок %s набрав в сумме %i\n", secondUsersName, summaForSecondPlayer);
	}
	else if (summaForFirstPlayer == summaForSecondPlayer)
	{
		printf("По результатам вышла ничья. Начисляется дополнительный бросок для каждого игрока.\n");
		Sleep(2000);
		printf("Бросает игрок %s.\n", firstUsersName);
		firstCubeForGame = (forRandom + 1) + rand() % 6;
		secondCubeForGame = (forRandom + 1) + rand() % 6;
		Sleep(600);
		printf("Первый кубик выкинул: %i\n", firstCubeForGame);
		if (firstCubeForGame == 1)
		{
			printf("\n\t\t  *\n\n");
		}
		else if (firstCubeForGame == 2)
		{
			printf("\n\t*\t*\n\n");
		}
		else if (firstCubeForGame == 3)
		{
			printf("\t    *\n\t    *\n\t    *\n");
		}
		else if (firstCubeForGame == 4)
		{
			printf("\t*\t*\n\n\t*\t*\n");
		}
		else if (firstCubeForGame == 5)
		{
			printf("\t*\t*\n\t    *\n\t*\t*\n");
		}
		else if (firstCubeForGame == 6)
		{
			printf("\t*\t*\n\t*\t*\n\t*\t*\n");
		}
		Sleep(600);
		printf("Второй кубик выкинул: %i\n", secondCubeForGame);
		if (secondCubeForGame == 1)
		{
			printf("\n\t    *\n\n");
		}
		else if (secondCubeForGame == 2)
		{
			printf("\n\t*\t*\n\n");
		}
		else if (secondCubeForGame == 3)
		{
			printf("\t    *\n\t    *\n\t    *\n");
		}
		else if (secondCubeForGame == 4)
		{
			printf("\t*\t*\n\n\t*\t*\n");
		}
		else if (secondCubeForGame == 5)
		{
			printf("\t*\t*\n\t    *\n\t*\t*\n");
		}
		else if (secondCubeForGame == 6)
		{
			printf("\t*\t*\n\t*\t*\n\t*\t*\n");
		}
		summaForFirstPlayer = summaForFirstPlayer + firstCubeForGame + secondCubeForGame;
		printf("Бросает игрок %s.\n", secondUsersName);
		firstCubeForGame = (forRandom + 1) + rand() % 6;
		secondCubeForGame = (forRandom + 1) + rand() % 6;
		Sleep(600);
		printf("Первый кубик выкинул: %i\n", firstCubeForGame);
		if (firstCubeForGame == 1)
		{
			printf("\n\t\t  *\n\n");
		}
		else if (firstCubeForGame == 2)
		{
			printf("\n\t*\t*\n\n");
		}
		else if (firstCubeForGame == 3)
		{
			printf("\t    *\n\t    *\n\t    *\n");
		}
		else if (firstCubeForGame == 4)
		{
			printf("\t*\t*\n\n\t*\t*\n");
		}
		else if (firstCubeForGame == 5)
		{
			printf("\t*\t*\n\t    *\n\t*\t*\n");
		}
		else if (firstCubeForGame == 6)
		{
			printf("\t*\t*\n\t*\t*\n\t*\t*\n");
		}
		Sleep(600);
		printf("Второй кубик выкинул: %i\n", secondCubeForGame);
		if (secondCubeForGame == 1)
		{
			printf("\n\t    *\n\n");
		}
		else if (secondCubeForGame == 2)
		{
			printf("\n\t*\t*\n\n");
		}
		else if (secondCubeForGame == 3)
		{
			printf("\t    *\n\t    *\n\t    *\n");
		}
		else if (secondCubeForGame == 4)
		{
			printf("\t*\t*\n\n\t*\t*\n");
		}
		else if (secondCubeForGame == 5)
		{
			printf("\t*\t*\n\t    *\n\t*\t*\n");
		}
		else if (secondCubeForGame == 6)
		{
			printf("\t*\t*\n\t*\t*\n\t*\t*\n");
		}
		summaForSecondPlayer = summaForSecondPlayer + firstCubeForGame + secondCubeForGame;
		if (summaForFirstPlayer > summaForSecondPlayer)
		{
			printf("По сумме очков с дополнительным броском, победителем стал игрок %s набрав в сумме %i\n", firstUsersName, summaForFirstPlayer);
			return 0;
		}
		else if (summaForFirstPlayer < summaForSecondPlayer)
		{
			printf("По сумме очков с дополнительным броском, победителем стал игрок %s набрав в сумме %i\n", secondUsersName, summaForSecondPlayer);
			return 0;
		}
	}
	
}
