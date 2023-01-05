#include "Variables.h"

void Variables::fun_bubv()
{
	double  pe, pw, pn, ps;

	for (size_t i = 0; i < I; i++)
		for (size_t j = 0; j < J; j++)
		{

			if (0 == i)  pw = p(i, j);
			else pw = (p(i - 1, j) + p(i, j)) / 2.0;

			if (I - 1 == i) pe = p(i, j);
			else pe = (p(i + 1, j) + p(i, j)) / 2.0;

			if (0 == j) ps = p(i, j);
			else ps = (p(i, j - 1) + p(i, j)) / 2.0;

			if (J - 1 == j) pn = p(i, j);
			else pn = (p(i, j + 1) + p(i, j)) / 2.0;

			bu(i,j) = -(pe - pw) / (aP*h); bv(i, j) = -(pn - ps) / (aP*h);

		}

	//write_out_Matrix(bu, "bu.txt");
	//write_out_Matrix(bv, "bv.txt");

}
