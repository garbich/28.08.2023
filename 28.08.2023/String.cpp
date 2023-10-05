#include "String.h"

String::String(){

	crossString = "";
	str1 = "";
	str2 = "";
}

String::String(string str1, string str2){

	this->str1 = str1;
	this->str2 = str2;
}


bool String::isEmpty(){

	string cross = "";

	for (int i = 0; i < str1.length(); i++){
		for (int j = 0; j < str2.length(); j++){
			if (str1[i] == str2[j]){
			
				cross += str1[i];
				break;
			}
		}
	}

	if (cross.empty()){
		return true;
	}

	setCrossString(cross);
	return false;
}


void String::setCrossString(string cross){
	this->crossString = cross;
}

string String::getCrossString(){
	return crossString;
}