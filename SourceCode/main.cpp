//#include <iostream>


#include "Variables.h"


int main()

{
	Variables vbs {50,50,100.0};

 double r;

 vbs.fun_p(500);
	for (size_t n = 0; n < 1e7; n++)
	{

		
		vbs.fun_uv();
		vbs.fun_p(100);


		if (n % 20 == 0)
		{
			r = vbs.err_uv();
			vbs.write_out_uvp();
			vbs.write_out_errs();
 			if (r < 1e-4) break;
		}
	}


	vbs.write_out_uvp();
	vbs.write_out_errs();

	return 0;

}


