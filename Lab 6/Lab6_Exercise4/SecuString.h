#pragma once
#include <iostream>
using namespace std;

class SecuString {
private:
	string sstring;
	string password;
public:
	SecuString(string x,string y): sstring(x),password(y){}
	bool SetMessage(string m, string p);
	string GetMessage(string a);
	bool ChangePW(string old_pw, string new_pw);
};
