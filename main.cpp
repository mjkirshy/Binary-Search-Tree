#include <iostream>
#include <iomanip>
#include <string>
#include "NodeClass.h"
#include <fstream>

using namespace std;
int main()
{
	int answer;
	string str, file, word;
	BinaryTree Tree("");
	ifstream infile;

	cout << "Insert file: ";
	cin >> file;
	infile.open(file);
	while (infile >> str)
	{
			if (str[str.length() - 1] == '.' || str[str.length() - 1] == ',' || str[str.length() - 1] == '?' || str[str.length() - 1] == ';' || str[str.length() - 1] == '!' || str[str.length() - 1] == '"' 
			|| str[str.length() - 1] == ':' || str[str.length() - 1] == '&' || str[str.length() - 1] == '(' || str[str.length() - 1] == ')' || str[str.length() - 1] == '*')
			str.pop_back();
			for (int i = 0; i < str.length(); i++)
			{
				str[i] = toupper(str[i]);
			}
			Tree.insert(str, Tree.root);
	}
	cout << "Press 1 to print or press 2 to exit: ";
	cin >> answer;
	switch (answer)
		{
		case 1:
			Tree.print(Tree.root);
			break;
		case 2:
			return 0;
		}
	return 0;
}