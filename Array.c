#include <stdio.h>
void reverseArray(int *arr, int size) {
    int *start = arr; //pointer to the first ele
    int *end = arr + size - 1; //pointer to the last ele
    int temp;//variable
    while (start < end) {//swap l7d ma el pointers t2f f el middle 
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    int noOfElements;
    printf("Enter The Number of Elements:");
    scanf("%d",&noOfElements);
printf("Enter %d Numbers: ", noOfElements);
int arr[noOfElements];
    for(int i=0;i<noOfElements;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before Reverse:\n");
    for(int i=0;i<noOfElements;i++){
    printf("%d\n",arr[i]);
    }
    reverseArray(arr, noOfElements);
    printf("Array After Reverse:\n");
    for (int i = 0; i < noOfElements; i++) {
        printf("%d\n", arr[i]);
    }
   
}