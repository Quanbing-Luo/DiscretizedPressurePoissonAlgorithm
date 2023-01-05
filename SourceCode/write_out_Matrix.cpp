#include <fstream>
#include "Variables.h"


void Variables::write_out_Matrix(const Matrix& M,const std::string& name) const
{
	std::ofstream ost;
	ost.open(name);
	for (size_t i = 0; i < M.get_I(); i++)
	{
		for (size_t j = 0; j < M.get_J(); j++)
			ost << M(i,j) << " ";

		ost << "\n";
	}
	ost.close();


}



