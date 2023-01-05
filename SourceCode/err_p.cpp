#include "Variables.h"



double Variables::err_p(std::vector<double>&  errs) const
{
	double err = 0;
	
	for (size_t i = 0; i < I ; i++)
		for (size_t j = 0; j < J; j++)
			err= std::max (err,abs(Merrs_p(i, j)));

	errs.push_back(err);

	return err;

	//return errs.back() / errs.front();

	
}