#pragma once
#include <iostream>
#include "TVector.h"
using namespace std;

template<typename T>
class TMatrix
{
private:
	TVector<TVector<T>> matr;
	int sizematr;
public:
	TMatrix(int size = 0)
	{
		sizematr = size;
		matr = TVector<TVector<T>>(sizematr, 0);
		for (int i = 0; i < sizematr; i++)
		{
			matr[i] = TVector<T>(sizematr, i);
		}
	}
	~TMatrix()
	{
	}
	TMatrix(const TMatrix& tmp)
	{
		sizematr = tmp.sizematr;
		matr = tmp.matr;
	}
	TMatrix& operator= (const TMatrix& tmp)
	{
		sizematr = tmp.sizematr;
		matr = tmp.matr;
		return *this;
	}
	TVector<T>& operator[](int k)
	{
		return matr[k];
	}
	TMatrix operator+ (TMatrix tmp)
	{
		TMatrix res;
		if (sizematr = tmp.sizematr)
		{
			res.sizematr = sizematr;
			res.matr = matr + tmp.matr;
		}
		return res;
	}
	TMatrix operator- (TMatrix tmp)
	{
		TMatrix res;
		if (sizematr = tmp.sizematr)
		{
			res.sizematr = sizematr;
			res.matr = matr - tmp.matr;
		}
		return res;
	}
	TMatrix operator* (TMatrix tmp)
	{
		TMatrix res(*this);
		TMatrix C;
		if (sizematr = tmp.sizematr)
		{
			C = TMatrix(sizematr);
			for (int i = 0; i < sizematr; i++)
			{
				for (int j = i; j < sizematr; j++)
				{
					C[i][j] = 0;
					for (int k = i; k <= j; k++)
					{
						C[i][j] += res[i][k] * tmp[k][j];
					}
				}
			}
		}
		return C;
	}
	TMatrix operator* (int k)
	{
		TMatrix res(*this);
		res.matr = matr * k;
		return res;
	}
	int GetSizematr()
	{
		return sizematr;
	}
};