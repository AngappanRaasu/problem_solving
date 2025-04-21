#include <stdio.h>

int main() {
    int arr[] = {2, 3, 44, 55};  
    int n = 4;                   
    int x, i, index = -1;        

    printf("Enter the element to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            index = i;
            break;
        }
    }

    if(index != -1) {
        printf("The element %d is found at index %d.\n", x, index);
    } else {
        printf("The element %d is not found in the array.\n", x);
    }

    return 0;
}
