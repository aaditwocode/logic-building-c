#include<stdio.h>

    int main(){
        int i, k,z;
        printf("enter number");
        scanf("%d" , &i);
        while (i>0)
        {
           k=i%10;
           z=z*10+k;
           i=i/10;
        }
        
         printf("%d" , z);
    return 0;
}