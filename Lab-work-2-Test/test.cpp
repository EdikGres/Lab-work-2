#include "pch.h"
#include "../Lab-work-2/Functions.h"
using namespace func;

namespace myTests {
	//--------------------------------------------------------------------------------------
	//���� isVowel() 
	//�������� �� ���� �������
	TEST(isVowelsTests, inputVowels) {
		// Arrange

		char ch[] = {'a', 'O', 'u', 'E'};

		// Act



		// Assert
		for (int i = 0; i < sizeof(ch); i++)
		{
			ASSERT_TRUE(isVowel(ch[i]));
		}


	}

	//�������� �� ���� ���������
	TEST(isVowelsTests, inputConsonant) {
		// Arrange

		char ch[] = {'b', 'g', 'Q', 'l'};

		// Assert

		for (int i = 0; i < sizeof(ch); i++)
		{
			ASSERT_FALSE(isVowel(ch[i]));
		}


	}
	//�������� �� ���� ��������
	TEST(isVowelsTests, inputWrongSymbols) {
		// Arrange

		char ch[] = {'/', '\\', '!', '%', '&'};


		// Assert

		for (int i = 0; i < sizeof(ch); i++)
		{
			ASSERT_FALSE(isVowel(ch[i]));

		}

	}
	//--------------------------------------------------------------------------------------

	//--------------------------------------------------------------------------------------
	//���� isalpha()
	//�������� �� ���� ���� ASCII
	TEST(isAlphaTests, inputAlphabetSymbol) {
		// Arrange

		char ch[] = {'l', 'i', 'A', 'b', 'F', 'c'};

		// Assert

		for (int i = 0; i < sizeof(ch); i++)
		{
			ASSERT_TRUE(isalpha(ch[i]));
		}

	}
	TEST(isAlphaTests, inputNonAlphabetSymbols) {

		// Arrange

		char ch[] = { '/', '!', '^', '\\', '<', '.', '?' };

		// Assert

		for (int i = 0; i < sizeof(ch); i++)
		{
			ASSERT_FALSE(isalpha(ch[i]));
		}

	}
	//--------------------------------------------------------------------------------------
}