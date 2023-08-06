#include<stdio.h>

    int main(){
        int a , s;
        printf("enter a number");
        scanf("%d" , &a);
        for (int i = 1, s=0; i <= a;  i++)
        {
           s=s+i;
           printf("the series is %d\n" ,  s); 
        }
        
    return 0;
}