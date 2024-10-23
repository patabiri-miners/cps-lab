#include <stdio.h>
#include <math.h>

double func(double x) {
	return pow(x, 6) - x - 1;
}


int main() {

double x0 = 1.0 ;
double x1 = 1.5;
int max_iter = 50;
double tol = pow(10, -12);

double delta = pow(10, -6);



double secant_method(double x0, double x1, int max_iter, double delta, double tol) {
	
		printf("	Iteration No.		Root		f(root)\n");
	for (int k=1; k<max_iter; k++) {
		if (func(x0) == func(x1)) {
			printf("f(%lf) = f(%lf) Use different values of x0 and x1\n", x0, x1);
		}
		
		double s = (x1 - x0)/(func(x1) -func(x0));
		double x = x1 - func(x1)*s;
		
		
		printf("		%d		 %lf		  %lf\n", k, x, func(x));
		
		
		if ( fabs(x)<tol || fabs(x1-x0)<delta) {
			return x;
		}
		else { 
			x0 = x1;
			x1 = x;
		}
	}
}

double root = secant_method(x0, x1, max_iter, delta, tol);



return 0;
}
