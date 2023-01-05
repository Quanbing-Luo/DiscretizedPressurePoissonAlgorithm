#include "Variables.h"


void Variables::fun_bp()
{

static	double 	uxe, uxw, vxn, vxs;

for (size_t i = 0; i < I; i++)
	for (size_t j = 0; j < J; j++)
	{

		if (i == 0) uxw = 0.0; 
		else uxw = (ux(i - 1, j) + ux(i, j)) / 2.0; 


		if (i == I - 1)  uxe = 0.0; 
		else uxe = (ux(i, j) + ux(i + 1, j)) / 2.0; 


		if (j == 0)  vxs = 0.0; 
		else vxs = (vx(i, j - 1) + vx(i, j)) / 2.0; 

		if (j == J - 1)  vxn = 0.0; 
		else vxn = (vx(i, j) + vx(i, j + 1)) / 2.0; 

		bp(i,j) = -1.0/8.0*aP*h*(uxe - uxw + vxn - vxs);

	}



}
