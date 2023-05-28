
#include <stdio.h>

int main() {
    int n, i, j, temp, arr[50];
    float mean, median;
    int mode = 0, maxCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate mean
    mean = 0;
    for(i=0; i<n; i++) {
        mean += arr[i];
    }
    mean /= n;
    printf("Mean = %.2f\n", mean);

    // Calculate median
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(n % 2 == 0) {
        median = (float)(arr[n/2-1] + arr[n/2])/2;
    } else {
        median = arr[n/2];
    }
    printf("Median = %.2f\n", median);

    // Calculate mode
    for(i=0; i<n; i++) {
        int count = 0;
        for(j=0; j<n; j++) {
            if(arr[j] == arr[i]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    printf("Mode = %d\n", mode);

    return 0;
}

/*

This program prompts the user to enter the number of elements 
and the elements, then calculates the mean, median and mode of the elements. 
The mean is the average of the elements, the median is the middle element 
(or the average of the two middle elements if there are an even number of elements), 
and the mode is the element that appears most frequently in the list.

*/