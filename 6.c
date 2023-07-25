#include<stdio.h>

    int main(){
        int x;
        printf("enter a number");
        scanf("%d" ,  &x);
        printf("last digit is %d"  , x%10);

    return 0;
}