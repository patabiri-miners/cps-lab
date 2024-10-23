#include <stdio.h>
#include <math.h>

double function(double x) {

 return pow(x, 6) - x - 1;
}

double bisection_method(double a, double b, int max_iter, double delta, double tol, int k) {

double c;

for( k=1;  k < max_iter; k++) {

double u = function(a);
double v = function(b);

if (u * v >= 0 ) {

printf("f(a) and f(b) can't have the same size");
break;

}

double e = (b-a)/2 ;

c = a+e;

double w = function(c);


if (fabs(e) < delta || fabs(w) < tol) {
return c;

}

if (u*w <0) {
b = c;

}

else {
	a = c;
} 

}



}

int main() {

double a = 1.0 ;
double b = 1.5;
int max_iter = 50;
double tol = pow(10, -12);
int k;

double delta = pow(10, -6);

double root = bisection_method(a, b, max_iter, delta, tol, k);

printf("root using bisection method is = %lf\n", root);



return 0;
}
