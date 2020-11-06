#include "Functions.h"

//#include <ctype.h>

/*
	��: ������ ������, ������� �� ����� ������ ����� ������������ � ������� �����. ( 8 ������� )
	V1.0
		+ ������� ������� ����������� ������� �� ����� � �� ������� ������� ����
		+ ������� ����������� ������� �������
		+ ������� ������� � ��������� ������ ����� ������� ����� ��������
		+ ������� ������� ��� ������� ����� � ����������� �� ���� char[iterator+1] != ' ', �.�. ���������� �� ������
		+ ������� ���� �������� � ���������� ���� printf � ����� ���-��, �� ��� ����������� �� ��������� ������ �����. � ������ ����������� ������ ����� ��� ���� ����,
			����� ������ ������� ��� ����. �� ��� printf �� char[] ������� �������. ����� ������� fgets(char[], int maxSimbols, stdin)

	V1.1
		+ ������������ �� ������. (fgets �� �������� ����� �� ������.)

	V1.2
		+ ������ ������� ������

	V2.0
		- ������� ������� �� ������� �������(�������) (�� ���������� ����� ������� ������� char ��� ���������(?))
		+ ������� ���, ����� �� ���������� ����� ���������� ������ �� ������� (� ������� ������� �������� ��� ������� )
		+ ������� ��� �������� � �����������

	V3.0 
		+ ��������� �� � ������� ������� isalpha


	(P.s) ������������ ���� ctrl+K => ctrl+D
*/




int main() {
	using namespace func;
	//printf("%i", isalpha('a'))

	char* locale = setlocale(LC_ALL, ""); //����� ������� ������	

	char text[120];

	printf("������� ������(120 simbols max): ");
	fgets(text, 120, stdin);

	//printf("%s\n", text); //������� �������� �����, �����
	int lenght = 0;
	while (text[lenght] != 0) //�������� ����� ������� ����� ����
	{
		lenght++;
	}

	int iterator = 0; //������� ������� ����� ��������

	for (; iterator < lenght; iterator++)
	{
		if (isVowel(text[iterator]) && !isalpha(text[iterator - 1]))
		{

			for (; iterator < lenght && isalpha(text[iterator]); iterator++)
			{
				printf("%c", text[iterator]);



			}
			printf("\n");
		}


	}




	return 0;
}


