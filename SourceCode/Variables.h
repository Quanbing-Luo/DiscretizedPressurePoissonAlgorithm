#pragma once
#include <cmath>
#include<algorithm>
#include "Matrix.h"

class Variables {

public: 
Variables(size_t II, size_t  JJ, double RE) 
	:I{ II }, J{ JJ }, Re{RE}, h { 1.0 / I }, aP { 16.0 / (Re * pow(h,2)) }
{ errs.reserve(100000); }
	
	void fun_p(const size_t n_max);

	void fun_uv();

	double err_uv();

	void write_out_uvp() const;

	void Variables::write_out_errs() const;

private:

	void fun_uxvx();
	void fun_px();
	void fun_bp();
	void fun_bubv();


	double err_p(std::vector<double>&  errs) const;
	void write_out_Matrix(const Matrix& M, const std::string& name) const;
	void write_out_vector(const std::vector<double>&  errs, const std::string& name) const;

	const size_t I, J;
	const double h , Re, aP;
	std::vector<double>  errs;

	Matrix u{ I, J }, v{ I , J }, p{ I, J },
		ux{ I, J }, vx{ I , J }, px{ I , J },
		bu{ I, J }, bv{ I , J }, bp{ I , J },
Merrs_u{ I , J }, Merrs_v{ I , J }, Merrs_p{ I , J };

};

