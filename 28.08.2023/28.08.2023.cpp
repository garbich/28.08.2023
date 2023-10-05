#include <iostream>
#include "String.h"

using namespace std;


void FindCrossString(string str1, string str2){

	String string(str1, str2);

	if (string.isEmpty() == true){
		cout << "There are no the same symbols in two strings";
		return;
	}
	cout << "The same symbols in two strings are: " << string.getCrossString() << endl;
}

int main()
{


	string str1;
	string str2;

	cout << "Input 1 string: ";
	cin >> str1;

	cout << "Input 2 string: ";
	cin >> str2;

	cout << endl;

	FindCrossString(str1, str2);
}