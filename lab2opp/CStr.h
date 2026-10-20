#pragma once
#include <iostream>

class CStr {
private:
	char* str;
	static char* generaterandom(int len);

public:
	CStr();
	CStr(const char* s);

	CStr(int len);

	CStr(const CStr& other);

	~CStr();

	CStr& operator=(const CStr& other);
	CStr& operator=(const char* s);

	bool operator>(const CStr& other) const;
	bool operator<(const CStr& other) const;

	CStr operator+(const CStr& other) const;
	CStr& operator+=(const CStr& other);

	int length() const;

	friend ostream& operator<<(ostream& os, const CStr& s);


};