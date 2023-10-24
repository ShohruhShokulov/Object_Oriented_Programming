#include "SecuString.h"
#include <iostream>
#include <string>
using namespace std;

bool SecuString::SetMessage(string m, string p) {
	if (p == password) {
		sstring = m;
		return true;
	}
	else { return false; }
}
string SecuString::GetMessage(string a) {
	string b = "No real stored message. Invalid Password..";
	if (a == password) {
		return sstring;
	}
	else
		return b;
}
bool SecuString::ChangePW(string old_pw, string new_pw) {
	if (old_pw == password) {
		password = new_pw;
		return 1;
	}
	else
		return 0;
}