// typename.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class A {
public:
	A() {}
};

template<typename T, int N>
class Pool
{
public:
	Pool() {}
	T* get();
	void free(T*);
	int available() const;
private:

};

int main()
{
	Pool<A, 10> p;
    return 0;
}

