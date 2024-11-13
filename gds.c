#include <stdio.h>


int main () {

int numbers[10] = {2,3,6,7,4,8,5,21,43,24};

int arr_size = sizeof(numbers) / sizeof(numbers[0]);

int *ptr2max = numbers;
for (int i=0; i<arr_size; i++) {
	if (numbers[i] > *ptr2max) {
	
	*ptr2max = numbers[i];
	
	}
	

}

printf("max =%d\n", *ptr2max);

return 0;
}
