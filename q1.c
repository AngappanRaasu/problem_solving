//find Number is Odd or Even//
#include <stdio.h>

int main(){
    int num;

    printf("Enter the Number:");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("%d The Number is Even:",num);

    }
    else{
        printf("%d The Number is odd:",num);
    }
}