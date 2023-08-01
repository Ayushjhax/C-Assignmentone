#include <stdio.h>
#include <math.h>


int sum(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++)
        result += arr[i];
    return result;
}


float average(int arr[], int n) {
    return (float)sum(arr, n) / n;
}


float mean(int arr[], int n) {
    int middle = n / 2;
    if (n % 2 == 0) {
        return (float)(arr[middle - 1] + arr[middle]) / 2;
    } else {
        return arr[middle];
    }
}


int mode(int arr[], int n) {
    int maxCount = 0, maxValue = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            maxValue = arr[i];
        }
    }
    return maxValue;
}


float standardDeviation(int arr[], int n) {
    float avg = average(arr, n);
    float sumSqDiff = 0;
    for (int i = 0; i < n; i++) {
        float diff = arr[i] - avg;
        sumSqDiff += diff * diff;
    }
    return sqrt(sumSqDiff / n);
}

int main() {
    int n;
    printf("Enter the size of the integer array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum: %d\n", sum(arr, n));
    printf("Average: %.2f\n", average(arr, n));
    printf("Mean: %.2f\n", mean(arr, n));
    printf("Mode: %d\n", mode(arr, n));
    printf("Standard Deviation: %.2f\n", standardDeviation(arr, n));

    return 0;
}
