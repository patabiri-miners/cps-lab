#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 30



void calculate_mode(int data[]) {
    int frequency[101] = {0}; 
    int maxCount = 0;

    
    for (int i = 0; i < SIZE; i++) {
        frequency[data[i]]++;
        if (frequency[data[i]] > maxCount) {
            maxCount = frequency[data[i]];
        }
    }

    
    printf("Mode= ");
    for (int i = 0; i < 101; i++) {
        if (frequency[i] == maxCount) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


int main() {
    int scores[SIZE];
    int i = 0;

    
    FILE *in_file = fopen("scores-data.txt", "r");
    if (!in_file) { 
        printf("Oops, file can't be read\n");
        exit(-1);
    }

    
    while (fscanf(in_file, "%d", &scores[i]) == 1 && i < SIZE) {
        i++;
    }
    fclose(in_file); 
    
    calculate_mode(scores);

    return 0;
}

