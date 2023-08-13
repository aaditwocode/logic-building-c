#include<stdio.h>

    int main(){
        int n ,s;
        printf("enter a number");
        scanf("%d" , &n);
        for ( int i = 1;n>=i; i++)
        {
            
              s=s+2*i-1;
        }
        printf("the sum is %d" , s);
        
    return 0;
}