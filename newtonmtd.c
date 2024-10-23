#include <stdio.h>
#include <math.h>

double function(double x) {
	return pow(x, 6) - x -1;
}

double dfunction(double x) {
	return 6*pow(x, 5) - 1;
}

double newton_method(double x0, int max_iter, double delta, double tol) {

	for (int k=1; k<max_iter; k++) {
		double x = x0 - (function(x0)/dfunction(x0));
	
		if (fabs(x - x0) < delta || fabs(function(x)) < tol) {
			return x;
		}
		else {
			x0 = x;
		}	
	} 
	
	
}

int main() {
	double x0 = 1.0;
	int max_iter = 10;
	double tol = pow(10, -12);
	double delta = pow(10, -6);
	
	double root = newton_method(x0, max_iter, delta, tol);
	
	printf("Root is using newton: %lf ",root); 
}
