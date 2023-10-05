#pragma once
#include <iostream>
#include <string>
using namespace std;


class String
{
private:
	string crossString;

	string str1;
	string str2;

public:
	String();
	String(string str1, string str2);

	bool isEmpty();

	void setCrossString(string cross);
	string getCrossString();
};