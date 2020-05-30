#pragma once
#include<iostream>
using namespace std;

class Vector
{
	int* p; 
	int n; 

public:
	Vector(int* p, int n);
	Vector(const Vector& V);
	Vector(Vector&& V);
	Vector();
	int& operator[](int index);
	Vector& operator =(Vector& v2);
	friend ostream& operator <<(ostream& out, Vector& vector);
	~Vector();
	friend Vector& operator^(Vector& vector, int* x);
};