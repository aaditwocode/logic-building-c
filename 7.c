#include<stdio.h>

    int main(){
        int a,b;
        printf("enter two numbers");
        scanf("%d,%d" , &a,&b);
        b = (a+b)-(a=b);
        printf("%d,%d" , &a,&b); 
    return 0;
}