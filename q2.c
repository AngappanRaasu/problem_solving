// Sum of Elements in Array//
#include <stdio.h>

int main(){

    int sum=0;
    int n,arr[100];

    printf("Enter The Number Of Elements:");
    scanf("%d",&n);

    printf("Enter the %d Elements:",n);
    for(int i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //calculate the SUM OF ARRAY//
    for(int i= 0; i<n;i++){
        sum+=arr[i];
    }

    printf("Sum of The Array Elements:%d",sum);

    return 0;
}