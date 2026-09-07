
#include <iostream>

using namespace std;
int GetCustomLengths(char* s)
{
	int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return len;
}
int main()
{
	char str[255];
	cout << "Enter text: ";
	cin.getline(str, 255);

	cout << "------------------------------------" << endl;

	// 1
	int countA = 0;
	int countO = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'a' || str[i] == 'A') countA++;
		if (str[i] == 'o' || str[i] == 'O') countO++;
	}
	cout << "Letters 'a': " << countA << ", letters 'o': " << countO << endl;
	if (countA > countO) cout << "More 'a'" << endl;
	else if (countO > countA) cout << "More 'o'" << endl;
	else cout << "Equal amount" << endl;

	cout << "------------------------------------" << endl;
	//2
	int letters = 0, digits = 0, spaces = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (isalpha(str[i])) letters++;
		else if (isdigit(str[i])) digits++;
		else if (isspace(str[i])) spaces++;
	}
	cout << "Latin letters: " << letters << endl;
	cout << "Digits: " << digits << endl;
	cout << "Spaces: " << spaces << endl;

	cout << "------------------------------------" << endl;
	//3
	cout << "Big letters: " << endl;
	_strupr_s(str);
	cout << str << endl;
	cout << "Small letters: " << endl;
	_strlwr_s(str);
	cout << str << endl;
	cout << "------------------------------------" << endl;
	//4
	int len = GetCustomLengths(str);
	cout << "Length of str = " << len << endl;

	return 0;
}
