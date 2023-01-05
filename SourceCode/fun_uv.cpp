#include "Variables.h"

void Variables::fun_uv()
{
	fun_bubv();

	for (size_t i = 0; i < I; i++)
		for (size_t j = 0; j < J; j++)
		{


			Merrs_u(i, j) = ux(i , j) + bu(i, j) - u(i, j);
			Merrs_v(i, j) = vx(i , j) + bv(i, j) - v(i, j);

			u(i, j) += Merrs_u(i, j);
			v(i, j) += Merrs_v(i, j);

		}



}
