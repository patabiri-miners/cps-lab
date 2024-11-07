#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
#include<math.h>


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



int main()
    {
          int scores[SIZE]; 
          int i=0;
          
          FILE* in_file = fopen("scores-data.txt", "r"); //only open a pre-exisiting file in read mode. 
         
          if (! in_file ) // equivalent to saying if ( in_file == NULL ) 
             {  
                printf("oops, file can't be read\n"); 
                exit(-1); 
             } 
          // attempt to read the next line and store 
          // the value in the "number" variable 
          while ( fscanf(in_file, "%d", &scores[i] ) == 1 )  
             { 
               
               
               if ( i<SIZE)
               {
               scores[i] = scores[i];
               i++;
               
               
               } 
             } 
        float mean = calculate_mean(scores);
	int mode = calculate_mode(scores);
	double sd = calculate_standard_deviation(scores, mean);
	printf("Mode= %d\n", mode);
	printf("Mean= %.4f\n", mean);
	printf("S.D= %.4f\n", sd);
      return 0;
    }
    
