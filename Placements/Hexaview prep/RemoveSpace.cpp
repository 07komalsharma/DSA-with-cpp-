
#include <iostream>
using namespace std;

void removeSpaces(char *str)
{
	// To keep track of non-space character count
	int count = 0;

	for (int i = 0; str[i]; i++)
		if (str[i] != ' ')
			str[count++] = str[i];
	str[count] = '\0';
}

// Driver program to test above function
int main()
{
	char str[] = "g eeks for ge eeks ";
	removeSpaces(str);
	cout << str;
	return 0;
}
