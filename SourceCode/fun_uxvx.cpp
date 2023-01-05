
#include "Variables.h"


void Variables::fun_uxvx()

{
	static double ae, aw, an, as,
		   ue, uw, un, us,
		   ve, vw, vn, vs;


for (size_t i = 0; i < I; i++)
	for (size_t j = 0; j < J; j++)
	{
		ae = aP / 4.0 - u(i, j) / h; aw = aP / 4.0 + u(i, j) / h;
		an = aP / 4.0 - v(i, j) / h; as = aP / 4.0 + v(i, j) / h;

		if (i == 0) { uw =0.0; vw =0.0; }
		else { uw = (u(i-1, j) + u(i, j)) / 2.0; vw = (v(i-1, j) + v(i, j)) / 2.0;}


		if (i == I - 1) {ue = 0.0; ve =  0.0; }
		else { ue = (u(i, j) + u(i+1, j)) / 2.0; ve = (v(i, j) + v(i + 1, j)) / 2.0;}


		if (j == 0) { us = 0.0; vs = 0.0; }
		else { us= (u(i, j - 1)+ u(i, j))/2.0; vs = (v(i, j - 1)+ v(i, j ))/2.0; }

		if (j == J - 1) { un = 1.0; vn = 0.0; }
		else{un = (u(i, j)+u(i, j + 1))/2.0; vn= (v(i, j)+v(i, j + 1))/2.0;}


		ux(i, j) = (ae*ue + aw*uw + an*un + as*us) / aP;
		vx(i, j) = (ae*ve + aw*vw + an*vn + as*vs) / aP;

	}






}
