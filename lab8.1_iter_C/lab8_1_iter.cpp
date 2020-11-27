#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>

using namespace std;

int Len(const char* s)
{
	int k;
	for (k = 0; *s++ != '\0'; k++);
	return k;
}

int Find_Dot(const char* s, int count)
{
	int i = 0;
	for (i = 0; i != count - 4; i++);
		if (s[i] == '.')
			return i;
		else
			return 0;
}

char* Change(char* s, int count) {

	char* tmp = new char[count * 4 / 3 + 1];
	char* t = tmp;
	tmp[0] = '\0';

	int i = 0;

	while(s[i] != 0)
	{
		if (s[i] == '.') 
		{
			strcat_s(t, (strlen(s)+i), "**");
			t += 2;
			i++;
		}
		else
		{
			*t++ = s[i++];
			*t = '\0';
		}
	}
	strcpy_s(s, strlen(s)+i, tmp);

	return tmp;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char str[101];

	cout << " Введіть рядок: " << endl; 
	cin.getline(str, 100);

	cout << endl;

	int count = Len(str);
	cout << " length = " << Len(str) << endl;

	cout << " Номер 4-ої крапки з кінця: " << Find_Dot(str, count) <<  endl;

	char* dest = new char[151];
	dest = Change(str, count);
	cout << " Модифікована стрічка: " << dest << endl;

	return 0;
}