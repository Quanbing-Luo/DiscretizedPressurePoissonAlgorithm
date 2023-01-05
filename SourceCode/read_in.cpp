#include <vector>
#include <fstream>
#include "Variables.h"

void Variables::read_in()
{
	std::ifstream ist;
	ist.open("theta.txt");
	for (size_t i = 0; i < I; i++)
	{
		for (size_t j = 0; j < J; j++)
			ist >> theta(i, j);

	}
	ist.close();

	ist.open("err.txt");
	for (double err; ist >> err; )
		errs.push_back(err);
	ist.close();

}



