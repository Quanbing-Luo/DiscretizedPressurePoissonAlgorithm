#pragma once
#include <vector>
class Matrix
{
public:
	Matrix(size_t rows, size_t cols);
	double& operator()(size_t i, size_t j);
	double operator()(size_t i, size_t j) const;



	size_t get_I() const { return mRows; }
	size_t get_J() const { return mCols; }

private:
	size_t mRows;
	size_t mCols;
	std::vector<double> mData;
};

inline Matrix::Matrix(size_t rows, size_t cols)
	: mRows(rows),
	mCols(cols),
	mData(rows * cols)
{
}

inline double& Matrix::operator()(size_t i, size_t j)
{
	return mData[i * mCols + j];
}

inline double Matrix::operator()(size_t i, size_t j) const
{
	return mData[i * mCols + j];
}