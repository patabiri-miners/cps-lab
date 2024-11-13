#include <stdio.h>
#include <time.h>

/*calculates inner product without any BLAS function and returns the expected answer and time taken to compute the inner product of 2 vectors of length N.

Input: arg1 N
Outpur: inner product and time taken for calculation.
*/

float dot_product(float vect_a[], float vect_b[]) {
	
	int n = sizeof(vect_a)/sizeof(vect_a[0]);
	
	float sum = 0;
	
	for(int i=0; i<n; i++) {
	
	sum += vect_a[i] * vect_b[i];
	
	}
return sum;
}


int main(int argc, char* argv[]) {

	float vect_a[] = {1,2,3};
	float vect_b[] = {2,4,5};
	
	float result = dot_product(vect_a, vect_b);
	
	printf("dot product is %lf\n", result);
		
	clock_t begin, end;
	double time_taken;
	begin = clock();
	
	end = clock();
	time_taken = ( (double) (end-begin) )/CLOCKS_PER_SEC;
	printf("time taken for this code = %f seconds \n", time_taken);
	
	
	return 0;
}
