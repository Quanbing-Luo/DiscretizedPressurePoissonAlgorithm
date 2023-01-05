#include "Variables.h"

void Variables::fun_p(const size_t n_max)
{

	std::vector<double>  errs;
	errs.reserve(1000); 
	double r;
	//((n>0) ? 100 : 500)

	fun_uxvx();
	fun_bp();

	for (size_t n = 0; n <= n_max; n++)
	{

		fun_px();


		for (size_t i = 0; i < I; i++)
			for (size_t j = 0; j < J; j++)
			{			

				Merrs_p(i, j) = px(i, j) + bp(i, j)- p(i, j);

				p(i, j) = p(i, j) + Merrs_p(i, j);
			}


		//if (n % 100 == 0)
		//{
		//	r = err_p(errs);
		//	
		//	//write_out_Matrix(p,"p.txt");

		//	//write_out_Matrix(ux, "u.txt");
		//	//write_out_Matrix(vx, "v.txt");
		//	//write_out_Matrix(px, "px.txt");
		//	//write_out_Matrix(bp, "bp.txt");
		//if (r < 1e-8) ;
		//}
	}


}
