#include<stdio.h>

    int main(){
        int i,n,s;
        printf("enter a number");
        scanf("%d" , &n);
        for ( i = 1, s=0; i <=n; s=s+i,i++)
        {
         
           printf("sum is %d" , s);
        }
        
    return 0;
}