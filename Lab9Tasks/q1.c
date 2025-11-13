#include <stdio.h>

float avgpatient(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

int busyday(int arr[], int n) {
    int maxIX = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIX]) {
            maxIX = i;
        }
    }
    return maxIX;
}

int slowday(int arr[], int n) {
    int minIX = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIX]) {
            minIX = i;
        }
    }
    return minIX;
}

void inputData(int arr[], int n) {
    printf("Enter the number of patients for each 7 days\n");
    for (int i = 0; i < n; i++) {
        printf("day %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int main() {
    int patients[7];
    int n = 7;

    inputData(patients, n);

    float avg = avgpatient(patients, n);

    int maxday = busyday(patients, n);
    int minday = slowday(patients, n);

    printf("\nAverage number of Patients per Day: %.2f\n", avg);
    printf("Busiest Dayis Day %d (%d patients)\n", maxday + 1, patients[maxday]);
    printf("Slowest Day is Day %d (%d patients)\n", minday + 1, patients[minday]);

    return 0;
}

