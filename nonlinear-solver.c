#include <stdio.h>
#include <math.h>

#define max_iter 50
#define tol pow(10, -12)
#define delta pow(10, -6)

// BISECTION METHOD
double function(double x) {

 return pow(x, 6) - x - 1;
}

double bisection_method(double a, double b) {

double c;

for( int k=1;  k < max_iter; k++) {

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

printf("root using bisection method is = %lf\n", c);

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

// NEWTON'S METHOD
double dfunction(double x) {
	return 6*pow(x, 5) - 1;
}

double newton_method(double x0 ) {

	for (int k=1; k<max_iter; k++) {
		double x = x0 - (function(x0)/dfunction(x0));
	
		if (fabs(x - x0) < delta || fabs(function(x)) < tol) {
		
		printf("root using newton's method is = %lf\n", x);
			return x;
		}
		else {
			x0 = x;
		}	
	} 
	
	
}

// SECANT'S METHOD
double secant_method(double x0, double x1) {
	
		printf("	Iteration No.		Root		f(root)\n");
	for (int k=1; k<max_iter; k++) {
		if (function(x0) == function(x1)) {
			printf("f(%lf) = f(%lf) Use different values of x0 and x1\n", x0, x1);
		}
		
		double s = (x1 - x0)/(function(x1) -function(x0));
		double x = x1 - function(x1)*s;
		
		
		printf("		%d		 %lf		  %lf\n", k, x, function(x));
		
		
		if ( fabs(x)<tol || fabs(x1-x0)<delta) {
			return x;
		}
		else { 
			x0 = x1;
			x1 = x;
		}
	}
}

int main() {

double a = 1.0 ;
double b = 1.5;
int k;

double x0 = 1.0;
double x1 = 1.5;


int input;

double root = bisection_method(a, b);

printf("root using bisection method is = %lf\n", root);

	printf( "1. bisection\n" );
        printf( "2. Newton\n" );
        printf( "3. Secant\n" );
        printf( "4. Exit\n" );
        printf( "Selection: " );
        scanf( "%d", &input );

switch ( input ) {
            case 1:            /* Note the colon, not a semicolon */
                bisection_method(a,b);
                break;
            case 2:          
                newton_method(x0);
                break;
            case 3:         
                secant_method(x0, x1);
                break;
            case 4:        
                printf( "Exit\n" );
                break;
            default:            
                printf( "Bad input, quitting!\n" );
                break;
        }//end of switch
 

return 0;
}
