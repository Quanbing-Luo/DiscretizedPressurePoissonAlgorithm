#include <cmath>
#include "Variables.h"

double Variables::err_uv() 
{
	double err = 0;

	for (size_t i = 0; i < I; i++)
		for (size_t j = 0; j < J; j++)

			err = std::max( err, sqrt(pow(Merrs_u(i, j), 2) + pow(Merrs_v(i, j), 2)) );

//			err = std::max({ err, abs(Merrs_u(i, j)), abs(Merrs_v(i, j)) });

	//err += (pow(Merrs_u(i, j), 2)+ pow(Merrs_v(i, j), 2))/2;

	//err = sqrt(err / (I*J));

	errs.push_back(err);

	return err;
	//return errs.back() / errs.front();
	
}