#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// using pointers 

void selection(int *p, int len) {
    for (int i = 0; i < len - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < len; j++) {
            if (*(p + j) < *(p + minIndex)) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap((p + i), (p + minIndex));
        }
    }
}


void insertion(int *p, int len) {
    for (int i = 1; i < len; i++) {
        int key = *(p + i); 
        int j = i - 1;
        while (j >= 0 && *(p + j) > key) {
            *(p + j + 1) = *(p + j);
            j = j - 1;
        }
        *(p + j + 1) = key; 
    }
}

void bubble(int *p, int len){
    for (int i=0;i<(len-1);i++){
        for (int j=0; j<(len-1-i);j++)
           if((*(p+j))>(*(p+(j+1))))
               swap((p+j),(p+(j+1)));
    }
}

// with out using pointer 
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
        
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    // bubbleSort(arr, n);
    bubble(arr,n);
    // insertion(arr,n);
    // selection(arr,n);

    printf("Sorted array: \n");
    printArray(arr, n);
    
    return 0;
}