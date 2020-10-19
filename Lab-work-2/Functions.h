#pragma once
#include <stdio.h>
#include <locale.h>

namespace func {
	// Функция для возврата true или false ( 1 or 0 ) при гласной - true. Сделал для больших и малых букв 
	int isVowel(char ch);

	//Функция для возврата true если это буква ( по таблице ASCI)
	int isalpha(char ch);



}