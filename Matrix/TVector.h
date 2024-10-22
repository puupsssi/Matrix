#pragma once
#include <iostream>

using namespace std;

template<typename T>
class TVector
{
private:
	T* mem;
	int size;
	int start;
public:
	TVector(int _size = 0, int _start = 0)
	{
		size = _size;
		start = _start;
		mem = new T[size];
		for (int i = 0; i < size; i++)
		{
			mem[i] = T(0);
		}
	}
	~TVector()
	{
		delete[] mem;
	}
	TVector(const TVector& tmp)
	{
		size = tmp.size;
		start = tmp.start;
		mem = new T[size];
		for (int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
	}
	TVector& operator= (const TVector& tmp)
	{
		if (size != tmp.size)
		{
			if (size != 0)
			{
				delete[] mem;
			}
			start = tmp.start;
			size = tmp.size;
			mem = new T[size];
		}
		for (int i = 0; i < size; i++)
		{
			mem[i] = tmp.mem[i];
		}
		return *this;
	}
	T& operator[](int i)
	{
		T res(0);
		if ((i >= start) && (i < size))
		{
			return mem[i];
		}
		return res;
	}
	TVector operator+ (TVector tmp)
	{
		TVector res;
		if ((size == tmp.size) && (start == tmp.start))
		{
			res = TVector(size, start);
		}
		for (int i = 0; i < size; i++)
		{
			res.mem[i] = mem[i] + tmp.mem[i];
		}
		return res;
	}
	TVector operator- (TVector tmp)
	{
		TVector res;
		if ((size == tmp.size) && (start == tmp.start))
		{
			res = TVector(size, start);
		}
		for (int i = 0; i < size; i++)
		{
			res.mem[i] = mem[i] - tmp.mem[i];
		}
		return res;
	}
	T operator* (TVector tmp)
	{
		T res(0);
		if ((size == tmp.size) && (start == tmp.start))
		{
			for (int i = 0; i < size; i++)
			{
				res = res + (mem[i] * tmp.mem[i]);
			}
		}
		return res;
	}
	TVector operator* (int k)
	{
		TVector res(*this);
		for (int i = 0; i < size; i++)
		{
			res.mem[i] = res.mem[i] * k;
		}
		return res;
	}
	int GetSize()
	{
		return size;
	}
};
