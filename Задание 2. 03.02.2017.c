//������� 2
//�������� ���� ����� � �������.��������� "����������" ������������� ����� �
//�������� ������ ������� ���.����� ����� ������������� ����� ��������� ��������,
//������� ���� ����� �������(����) � ������� ���� ������� � ����� �� ������ �����
//(������).����� ����������� ����� �� ����� ���������� ������� ���������� ���������
//������������� �������.� ��������� ���������� ������������ ��������.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define MASS_SIZE_DLA_RAZDELENIIA 4

int funkciiaBikiiKorovi(int razdelenieChislaComputeralNaSostovlaushie[], int razdelenieChislaUseralNaSostovlaushie[], int chisloZagadannoeComputerom[], int usersChislo[]);
int funkciiaDlaRazdelenieChislaComputeralNaSostovlaushie(int chisloZagadannoeComputerom[], int razdelenieChislaComputeralNaSostovlaushie[]);
int funkciiaDlaRazdelenieChislaUseralNaSostovlaushie(int razdelenieChislaUseralNaSostovlaushie[], int razdelenieChislaComputeralNaSostovlaushie[], int usersChislo[]);

int countDlaPodschetaPovtoraFuncii = 1;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	printf("���� ���� � ������. �������� ���������� ������������� ����� � �� ������ ������� ���.\n��������� ����� ������������ ���, ������� ���� �� �������� � ����� �� ��� ������������� � ���������� �����.\n");
	int usersChislo[1];
	int razdelenieChislaUseralNaSostovlaushie[4];
	int razdelenieChislaComputeralNaSostovlaushie[MASS_SIZE_DLA_RAZDELENIIA];
	int chisloZagadannoeComputerom[1] = { 1000 + rand() % 9000 };
	printf("%i\n", chisloZagadannoeComputerom[0]);
	printf("����������, �� �������� �����. ����������� ������������� �������: %i.\n", funkciiaBikiiKorovi(razdelenieChislaComputeralNaSostovlaushie, razdelenieChislaUseralNaSostovlaushie, chisloZagadannoeComputerom, usersChislo));
}

int funkciiaDlaRazdelenieChislaComputeralNaSostovlaushie(int chisloZagadannoeComputerom[], int razdelenieChislaComputeralNaSostovlaushie[])
{
	razdelenieChislaComputeralNaSostovlaushie[0] = chisloZagadannoeComputerom[0] % 10000 / 1000;
	razdelenieChislaComputeralNaSostovlaushie[1] = chisloZagadannoeComputerom[0] % 1000 / 100;
	razdelenieChislaComputeralNaSostovlaushie[2] = chisloZagadannoeComputerom[0] % 100 / 10;
	razdelenieChislaComputeralNaSostovlaushie[3] = chisloZagadannoeComputerom[0] % 10;
	return razdelenieChislaComputeralNaSostovlaushie;
}

int funkciiaDlaRazdelenieChislaUseralNaSostovlaushie(int razdelenieChislaUseralNaSostovlaushie[], int razdelenieChislaComputeralNaSostovlaushie[], int usersChislo[])
{
	scanf("%i", &usersChislo[0]);
	if (usersChislo[0] > 9999 || usersChislo[0] < 1000)
	{
		printf("�������� ����� �� ������������� ����������� ����. ��������� ����.\n");
		return 0;
	}
	else
	{
		razdelenieChislaUseralNaSostovlaushie[0] = usersChislo[0] % 10000 / 1000;
		razdelenieChislaUseralNaSostovlaushie[1] = usersChislo[0] % 1000 / 100;
		razdelenieChislaUseralNaSostovlaushie[2] = usersChislo[0] % 100 / 10;
		razdelenieChislaUseralNaSostovlaushie[3] = usersChislo[0] % 10;
	}
	return razdelenieChislaUseralNaSostovlaushie;
}

int funkciiaBikiiKorovi(int razdelenieChislaComputeralNaSostovlaushie[], int razdelenieChislaUseralNaSostovlaushie[], int chisloZagadannoeComputerom[], int usersChislo[])
{
	
	printf("������� �����: ");
	funkciiaDlaRazdelenieChislaUseralNaSostovlaushie(razdelenieChislaUseralNaSostovlaushie, razdelenieChislaComputeralNaSostovlaushie, usersChislo);
	funkciiaDlaRazdelenieChislaComputeralNaSostovlaushie(chisloZagadannoeComputerom, razdelenieChislaComputeralNaSostovlaushie);

	int countDlaKorov = 0;
	for (int i = 0; i < MASS_SIZE_DLA_RAZDELENIIA; i++)
	{
		if (razdelenieChislaUseralNaSostovlaushie[0] == razdelenieChislaComputeralNaSostovlaushie[i])
		{
			countDlaKorov++;
		}
		if (razdelenieChislaUseralNaSostovlaushie[1] == razdelenieChislaComputeralNaSostovlaushie[i])
		{
			countDlaKorov++;
		}
		if (razdelenieChislaUseralNaSostovlaushie[2] == razdelenieChislaComputeralNaSostovlaushie[i])
		{
			countDlaKorov++;
		}
		if (razdelenieChislaUseralNaSostovlaushie[3] == razdelenieChislaComputeralNaSostovlaushie[i])
		{
			countDlaKorov++;
		}
	}

	printf("����� �������� �����: %i\n", countDlaKorov);

	int countDlaBikov = 0;
	for (int j = 0; j < MASS_SIZE_DLA_RAZDELENIIA; j++)
	{
		if (razdelenieChislaUseralNaSostovlaushie[j] == razdelenieChislaComputeralNaSostovlaushie[j])
		{
			printf("%i ����� ������ ����� ������������� %i ����� ����������� �����.\n", j + 1, j + 1);
			countDlaBikov++;
		}	
	}
	if (usersChislo[0] != chisloZagadannoeComputerom[0])
	{
		funkciiaBikiiKorovi(razdelenieChislaComputeralNaSostovlaushie, razdelenieChislaUseralNaSostovlaushie, chisloZagadannoeComputerom, usersChislo);
		countDlaPodschetaPovtoraFuncii++;
	}
	else if (countDlaBikov == MASS_SIZE_DLA_RAZDELENIIA)
	{
		return countDlaPodschetaPovtoraFuncii;
	}
}