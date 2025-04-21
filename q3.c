//Find The Largest Number in the Array//
#include <stdio.h>

int main(){
    int i,n,arr[200] , max;
    printf("Enter The Number Of Elements:");
    scanf("%d",&n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i= 0; i< n-1;i++){
        for(int j= i;j< n-i-1; j++){
            if(arr[j]> arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }

    printf("The Largest Element:%d\n ",arr[n-1]);
        
    return 0;
}
