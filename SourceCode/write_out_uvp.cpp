#include "Variables.h"


void Variables::write_out_uvp() const
{
	write_out_Matrix(u, "u.txt");
	write_out_Matrix(v, "v.txt");
	write_out_Matrix(p, "p.txt");
}



