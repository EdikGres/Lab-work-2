#include "Functions.h"

namespace func {

	// Функция для возврата true или false ( 1 or 0 ) при гласной - true. Сделал для больших и малых букв 
	int isVowel(char ch) {

		char vowels[] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y' };

		for (int i = 0; i < sizeof(vowels); i++)
		{
			if (ch == vowels[i])
			{
				return 1;
			}

		}
		return 0;

	}


	//Функция для возврата true если это буква ( по таблице ASCI
	int isalpha(char ch) {
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

}