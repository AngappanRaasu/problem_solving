<<<<<<< HEAD
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
=======
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
c = int(input("Enter third number: "))

if a >= b and a >= c:
    largest = a
elif b >= a and b >= c:
    largest = b
else:
    largest = c

print("Largest number is:", largest)
>>>>>>> 4e19076ff38441202ed8f51b294f56c068f2249f
