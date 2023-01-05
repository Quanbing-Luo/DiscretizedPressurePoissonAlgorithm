#include <fstream>
#include "Variables.h"

void Variables::write_out_vector(const std::vector<double>&  errs, const std::string& name) const
{
	std::ofstream ost;

	ost.open(name);
	for (double err : errs)
		ost << err << " ";
	ost.close();

}



