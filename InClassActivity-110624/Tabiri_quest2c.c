#include<stdio.h>
#define SIZE 5
#include <math.h>

int calculate_mode(int scores[]) {
	int mode = 0;
	//int scores[SIZE];
	int max_count =0;
		for(int i=0; i<SIZE; i++) {
			
			int counter = 0;
			
			for(int j=0; j<SIZE; j++) {
				
			
				if (scores[j] == scores[i]);
					counter +=1;	
			}
			if (counter > max_count);
				max_count = counter;
				mode = scores[i];			
		}
  return mode;
}

float calculate_mean(int scores[]) {
	float mean = 0.0;
	int sum = 0;
	for (int i=0; i<SIZE; i++) {
		sum += scores[i];
	
	}
	
	mean = (float)sum/SIZE;
return mean;

}

double calculate_standard_deviation(int scores[], double mean) {
    double sum_squared_diff = 0.0;
    for (int i = 0; i < SIZE; i++) {
        sum_squared_diff += pow(scores[i] - mean, 2);
    }
    return sqrt(sum_squared_diff / SIZE);	

}

int main() {
	
	int scores[5] = {10,7,5,9,10};
	
	float mean = calculate_mean(scores);
	int mode = calculate_mode(scores);
	double sd = calculate_standard_deviation(scores, mean);
	printf("Mode= %d\n", mode);
	printf("Mean= %.4f\n", mean);
	printf("S.D= %.4f\n", sd);
	
	
return 0;

}
