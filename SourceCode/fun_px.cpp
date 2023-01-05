#include "Variables.h"

void Variables::fun_px()
{
	static	double pe, pw, pn, ps,
		uxe, uxw, vxn, vxs, bp;

		for (size_t i = 0; i < I; i++)
			for (size_t j = 0; j < J; j++)
			{

				if (i == 0) pw = p(i, j); 
				else pw = (p(i - 1, j) + p(i, j)) / 2.0;  


				if (i == I - 1)  pe = p(i, j); 
				else  pe = (p(i, j) + p(i + 1, j)) / 2.0; 


				if (j == 0) ps = p(i, j); 
				else ps = (p(i, j - 1) + p(i, j)) / 2.0; 

				if (j == J - 1)  pn = p(i, j); 
				else pn = (p(i, j) + p(i, j + 1)) / 2.0; 


				px(i, j) = (pe + pw + pn + ps) / 4.0;


			}

	


}
